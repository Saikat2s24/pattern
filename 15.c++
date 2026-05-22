#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of row  : ";
cin>>n;
for (int i = 0; i < n; i++)
{
    //star
    for (int j =0 ; j <n-i; j++)
    {
        cout <<"*" ; 
    }
    cout<<endl;
    
}

}

