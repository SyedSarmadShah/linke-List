#include<iostream>
using namespace std;
int main()
{
    int i,n, s,j;
cout<<"Enter the number of row of 1 2 3 :";
cin>>n;

for(i=1;i<=n;i++)
{
    s=0;
    for(j=1;j<=i;j++)
    {
        cout<<s++;
    }
    cout<<endl;
}
}