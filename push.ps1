<#
    push.ps1
    --------
    One-command commit + push for your LC codes folder.

    USAGE (run from inside your "LC codes" folder in PowerShell):
        .\push.ps1 "Two Sum, Contains Duplicate"

    The text in quotes becomes part of the commit message.
    If you don't pass anything, it just uses today's date.
#>

param(
    [string]$Message = ""
)

$today = Get-Date -Format "dd-MM-yyyy"

if ($Message -eq "") {
    $commitMsg = "DSA practice - $today"
} else {
    $commitMsg = "$today: $Message"
}

git add .
git commit -m "$commitMsg"
git push origin main

Write-Host ""
Write-Host "Pushed with message: '$commitMsg'" -ForegroundColor Green
