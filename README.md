# 42Libasm
__Libasm__ est un projet qui a pour but de nous familiariser avec le langage assembleur / __Libasm__ is a project which aims to familiarize us with the assembly language

## What is the Libasm ?
__Libasm__ is an _individual project at 42_ where we have to recode some function in C in assembly language

### Prerequisites

To run this project on your computer check to have [nasm](https://en.wikipedia.org/wiki/Netwide_Assembler).

The __makefile__ compiles the .s (assembler file) with _nasm -f macho64_, if you use an OS other than MAC OS 64 bits, you will have to change the compilation of NASMFLAGS in the makefile.

```
For Windows NASMFLAGS: -f win32
For Linux NASMFLAGS: -f elf
For Mac OS NASMFLAGS: -f macho64
```

### Running the tests

To __test the project__ write the following commands in your terminal:

1. ```make```
2. ```make ccproject```
3. ```./a.out```

- __make__: _compile assembly files in .o and create a library named libasm.a_
- __make ccproject__: _compile main.c with the libasm.a library_
- __./a.out__: _launches tests to compare libasm to libc_

---

### Project resource
__FR__
- [Openclassrom](https://openclassrooms.com/fr/courses/2288321-apprenez-a-programmer-en-assembleur-x86/2288775-introduction-installation)
- [langage_asm_Intel_64bits](http://lacl.u-pec.fr/tan/asm.pdf)
- [cours_nasm](https://www.unilim.fr/pages_perso/tristan.vaccon/cours_nasm.pdf)
---
__EN__
- [Tutorialspoint](https://www.tutorialspoint.com/assembly_programming/assembly_introduction.htm)
- [nasmtutorial](https://cs.lmu.edu/~ray/notes/nasmtutorial/)
- [asmx64](https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf)
