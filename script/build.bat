@echo off
echo "Cleaning the old executable .... "
IF EXIST ..\src\output.exe DEL /F ..\src\output.exe | echo " Found and Deleted....."
IF EXIST ..\reports\Report.html DEL /F ..\reports\Report.html | echo " Found report.html and Deleted....."
set MINGW_PATH=%~dp0..\tools\strawberry32\c\bin
set PATH=%MINGW_PATH%;%PATH%
echo "Building the Application...."
CALL %MINGW_PATH%\g++ ..\src\driver.cpp -o ..\src\output
CALL ..\src\output
pause
