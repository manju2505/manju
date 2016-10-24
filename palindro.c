#include <stdio.h>
void main()

{

    int number, tempr, remainder, reverse = 0;
    printf("Enter an integer \n");

    scanf("%d", &number);
    tempr = number;
    while (number > 0)
    {

        remainder = number % 10;

        reverse = reverse * 10 + remainder;

        number /= 10;

    }

    printf("Given number is = %d\n", tempr);

    printf("Its reverse is  = %d\n", reverse);
    int sum=0;
    while(reverse!=0)
    {
        
        sum += reverse% 10;
        reverse = reverse/ 10;
    }

    printf("\nSum of digits = %d", sum)
    if (sum == reverse)

        printf("Number is a palindrome BY REVERSING \n");

    else

        printf("Number is not a palindrome BY REVERSING\n");

}
