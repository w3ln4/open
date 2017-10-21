
asserter_test: asserter/test.c
	cl -nologo $? /Wall /Fe$@ /link
	$@

