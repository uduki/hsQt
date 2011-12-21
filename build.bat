@echo off
REM REMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREM
REM     
REM     File      : build.bat
REM     Copyright : (c) David Harley 2010
REM     Project   : qtHaskell
REM     Version   : 1.1.4
REM     Modified  : 2010-09-02 17:01:40
REM     
REM     Warning   : this file is machine generated - do not modify.
REM     
REM REMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREMREM

if "%sp%" == "1" goto main
set sp=1
set path=%cd%\qws\bin;%cd%\bin;%path%
:main
perl build.pl %*

