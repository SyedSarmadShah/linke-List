#include<iostream>
using namespace std;
int main()
{
    int n ,j , i;
    cout<<"enter the no of the lines of the star:";
    cin>>n;

    for( i=0; i<n;i++){
     for( j=0; j<=i;j++)
     {
        cout<<"*";
     }
     cout<<endl;
    }
    

    
}