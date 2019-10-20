gcc -shared -fPIC -o libdylib.so aoprand.c base.c
gcc -o localtest localdytest.c ./libdylib.so
./localtest
