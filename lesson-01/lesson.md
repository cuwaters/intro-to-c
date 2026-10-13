# Lesson 1: Your First C Program

**Goal:** Write, build, run, and change a C program that prints text.

**Time:** about 60 minutes, with room to explore.

## Start here
A program is a set of instructions for a computer. Today you'll write a C program that prints messages. C source code is written in a `.c` file; a compiler and linker turn it into a program you can run.

### Your first program
Type this into a file named `hello.c` and run it:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, world!\n");
    return 0;
}
```

For today, it's enough to know that `main` is where the program starts, `printf` displays text, `\n` moves to a new line, and a semicolon ends a statement. Don't worry about memorizing every symbol.

### L01-E01: Change one thing
Replace the greeting, build, and run again. What changed?

### L01-E02: Two lines
Add a second `printf` statement. Reverse the order of the two statements. Next, remove the `\n` from the first one. Run after each change.

### L01-E03: Make it yours
Create a short text introduction. Include your name or nickname, something you enjoy, and a decorative header. You choose the words and layout.

### Extra exploration (optional)
Draw a tiny picture with plain text, or make a banner for a fictional video game. Each line can be its own `printf`.

### Before next time
Save your program. Next lesson, we'll teach programs to store and calculate with numbers.

---

**Curious to explore more?** [Harvard CS50 material covering nearby topics](https://cs50.harvard.edu/x/weeks/1/) (optional; it covers more than this lesson).

[Back to course home](../README.md)
