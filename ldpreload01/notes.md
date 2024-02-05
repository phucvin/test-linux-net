```
$ gcc -o openfile openfile.c
$ ./openfile
Calling the fopen() function...
fopen() succeeded
$ gcc -shared -o libmyfopen.so libmyfopen.c
$ LD_PRELOAD=./libmyfopen.so ./openfile
Calling the fopen() function...
Always failing fopen
fopen() returned NULL, errno: Function not implemented
```

References:
- https://catonmat.net/simple-ld-preload-tutorial