@echo off
REM REMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREM
REM     
REM     File      : qbe.bat
REM     Copyright : (c) David Harley 2010
REM     Project   : qtHaskell
REM     Version   : 1.1.4
REM     Modified  : 2010-09-02 17:01:40
REM     
REM     Warning   : this file is machine generated - do not modify.
REM     
REM REMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREM

if "%1" == "" goto end
set p1=
set p2=
:loop
if "%1" == "" goto endloop
if not "%p1%" == "" goto add
set p1=%1
goto next
:add
if "%p2%" == "" goto add2
set p2=%p2% %1
goto next
:add2
set p2=%1
:next
shift
goto loop
:endloop
echo building %p1% for qtc-1.1.4
qhc -all %p2%
:end
set p1=
set p2=
