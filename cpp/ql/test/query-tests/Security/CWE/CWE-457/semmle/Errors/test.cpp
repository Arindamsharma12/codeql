// semmle-extractor-options: --expect_errors

int f() {
  int x;
  initialize(&x); // error expression - initialize() is not defined
  return x;       // GOOD - assume x is initialized
}
