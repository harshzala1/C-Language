#include <stdio.h>
int factorial(int n);
int factorial(int n)
 {
    if(n == 0)
     {
        return 1;
    } 
    else
     {
        return n * factorial(n-1);
    }
}

int main()
 {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, factorial(n));
    return 0;
}