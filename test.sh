cd srcs
make
gcc -w tester.c -o test -L. -lasm
mv test ..
cd ..
./test
rm test
cd srcs
rm libasm.a
cd ..
