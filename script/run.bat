@echo off
set MINGW_PATH=%~dp0..\tools\strawberry32\c\bin
set PATH=%MINGW_PATH%;%PATH%
CALL ..\src\output
pause