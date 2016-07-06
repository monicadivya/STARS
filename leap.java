importjava.io.*;
public class leap{
public static void main(String[] args)
{
int a;
System.out.println(enter the year");
Scanner sc= new Scanner(System.in);
a=sc.nextInt();
if(a%4==0)
System.out.println("leap year");
else
{
System.out.println("non leap year");
}
}
}
