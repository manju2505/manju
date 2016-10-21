#include <stdio.h>
#include <string.h>
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};
void  printWordsUtil(int number[], int current_digit, char output[], int n)
{
    int i;
    if (current_digit == n)
    {
        printf("%s ", output);
        return ;
    }
 
    for (i=0; i<strlen(hashTable[number[current_digit]]); i++)
    {
        output[current_digit] = hashTable[number[current_digit]][i];
        printWordsUtil(number, current_digit+1, output, n);
        if (number[current_digit] == 0 || number[current_digit] == 1)
            return;
    }
}
 
void printWords(int number[], int n)
{
    char result[n+1];
    result[n] ='\0';
    printWordsUtil(number, 0, result, n);
}
 
int main(void)
{
    int number[] = {2, 3, 4};
    int n = sizeof(number)/sizeof(number[0]);
    printWords(number, n);
    return 0;
}
