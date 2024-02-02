```
$ sh <(curl -L https://nixos.org/nix/install) --no-daemon
$ cowsay
bash: cowsay: command not found
$ nix-shell -p cowsay lolcat
$ cowsay Hello, Nix! | lolcat
<OK>
$ exit
$ cowsay
bash: cowsay: command not found
```

```
nix-shell -p hello --run hello
```