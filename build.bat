@echo off
call "%VS140COMNTOOLS%"\..\..\VC\bin\amd64\vcvars64
nmake /nologo /R /F Makefile.windows %1
pause
