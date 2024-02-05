```
$ git clone https://github.com/saminiir/level-ip.git
$ cd level-ip
$ git checkout e9ceb08f01a5499b85f03e2d615309c655b97e8f
$ make
$ sudo mknod /dev/net/tap c 10 200
$ ./lvl-ip

# In another shell:
$ ip addr
$ sudo ip link set dev tap0 up
$ sudo ip addr add dev tap0 10.0.0.1
$ arping -I tap0 10.0.0.4
42 bytes from 00:0c:29:6d:50:25 (10.0.0.4): index=0 time=242.152 usec
42 bytes from 00:0c:29:6d:50:25 (10.0.0.4): index=1 time=398.775 usec
42 bytes from 00:0c:29:6d:50:25 (10.0.0.4): index=2 time=332.461 usec
```

References:
- https://github.com/saminiir/level-ip/tree/e9ceb08f01a5499b85f03e2d615309c655b97e8f