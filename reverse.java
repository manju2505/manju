import java.util.*
class ReversalString
{
public static void main (String args[])
{
String old,ans="";

Scanner in=new Scanner(System.in);
System.out.println("input string");
old=in.nextLine();
int length=old.length();
for(int i=length-1;i>=0;i--)
ans=ans+old.charAt(i);
System.out.println("reversesal of string is:"+ans);
}
}
