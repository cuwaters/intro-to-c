# Lesson 5: Arrays: Remember Several Values

**Goal:** Use an array and a loop to store, print, and analyze several game scores.

**Time:** about 60 minutes, with room to explore.

## Today: keep a collection of numbers
A single `int` stores one number. An **array** stores several values of the same type. We'll imagine that these numbers are how many guesses different players needed.

### Step 1: Your first array
Create `scores.c`:

```c
#include <stdio.h>

int main(void)
{
    int scores[5] = {4, 7, 3, 6, 5};
    printf("First score: %d\n", scores[0]);
    printf("Third score: %d\n", scores[2]);
    return 0;
}
```

Array indices start at **0**. For a five-element array, valid indices are 0 through 4. Avoid accessing index 5: C does not automatically protect you from going beyond the array.

### Step 2: Visit every element
Replace the print statements with:

```c
for (int i = 0; i < 5; i++)
{
    printf("Score %d: %d\n", i + 1, scores[i]);
}
```

A `for` loop groups a starting value, a condition, and an update.

### L05-E01: Change the scores
Edit the five values and run again. Predict the output before you run it. Change the program to print the scores on one line, separated by spaces.

### L05-E02: Score summary
Add code to calculate the total of the five scores and display it. Then find and print the **lowest** score (in a guessing game, fewer guesses are better). Try a different set of scores to see whether your logic still works.

### Optional challenge
Calculate the average as a `double`, or replace the fixed values with five numbers entered by a player. Either extension is optional.

### Up next
We'll use the same techniques for searching and for thinking about how much work an algorithm performs.

---

**Curious to explore more?** [Harvard CS50 material covering nearby topics](https://cs50.harvard.edu/x/weeks/2/) (optional; it covers more than this lesson).

[Back to course home](../README.md)
