
COMPILER_C=cl
COMPILER_C_FLAGS=/nologo /Wall /link
COMPILER_C_OUTPUT=/Fe
PREREQUISITES_ALL=$**
EXECUTABLE_SUFFIX=.exe
REMOVE_FILE=del

asserter_test$(EXECUTABLE_SUFFIX): asserter/test.c asserter/prod.c
	$(COMPILER_C) $(PREREQUISITES_ALL) $(COMPILER_C_OUTPUT)$@ $(COMPILER_C_FLAGS)
	$@

.PHONY:clean
clean:
	$(REMOVE_FILE) *.exe *.obj

