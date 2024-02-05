```
$ nix-shell -p proot
$ mkdir slackware15rootfs && cd slackware15rootfs
$ wget https://images.linuxcontainers.org/images/slackware/15.0/amd64/default/20240204_23%3A08/rootfs.tar.xz
$ tar xf rootfs.tar.xz
$ proot -r . -0
$ id
```

References:
- https://proot-me.github.io/