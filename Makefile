
asserter_test: asserter/test.c asserter/prod.c
	cl -nologo $** /Wall /Fe$@ /link
	$@

