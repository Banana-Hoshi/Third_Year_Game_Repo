@ECHO OFF
REM BFCPEOPTIONSTART
REM Advanced BAT to EXE Converter www.BatToExeConverter.com
REM BFCPEEXE=
REM BFCPEICON=
REM BFCPEICONINDEX=-1
REM BFCPEEMBEDDISPLAY=0
REM BFCPEEMBEDDELETE=1
REM BFCPEADMINEXE=0
REM BFCPEINVISEXE=0
REM BFCPEVERINCLUDE=1
REM BFCPEVERVERSION=1.0.0.0
REM BFCPEVERPRODUCT=Project Rebuild From Source
REM BFCPEVERDESC=This will delete the necessary folders
REM BFCPEVERCOMPANY=Dylan Mills
REM BFCPEVERCOPYRIGHT=Copyright Info
REM BFCPEWINDOWCENTER=1
REM BFCPEDISABLEQE=0
REM BFCPEWINDOWHEIGHT=30
REM BFCPEWINDOWWIDTH=120
REM BFCPEWTITLE=Rebuild From Source
REM BFCPEOPTIONEND
@echo off

REM Define the folders to be deleted
set "folders=Binaries Build Intermediate Saved"

REM Delete the folders
for %%i in (%folders%) do (
    if exist "%%i" (
        echo Deleting folder: %%i
        rd /s /q "%%i"
    ) else (
        echo Folder not found: %%i
    )
)

REM Delete the .sln file
if exist Project_Skate.sln (
    echo Deleting .sln file
    del Project_Skate.sln
) else (
    echo .sln file not found
)

REM Define the path to UnrealBuildTool executable
set "UnrealBuildToolPath=C:\Program Files\Epic Games\UE_5.2\Engine\Binaries\DotNET\UnrealBuildTool\UnrealBuildTool.exe"

REM Automatically generate the game project path
set "GameProjectPath=%~dp0Project_Skate.uproject"

REM Generate Visual Studio project files from uproject file
if exist Project_Skate.uproject (
    echo Generating Visual Studio project files...
    "%UnrealBuildToolPath%" Project_Skate Win64 Development -projectfiles -game -project="%GameProjectPath%"
    if errorlevel 1 (
        echo Error: Failed to generate project files.
        pause
        exit /b 1
    ) else (
        echo Project files generated successfully.
    )

    REM Check if .sln file was generated
    if exist Project_Skate.sln (
        echo .sln file generated successfully.
    ) else (
        echo Error: .sln file not generated.
        exit /b 1
    )

    REM Open the generated .sln file
    start Project_Skate.sln
) else (
    echo uproject file not found
    pause
    exit /b 1
)

REM Define the path to Visual Studio 2022 devenv executable
set "VisualStudioPath=C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\devenv.exe"

REM Define the path to the solution file
set "SolutionPath=%~dp0Project_Skate.sln"

REM Check if the solution file exists
if not exist "%SolutionPath%" (
    echo Error: Solution file not found.
    pause
    exit /b 1
)

echo Once VS has opened, right click on Project Skate and Click Build, 
echo Once the build is successful, you may open Project_Skate.uproject as normal 

pause
