(make clean && make) 2>&1 | tee out
L out
exit

(make && k small.k) 2>&1 | tee out
exit

(ccc -vb -u kp.ccc) 2>&1 | tee out
exit

(make) 2>&1 | tee out
