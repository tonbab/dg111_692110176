#include <stdio.h>
int main()
{
    // 1. for loop
    int i;
    for (int i = 1; i <= 10; i++) {
        printf("Value of i: %d\n", i);
    }


    
// 2. while loop
    int j = 1;
while (j <= 10) {
    printf("Value of j: %d\n", j);
    j++;
}


// 3. do-while loop 
int k = 1;
do {
printf("Value of k: %d\n", k); k++;
} while (k <= 10);


int sum = 0;
for (int i = 1; i <= 10; i++) {
sum += i;
}
printf("Sum %d\n", sum);




    return 0;
}

