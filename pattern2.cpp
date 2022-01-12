#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-i-1;j>0;j--)
        {
            cout<<" ";
        }

        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}

