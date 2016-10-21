# include<stdio.h>
# define MAX_SIZE 100
 
void _printParenthesis(int pos, int n, int openb, int closeb);

void printParenthesis(int n)
{
  if(n > 0)
     _printParenthesis(0, n, 0, 0);
  return;
}     
 
void _printParenthesis(int pos, int n, int openb, int closeb)
{
  static char str[MAX_SIZE];     
 
  if(closeb == n) 
  {
    printf("%s \n", str);
    return;
  }
  else
  {
    if(openb > closeb) {
        str[pos] = ')';
        _printParenthesis(pos+1, n, openb, closeb+1);
    }
    if(openb < n) {
       str[pos] = '(';
       _printParenthesis(pos+1, n, openb+1, closeb);
    }
  }
}
 
int main()
{
  int n = 2;
  printParenthesis(n);
  getchar();
  return 0;
}
