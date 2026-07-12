$ErrorActionPreference = "Stop"

Write-Host "Configuring Git LFS for large file..."
git lfs track "1st Semester/Pak-studies/Books/Pak Studies by M R Kazmi .pdf"
git add .gitattributes
git commit -m "Configure Git LFS for large PDF"
git push

Write-Host "Getting list of missing/ignored files..."
$files = git ls-files --others --ignored --exclude-standard

if ($files.Count -eq 0) {
    Write-Host "No missing files found."
    exit
}

Write-Host "Found $($files.Count) files. Starting batch push..."

$batchSize = 20
$totalBatches = [Math]::Ceiling($files.Count / $batchSize)

for ($i = 0; $i -lt $totalBatches; $i++) {
    $start = $i * $batchSize
    $end = [Math]::Min($start + $batchSize, $files.Count)
    $batch = $files[$start..($end - 1)]

    Write-Host "Processing batch $($i + 1) of $totalBatches ($($batch.Count) files)..."
    
    foreach ($file in $batch) {
        git add --force "$file"
    }

    git commit -m "Batch add missing files ($($i + 1)/$totalBatches)"
    
    Write-Host "Pushing batch $($i + 1)..."
    git push

    if ($LASTEXITCODE -ne 0) {
        Write-Host "Error pushing batch $($i + 1). Stopping."
        exit 1
    }
}

Write-Host "All batches pushed successfully!"
