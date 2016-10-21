#include<stdio.h>
#include<string.h>
 
int main() {
   char string[100], res;
   int i, j = 0;
 
   printf("\nEnter the string :");
   gets(str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      res = str[i];
      str[i] = str[j];
      str[j] = res;
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s", string);
   return (0);
}
