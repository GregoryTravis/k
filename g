(make sexp.o) 2>&1 | tee out
exit

(ccc -vb -u kp.ccc) 2>&1 | tee out
exit

(make) 2>&1 | tee out
