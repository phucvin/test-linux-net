```
$ gcc -o openfile openfile.c
$ ./openfile
Calling the fopen() function...
fopen() succeeded
$ gcc -o libmyfopen.so libmyfopen.c
$ LD_PRELOAD=./libmyfopen.so ./openfile

```

References:
- https://catonmat.net/simple-ld-preload-tutorial