#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<" ";
        }
        for(j=i;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
