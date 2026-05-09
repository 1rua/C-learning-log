@echo off
chcp 65001 >nul
echo Configuring Visual Studio compiler environment variables...

REM Set cl.exe path (user level)
setx PATH "%PATH%;D:\Program Files\visual studio\visual studio\VC\Tools\MSVC\14.50.35717\bin\Hostx64\x64;D:\Program Files\visual studio\visual studio\VC\Auxiliary\Build"

REM Set INCLUDE path (user level)
setx INCLUDE "%INCLUDE%;D:\Program Files\visual studio\visual studio\VC\Tools\MSVC\14.50.35717\include;D:\Program Files\visual studio\visual studio\VC\Auxiliary\VS\include"

REM Set LIB path (user level)
setx LIB "%LIB%;D:\Program Files\visual studio\visual studio\VC\Tools\MSVC\14.50.35717\lib\x64;D:\Program Files\visual studio\visual studio\VC\Auxiliary\VS\lib\x64"

echo.
echo Environment variables configured successfully!
echo Please restart VS Code and all terminal windows for changes to take effect.
echo.
pause