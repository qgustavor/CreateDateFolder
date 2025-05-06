@echo off
setlocal

reg delete "HKCU\Directory\Background\shell\CreateDateFolder\command" /f
reg delete "HKCU\Directory\Background\shell\CreateDateFolder" /f

echo.
echo Aplicativo deinstalado com sucesso
pause
