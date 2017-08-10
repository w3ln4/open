call "%VS140COMNTOOLS%"\..\..\VC\bin\amd64\vcvars64
cl -nologo test.c /link
pause
