make clean
make k engine
k fib.k > tout
k small.k >> tout
k objs.k >> tout
k ctors.k >> tout
engine >> tout
diff tout.golden tout
