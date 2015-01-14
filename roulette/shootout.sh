N=100

echo 
echo "=== BUILDING ==="
make

echo
echo "====== D ======="
time ./D/roulette $N

echo
echo "===== PHP ======"
time php ./PHP/roulette.php $N

echo 
echo "=== Python ====="
time python ./Python/roulette.py $N

echo
echo "==== Java ======"
cd Java
time java Roulette $N
cd ..

echo 
echo "===== C++ ====="
time ./C++/roulette
