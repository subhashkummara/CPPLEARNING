#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    size_t arraysize;
    cin>>arraysize;
    double sum = 0.0;
    double *array = new double[arraysize];
    //using a vectorcontainer
    auto *array1 = new vector<double>(arraysize);
    //initialize array with pointer and fill the array
    for(size_t i{};i<arraysize;i++)
    {
        (*array1)[i]=(1/pow(((i+1)),2));
    }
    //calculate the sum of elements in array
    for( auto x : *array1)
    {
        sum += x;
    }
    sum = (sum*6)*(sum*6);
    cout<<sum<<endl;
    delete[] array;
    delete[] array1;
}