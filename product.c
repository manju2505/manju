#include<stdio.h>
#include<stdlib.h>
void productArray(int arr[], int num)
{
  int *left = (int *)malloc(sizeof(int)*num);
  int *right = (int *)malloc(sizeof(int)*num);
  int *prod = (int *)malloc(sizeof(int)*num);
  int i, j;
  left[0] = 1;
  right[num-1] = 1;
  for(i = 1; i < num; i++)
    left[i] = arr[i-1]*left[i-1];
  for(j = num-2; j >=0; j--)
    right[j] = arr[j+1]*right[j+1]
  for (i=0; i<num; i++)
    prod[i] = left[i] * right[i];
  for (i=0; i<num; i++)
    printf("%d ", prod[i]);
  return;
}
int main()
{
  int arr[] = {56,90,89,76};
  int num = sizeof(arr)/sizeof(arr[0]);
  printf("The product array is: \n");
  productArray(arr, num);
  getchar();
}
