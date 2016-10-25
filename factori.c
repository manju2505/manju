#include <stdio.h>
long int multiplyNumbers(int num);

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %ld", n, multiplyNumbers(num));
    return 0;
}
long int multiplyNumbers(int num)
{
    if (num >= 1)
        return num*multiplyNumbers(num-1);
    else
        return 1;
}
