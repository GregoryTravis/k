make clean
make k
k fib.k > tout
k small.k >> tout
k objs.k >> tout
k ctors.k >> tout
diff tout.golden tout
