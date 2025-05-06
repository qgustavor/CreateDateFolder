@echo off
setlocal

set "EXE_PATH=%~dp0CreateDateFolder.exe"
reg add "HKCR\Directory\Background\shell\CreateDateFolder" /ve /d "Criar pasta com data de hoje" /f
reg add "HKCR\Directory\Background\shell\CreateDateFolder" /v "icon" /d "%EXE_PATH%" /f
reg add "HKCR\Directory\Background\shell\CreateDateFolder\command" /ve /d "\"%EXE_PATH%\" \"%%v\"" /f

echo.
echo Aplicativo instalado com sucesso
pause
