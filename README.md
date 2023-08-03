# Activity 12: Arithmetic in Assembly
## Put your name(s) here

In this activity, you will experiment with translating C arithmetic into assembly. You will:
- Examine and comment the assembly code produced by different functions
- Experiment with changing the types and values involved in the function, and noting what changes in the assembly code

## Provided Code

This code has "library" files without `main` functions defined, so that we generate just code for each function to examine.
- `Makefile`
    - a makefile to automate the compilation process
- `arith.c`
    - a file of function definitions that use arithmetic
- `shifts.c`
    - a file containing a function that does bit shifting
- `bitwise.c`
    - a file containing fnctions that do bitwise and logical operations

## Your Tasks

Before starting the tasks, examine the contents of the three C code files. Make sure you understand what the C code is supposed to do.


### Task 1: Examining arithmetic functions

Use the Makefile to generate the assembly code file `arith.s`. As we did in the previous activity, copy the contents of this file to a new file, `commented_arith.txt`. Edit the new file, and compare each function's assembly to the original C code. 
Add a comment to each line of assembly and note the following:
- Which input parameters are in which registers at the start
- Which line(s) of the C code correspond to this line
- What each register holds, and which variables in C they correspond to

Next, edit the `arith.c` file, and look at what changes if you change the values or types of the variables. Here is a good way to do this:
- Use the cp command in the terminal to copy the original `arith.s` file to a new name, like `origarith.s`
- Change the `arith.c` file and run `make` again
- Open both `origarith.s` and the new `arith.s` with an editor and compare the code
- Record your notes on what you tried and what changed here in this README

### Task 2: Examining bit-shifting functions

- Add `shifts.s` to the `files` target in the Makefile
- As for task 1, make a copy of `shifts.s` and edit the copy, adding comments
- Try the TODO suggestions to see how the generated code changes

### Task 3: Examining bitwise functions

- Add `bitwise.s` to the `files` target in the Makefile
- As for task 1, make a copy of `bitwise.s` and edit the copy, adding comments
- Try the TODO suggestions to see how the generated code changes


## References

- Assembly language resources (x86, 64-bit)
    - [x86 Assembly/X86 Instructions](http://en.wikibooks.org/wiki/X86_Assembly/X86_Instructions)
    - [X86 Opcode and Instruction Reference](http://ref.x86asm.net/coder64.html)
    - [x86 assembly language](http://en.wikipedia.org/wiki/X86_assembly_language)
    - [x86 instruction listings](http://en.wikipedia.org/wiki/X86_instruction_listings)
- gcc compiler flag references
    - [Compiler Option Summary](https://gcc.gnu.org/onlinedocs/gcc/Option-Summary.html)
    - [Index of gcc compiler options](https://gcc.gnu.org/onlinedocs/gcc/Option-Index.html)
- `objdump` resources
    - [Overview of the `objdump` command](https://www.thegeekstuff.com/2012/09/objdump-examples/)
- Makefile guides
  - [An Introduction to Makefiles](https://www.gnu.org/software/make/manual/html_node/Introduction.html), by GNU
  - [Makefile Tutorials and Examples to Build From](https://earthly.dev/blog/make-tutorial/), by Aniket Bhattacharyea
  - [makefile basics - anthony explains](https://www.youtube.com/watch?v=20GC9mYoFGs)
