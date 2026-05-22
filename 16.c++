#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of row  : ";
cin>>n;
for (int i = 0; i <= n; i++)
{
    //space
    int m = n-i;
    while (m)
    {
        cout<<" ";
        m--;
    }
    //star
    for (int j =1 ; j <=i; j++)
    {
        cout <<j ; 
    }
    //start
   
    for (int  k = 1; k < i; k++)
    {
        cout<<k;
        
    }
    
    cout<<endl;
}  

}

