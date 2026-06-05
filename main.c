#include <stdio.h>

#define ROWS 10
#define COLS 20

char canvas[ROWS][COLS];

void initialize()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            canvas[i][j] = '_';
        }
    }
}

void display()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("%c ", canvas[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    initialize();
    display();

    return 0;
}
