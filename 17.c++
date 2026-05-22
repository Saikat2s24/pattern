#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of row  : ";
cin>>n;
for (int i = 0; i < n; i++)
{//number
    for (int  k = 1; k <= n-i; k++)
    {
        cout<<k;
    }
    
   // star
    for (int j =0 ; j <i; j++)
    {
        cout <<"*" ; 
    }
     //2nd time star
     for (int a = 0; a < i; a++)
     {
        cout<<"*";
     }
     
    //2nd time number 
    for (int l= n-i; l >=1; l--)
    {
        cout<<l;
    }
    

    cout<<endl;
    
}

}

