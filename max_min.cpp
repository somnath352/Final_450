#include<bits/stdc++.h>
using namespace std;

void maxMin(int a[], int n)
{
    
    int min=a[0],max=a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];

        if(a[i]>max)
            max=a[i];
    }

    cout<<"min element: "<<min<<"\n";
    cout<<"max element: "<<max;
}
int main()
{
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    maxMin(a,n);
    
    
}