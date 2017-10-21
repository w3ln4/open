@echo off
call "%VS140COMNTOOLS%"\..\..\VC\bin\amd64\vcvars64
nmake asserter_test
pause
