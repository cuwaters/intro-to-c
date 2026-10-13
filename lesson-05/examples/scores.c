#include <stdio.h>

int main(void)
{
    int scores[5] = {4, 7, 3, 6, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("Score %d: %d\n", i + 1, scores[i]);
    }
    return 0;
}
