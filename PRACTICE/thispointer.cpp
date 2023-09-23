#include<iostream>
using namespace std;

class myclass
{
public:
    int subhash;  // Declare subhash without initialization

    myclass() {
        subhash = 0;  // Initialize subhash in the constructor
    }

    int returnsubhash(int x){
        subhash  = x;
        return subhash;
    }
};

int main(){
    myclass oneclass;
    int x;
    x = oneclass.returnsubhash(4);
    cout << x << endl;
    return 0;
}