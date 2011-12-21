@echo off
REM REMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREM
REM     
REM     File      : qhc.bat
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
if "%p1%" == "-all" goto all
call qhcs %p1% %p2%
if errorlevel 1 goto exit1
goto end
:all
  for %%x in (*.hs) do echo . %%~nx & call qhcs %%~nx %p2% -v0 & if errorlevel 1 goto exit1
:end
set p1=
set p2=
:exit1

