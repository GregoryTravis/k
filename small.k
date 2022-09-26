fun foo()
{
  show "asdfasdf\n";
  return 1;
}

// foo();

fun fib(n)
{
  if (n == 0) {
    return 1;
  } else {
    return n * fib(n-1);
  }
}

show fib(10);
