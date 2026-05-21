#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of row and column : ";
cin>>n;
for (int i = 1; i <n+1; i++)
{
    for (int j = 1; j <= n; j++)
    {
        char v = 'A'+j-1;
        cout <<v<<" " ; 
       
    }
    cout<<endl;
    
}

}

