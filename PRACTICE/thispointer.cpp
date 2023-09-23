#include<iostream>
using namespace std;

class myclass
{
private:
    int subhash;  // Declare subhash without initialization
public:
    myclass() {
        subhash = 0;  // Initialize subhash in the constructor
    }

    void setsubhash(int x){
        this->subhash = x++;  // Removed the post-increment (x++), as it's not needed
    }

    int getsubhash(){
        return this->subhash;  // Return subhash directly, not *this
    }
};

int main(){
    myclass oneclass;
    int x;
    oneclass.setsubhash(4);
    x = oneclass.getsubhash();  // Added a semicolon here
    cout << x << endl;

    return 0;
}