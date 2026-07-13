#include <stdio.h>

int main()
{
    int hour, minutes, secound,sec;

    printf("Input: ");
    scanf("%d", &secound);

    hour = secound / 3600;
    minutes =(secound % 3600)/60;
    sec = (secound % 60);


    printf("Output: %02d:%02d:%02d\n", (int)hour, (int)minutes, (int)sec);
    return 0;
}