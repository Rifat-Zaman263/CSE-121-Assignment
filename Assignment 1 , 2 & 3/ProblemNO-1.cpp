
/*Write a C++ program to find out first n
perfect number where n is the input from user*/


#include<iostream>
using namespace std;
int main()
{
   int n,i,s=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
           s+=i;
    }
    if(s==n)
        cout<<n<<" is a perfect number"<<endl;
    else
        cout<<n<<" is not a perfect number"<<endl;
    return 0;

}
