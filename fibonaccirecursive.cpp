#include<bits/stdc++.h>
using namespace std;

int fibrecurive(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    else
        return fibrecurive(n-1)+fibrecurive(n-2);
}    

int main()
{
    int n,i;
    cout << "Enter n=";
    cin >> n;
    for(i=0;i<n;i++)
        cout << fibrecurive(i)<<" ";
    return 0;
}