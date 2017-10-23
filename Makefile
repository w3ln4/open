
asserter_test: asserter/test.c asserter/prod.c
	cl -nologo $** /Wall /Fe$@ /link
	$@

.PHONY:clean
clean:
	rm -f *.exe *.obj

