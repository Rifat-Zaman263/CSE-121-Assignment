/*Write a C++ program to find out first n
perfect number where n is the input from user*/


#include<iostream>
using namespace std;
int main()
{
   int i,j,end,sum;

    cin>>end;

   for(i=1;i<end;i++)
    {
        sum = 0;

     for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }

        if(sum == i && i==6)
        {
          cout<<i<<" is the first perfect number"<<endl;
        }
    }

    return 0;
}

