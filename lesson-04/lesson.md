# Lesson 4: Functions: Organize the Game

**Goal:** Extract parts of a working program into clear, reusable functions.

**Time:** about 60 minutes, with room to explore.

## Today: break a program into smaller pieces
Your guessing game already has several jobs: display a welcome message, read a guess, and compare it with the secret. Functions let us give some of those jobs names.

### Step 1: A function that prints

```c
#include <stdio.h>

void show_title(void)
{
    printf("=== Guess the Number ===\n");
}

int main(void)
{
    show_title();
    return 0;
}
```

`void show_title(void)` defines a function that takes no input and returns no value. `show_title();` calls it.

### L04-E01: Reuse a function
Call `show_title()` twice. What happens? Add a new function, `show_rules()`, that prints one sentence about the game.

### Step 2: A function that calculates

```c
int compare_guess(int guess, int secret)
{
    if (guess < secret)
    {
        return -1;
    }
    if (guess > secret)
    {
        return 1;
    }
    return 0;
}
```

The numbers sent into a function are called arguments; the names in its definition are parameters. This function returns -1 for low, 1 for high, or 0 for correct.

### L04-E02: Improve your game
Take your guessing game from Lesson 3. Add `show_title()` and `compare_guess()`. Use `compare_guess` inside your game loop to decide what message to print. Define both functions *above* `main` for now.

### Optional challenge
Add `show_rules()` or a function that displays the final number of attempts. Choose names that describe what each function does.

### Up next
We'll store multiple values together using arrays.

---

**Curious to explore more?** [Harvard CS50 material covering nearby topics](https://cs50.harvard.edu/x/weeks/1/) (optional; it covers more than this lesson).

[Back to course home](../README.md)
