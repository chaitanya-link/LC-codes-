param(
    [Parameter(Mandatory=$true)][int]$Num,
    [Parameter(Mandatory=$true)][string]$Slug
)

$fileName = "q${Num}_${Slug}.cpp"

if (Test-Path $fileName) {
    Write-Host "File '$fileName' already exists. Open it directly instead." -ForegroundColor Yellow
    exit
}

if (-not (Test-Path "template.cpp")) {
    Write-Host "template.cpp not found in this folder. Make sure it's here first." -ForegroundColor Red
    exit
}

$today = Get-Date -Format "dd-MM-yyyy"
(Get-Content "template.cpp") -replace '<DD-MM-YYYY>', $today | Set-Content $fileName

Write-Host "Created $fileName - open it, solve the problem, then run .\push.ps1" -ForegroundColor Green