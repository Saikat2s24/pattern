#include<iostream>
using namespace std;
int main(){
int n;
char m = 'A';
cout<<"Enter the number of row  : ";
cin>>n;
for (int i = 1; i <n+1; i++)
{
    for (int j = 0; j < i; j++)
    {
        cout <<m<<" " ; 
         m++;
    }
    cout<<endl;
    
}

}

