# Lesson 2: Numbers, Variables, and Input

**Goal:** Store whole numbers, perform arithmetic, and read two numbers from a user.

**Time:** about 60 minutes, with room to explore.

## Today: a program that can do math
Last time, you printed a fixed message. Now you'll give numbers names, calculate answers, and ask a user for input.

### Step 1: Store values
Create `numbers.c`:

```c
#include <stdio.h>

int main(void)
{
    int score = 10;
    int bonus = 5;
    int total = score + bonus;
    printf("Total: %d\n", total);
    return 0;
}
```

`int` stores whole numbers. `=` assigns a value to a variable. `%d` marks where an integer will be printed.

### L02-E01: Predict, then run
Change `score` and `bonus` twice. Try `-`, `*`, and `/` instead of `+`. What do you notice when one integer does not divide evenly by another?

### Step 2: Ask for a number

```c
int age;
printf("Enter your age: ");
if (scanf("%d", &age) != 1)
{
    printf("Please enter a whole number.\n");
    return 1;
}
printf("Next year you will be %d.\n", age + 1);
```

Put this inside `main` after the opening `{` and before its final `return 0;`. `scanf` reads input. For now, treat `&age` as the way to tell `scanf` where to put the result. We'll explain `&` when we study memory. The `if` checks whether reading worked; we'll explore `if` in Lesson 3.

### L02-E02: Two-number calculator
Write a program that reads two integers and prints their sum, difference, and product. You can look back at the examples. Build and run it with different input values, including negative numbers.

### Optional challenge
Print the integer quotient too. What should your program do if the second number is zero? You don't have to solve it today.

### Up next
Next time, your code will make decisions and repeat actions.

---

**Curious to explore more?** [Harvard CS50 material covering nearby topics](https://cs50.harvard.edu/x/weeks/1/) (optional; it covers more than this lesson).

[Back to course home](../README.md)
