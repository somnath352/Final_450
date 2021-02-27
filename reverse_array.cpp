#include<bits/stdc++.h>
using namespace std;

/*void reverseArray(int a[], int start, int end)
{
    while(start<end)
    {
        int temp;
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    
}
void printArray(int a[],int size)
{
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n,i;
    cout<<"Enter number of element: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    n=sizeof(a)/sizeof(a[0]);
    
    reverseArray(a, 0, n-1);

    cout<<"reverse array is: "<<endl;

    printArray(a,n);

    return 0;
}*/

void fun(int n, int a[])
{
    cout<<"The reverse array element are: ";
    for(int i=n-1;i>=0;i--)
    cout<<a[i]<<" ";
}
int main()
{
    int n,i;
    cout<<"Enter number of element: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    fun(n,a);

}