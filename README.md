# The C Programming Language — Exercises

My solutions to the classic **"The C Programming Language" (K&R)** book, written in plain C.

## What it covers

- **Basics**: hello world, temperature tables, character/word/line counting
- **Control flow & functions**: `power`, recursion
- **Arrays, strings & pointers**: `strlen`, reverse, `atoi`, variable-argument `minprintf`
- **Structures & data structures**: `structs`, binary tree (`add-tree.c`), hash table lookup (`table-lookup.c`)
- **Advanced topics**: `qsort` with function pointers, dynamic storage allocator, reverse-Polish calculator, `cat`/`grep`-style utilities

## Tech Stack

`C (C11)` `CMake`

## How to run

Each file is self-contained. Build with CMake or compile individually:

```bash
gcc -std=c11 hello.c -o hello && ./hello
```
