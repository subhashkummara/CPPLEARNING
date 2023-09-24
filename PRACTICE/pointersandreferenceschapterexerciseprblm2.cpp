/* problem statement
// Exercise 6-2. Traversing arrays using pointer arithmetics
// An exercise to further deepen your understanding of the relation 
// between pointers, pointer arithmetic, and arrays.
*/



#include<iostream>
using namespace std;
int main()
{
    int i,j=0;
    //cin>>i;
    //int onearray [51];
    int myarray [51];
    int *traverse;
    traverse = &myarray[0];
    for (int i=0;i<100;i++)
    {
        if(i%2 != 0)
        {
            myarray [j] = i;
            j++;
        }
    }
    //for in ascending order
    for(int i=0 ;i<51;i++)
    {
        cout<<*(traverse++)<<" , ";
        if(i%10 == 0)
        {
            cout<<endl;
        }
    }
    //for descending order
    for(int i=50 ;i>0;i--)
    {
        // traverse = &myarray[0];
        cout<<*(traverse--)<<" , ";
        if(i%10 == 0)
        {
            cout<<endl;
        }
        
    }
}
