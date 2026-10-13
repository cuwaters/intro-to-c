# Lesson 3: Making Decisions and Repeating Actions

**Goal:** Use conditions and repetition to create a playable number guessing game.

**Time:** about 60 minutes, with room to explore.

## Today: make the computer react
A program can choose what to do based on a condition, and it can repeat instructions until a condition changes.

### Step 1: A decision
Create `compare.c`:

```c
#include <stdio.h>

int main(void)
{
    int number = 7;
    if (number > 10)
    {
        printf("Big number!\n");
    }
    else
    {
        printf("Ten or less.\n");
    }
    return 0;
}
```

Try `number = 15` and `number = 10`. Use `==` to compare values for equality. (A single `=` assigns a value.)

### L03-E01: Three outcomes
Change the program to display `positive`, `negative`, or `zero` depending on `number`. `else if` lets you test a second condition.

### Step 2: A loop

```c
int count = 1;
while (count <= 3)
{
    printf("Count: %d\n", count);
    count++;
}
```

Put the loop inside `main`. Run it. Then try starting at 0 or stopping at 5. A loop needs something that will eventually make its condition false.

### L03-E02: Guess the secret number
Build a game that sets `int secret = 7;`, asks for a guess, and repeats until the player gets it right. Tell them whether their guess is too high or too low. Reuse the safe input pattern from Lesson 2. Start with a fixed secret so you can test it easily.

Suggested play:

```text
Guess a number from 1 to 10: 4
Too low!
Guess a number from 1 to 10: 9
Too high!
Guess a number from 1 to 10: 7
You got it!
```

### Optional challenge
Count guesses and show the total at the end. You can also let the player choose the secret number for someone else to guess.

### Up next
We'll organize this growing game into reusable pieces called functions.

---

**Curious to explore more?** [Harvard CS50 material covering nearby topics](https://cs50.harvard.edu/x/weeks/1/) (optional; it covers more than this lesson).

[Back to course home](../README.md)
