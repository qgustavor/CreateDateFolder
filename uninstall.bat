@echo off
setlocal

reg delete "HKCR\Directory\Background\shell\CreateDateFolder\command" /f
reg delete "HKCR\Directory\Background\shell\CreateDateFolder" /f

echo.
echo Aplicativo deinstalado com sucesso
pause
