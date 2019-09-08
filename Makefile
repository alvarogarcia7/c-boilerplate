.PHONY: test
test: exec
	./make-tests.sh > AllTests.c
	clang AllTests.c CuTest.c CuTestTest.c example.c exampleTest.c itoa.c -o tests
	./tests
