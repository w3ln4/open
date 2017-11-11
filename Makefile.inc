
asserter_test$(EXECUTABLE_SUFFIX): asserter/test.c asserter/prod.c
	$(COMPILER_C) $(PREREQUISITES_ALL) $(COMPILER_C_OUTPUT)$@ $(COMPILER_C_FLAGS)
	.$(DIRECTORY_SEPARATOR)$@

.PHONY:clean
clean:
	$(REMOVE_FILE) asserter_test$(EXECUTABLE_SUFFIX) *.obj

