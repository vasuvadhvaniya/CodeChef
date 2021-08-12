import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class olympicranking
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int g1 = sc.nextInt();
		    int s1 = sc.nextInt();
		    int b1 = sc.nextInt();
		    int g2 = sc.nextInt();
		    int s2 = sc.nextInt();
		    int b2 = sc.nextInt();
		    int first = g1+s1+b1;
		    int second = g2+s2+b2;
		    System.out.println((first>second)?1:2);
		}
	}
}
