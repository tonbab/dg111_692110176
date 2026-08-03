#include <stdio.h>
int main() {

int n;
printf("Enter positive integer: \n");
scanf("%d",&n);

for (int i = 2; i <= n/2; i++) {
    if (n % i == 0){
     {
        printf(" %d is not a Prime Number\n", n);
        return 0;
     }
}
printf(" %d is a Prime Number\n", n);
return 0;
}
}
