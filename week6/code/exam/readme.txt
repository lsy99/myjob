gcc -rdynamic -o remotetest2 remotetest2.c -ldl -I../dynamiclib
./remotetest2
gcc -o remotetest1 remotetest1.c ../dynamiclib/libdylib.so -I../dynamiclib
./remotetest1
