import.java.util.*;
public class factorial
{
public static void main(String args[])
{
int facto=1;
int num=0;
System.out.println("enter number to find factorial");
Scanner in=new Scanner(System.in);
num=in.nextInt();
for(int i=1;i<=num;i++)
{
fact=i*fact;
}
System.out.println("factorial is "+num+" is +fact);
}
}
