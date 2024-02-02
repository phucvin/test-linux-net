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
$ nix-shell -p hello --run hello
```

```
$ nix-shell
...
Welcome to Nix Shell with rustc installed
$ rustc hellorust.rs
$ ./hellorust
Hello Rust!
$ exit
$ ./hellorust
Hello Rust!
```

```
$ nix-shell -p rustup wasmtime
$ rustup default stable
$ rustup target add wasm32-wasi
$ rustc hellorust.rs --target wasm32-wasi
$ wasmtime hellorust.wasm
```

```
$ nix-shell -p wabt wastime
$ wat2wasm hellowat.wat > hellowat.wasm
```