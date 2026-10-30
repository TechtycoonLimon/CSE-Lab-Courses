@echo off
setlocal
set "MSYS2_ROOT=C:\msys64"
set "PATH=%MSYS2_ROOT%\mingw64\bin;%MSYS2_ROOT%\usr\bin;%PATH%"
"%MSYS2_ROOT%\usr\bin\make.exe" %*
exit /b %ERRORLEVEL%
