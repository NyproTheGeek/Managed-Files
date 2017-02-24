:: 29/12/16 my second batch script
echo off

:: getting grammar directory, grammar name and other arguments
set grammarDir=%1

:::: getting everything after %1
:::: shift repositions the cursor of the next cmd arg
set args=
shift
:loop
    if "%1" == "" goto aftloop
    set args=%args% %1
    shift
goto loop
:aftloop

:: capturing current directory
set oldDir=%CD%

:: moving to the appropriate directory
cd %grammarDir%

:: executing grun command
java -cp .;C:\Users\Nypro\Desktop\Code\Libs\antlr-4.6-complete.jar org.antlr.v4.gui.TestRig %grammarDir% %args%

:: going back to the previous directory
cd %oldDir%
