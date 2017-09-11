@echo off
call "%VS140COMNTOOLS%"\..\..\VC\bin\amd64\vcvars64
cl -nologo test.c prod.c /Wall /link
test.exe
if %ERRORLEVEL% neq 0 (
	echo FAILED %ERRORLEVEL%
) else (
	echo SUCCESS
)
pause
