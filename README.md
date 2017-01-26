# tst
Header only test framework for C

### Usage
* Write your tests as void functions in a C file - see example `tt.c`.
* Optionally run code generator to get the footer of the test files: BEGIN; TEST(test_case); END; - `make footer` command.
* Compile with `make all` - see the example `Makefile`
* Run tests with `make check` command or by simply running the compiled binary(s).
* Filter the test cases by passing parameters `./tt bad` or skip `./tt -skip str`.
* The return code is the number of failing test cases, 0 on success.
