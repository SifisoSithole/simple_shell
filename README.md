# Simple Shell Project

## Installation
Clone the repository. Compile the ".c" files. Run executable.

```
$ git clone https://github.com/SifisoSithole/simple_shell
```

## Compile and start

To start simple_shell you just need to compile using

```
gcc -Wall -Werror   -Wextra -pedantic *.c -o hsh.
```

### run

```
./hsh
```

## Usage (Interactive mode)

```
hsh$ /bin/ls
hsh$ ls -la
hsh$ pwd
```
## Non - interactive mode

```
hsh$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
hsh$
hsh$ cat test_ls_2
/bin/ls
/bin/ls
hsh$
hsh$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
hsh$
```
