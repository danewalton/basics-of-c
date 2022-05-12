# Basics of C Programming

Repository going over the basics of C programming.

## Prerequisites

- You can run this in a WSL instance of VSCode or take the easier and run it in GitHub Codespaces.
  - For Codespaces, click the `< > Code` green button on GitHub and click the `Codespaces` tab. Then click the `Create codespace on main` button to open in Codespaces. All required devtools will be installed automatically and you'll be ready to go!
- Otherwise, install the necessary programs with the below terminal commands.

```bash
# If these fail, run with `sudo`
apt-get update
apt-get -y install --no-install-recommends build-essential make gdb valgrind
```

## Debugging with VSCode

- You can debug the available programs by going to the "Run and Debug" section of VSCode, select the program you want to run, and click "Start Debugging" green arrow.
- You may set breakpoints before running the program to step through the code.

## Building and Running By Hand

### helloworld.c

```bash
gcc helloworld.c -o helloworld
./helloworld
```

### scope.c

```bash
gcc scope.c lib/mymath.c -o scope
./scope
```

### struct.c

```bash
gcc struct.c -o struct
./struct
```

### pointers.c

```bash
gcc pointers.c -o pointers
./pointers
```

### malloc.c

```bash
gcc malloc.c -o malloc
./malloc
```
