#include <stdio.h>

int main() {
    int num;

    
    printf("Enter the value of num: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; 
    }

    int sum = 0;
    printf("The first %d natural numbers are:\n", num);
    for (int i  = 1; i <= num; i++) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nThe sum of the first %d natural numbers is: %d\n", num, sum);

    return 0;
}
