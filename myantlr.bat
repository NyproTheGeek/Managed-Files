echo off
:: 29/12/16 My first batch script.
:: no space at both sides of an `=` operator. That wasted my time.
:: example command => myantlr Hello
:: Hello is the G4 grammar file name.

:: getting file directory and name
set fileDir=%1
set fileName=%fileDir%.g4
set filePath=%fileDir%\%fileName%

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

echo %filePath%

:: this generates the java source codes
java -cp C:\Users\Nypro\Desktop\Code\Libs\antlr-4.6-complete.jar;%CLASSPATH% org.antlr.v4.Tool %filePath% %args%

:: this compiles the java source codes
javac %fileDir%\*.java

:: this generates the python source codes
java -cp C:\Users\Nypro\Desktop\Code\Libs\antlr-4.6-complete.jar;%CLASSPATH% org.antlr.v4.Tool -Dlanguage=Python3 %filePath%%args%
