import java.util.*;
import java.lang.*;
import java.io.*;
class Negative_array
{
	
	static void rearrange(int a[], int n)
	{
		int pivot=0;
		int i=-1,j,temp;
		for(j=0;j<n;j++)
		{
			if(a[j]<pivot)
			{
				i++;
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	static void printArray(int a[], int n)
	{
		for(int i=0;i<n;i++)
		{
			System.out.print(a[i]+" ");
		}
	}
		
		
		
		
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		rearrange(a, n);
		printArray(a, n);
	}
}