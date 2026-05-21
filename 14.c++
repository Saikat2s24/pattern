#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of row  : ";
cin>>n;
for (int i = 1; i <= n; i++)
{
    int m = n-i;
    while (m)
    {
        cout<<" ";
        m--;
    }
    
    for (int j = 0; j < i; j++)
    {
        cout <<"*" ; 
    }
    cout<<endl;
    
}

}

