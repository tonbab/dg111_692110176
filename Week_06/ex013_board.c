#include <stdio.h>
int main()
{
    int count = 1;
    int rows = 3;
    int cols = 5;

    for (int row = 1; row <= rows; row++)
    {
   
        for (int col = 1; col <= cols; col++)
        {
            printf("+---");
        }
        printf("+\n");

     
        for (int col = 1; col <= cols; col++)
        {
            printf("|%2d ", count);
            count++;
        }
        printf("|\n");
    }

    for (int col = 1; col <= cols; col++)
    {
        printf("+---");
    }
    printf("+\n");

    return 0;
}
