#include<bits/stdc++.h>
using namespace std;

void fibonacci(int arr[],int n)
{   
    int i;
    arr[0]=0,arr[1]=1;
    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}

int main()
{
    int n;
    cout << "Enter n=";
    cin >> n;
    int a[n];
    fibonacci(a,n);
}