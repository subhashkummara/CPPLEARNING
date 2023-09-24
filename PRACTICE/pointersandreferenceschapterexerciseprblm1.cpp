/* problem statement
 Exercise 6-1. Storing odd numbers in an array and accessing them using pointer notation
write a program that declares and  initialises an array  with the first 50 odd numbers .Output the 
numbers from the array ten to a line using pointer notation and then output them in reverse order , also using ointer notation  
*/



#include<iostream>
using namespace std;
int main()
{
    int i,j=0;
    //cin>>i;
    //int onearray [51];
    int myarray [51];
    for (int i=0;i<100;i++)
    {
        if(i%2 != 0)
        {
            myarray [j] = i;
            j++;
        }
    }
    
    for(int i=0 ;i<51;i++)
    {
        cout<<*(myarray+i)<<" , ";
        if(i%10 == 0)
        {
            cout<<endl;
        }
    }
}
