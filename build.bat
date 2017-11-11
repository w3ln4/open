@echo off
call "%VS140COMNTOOLS%"\..\..\VC\bin\amd64\vcvars64
nmake /nologo /F Makefile.windows %1
pause
