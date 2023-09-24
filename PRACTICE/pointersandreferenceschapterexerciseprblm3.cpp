#include<iostream>
#include<cmath>
using namespace std;
int main(){
    size_t arraysize;
    cin>>arraysize;
    double sum = 0.0;
    double *array = new double[arraysize];
    //initialize array with pointer and fill the array
    for(size_t i{};i<arraysize;i++)
    {
        array[i]=(1/pow(((i+1)),2));
    }
    //calculate the sum of elements in array
    for(size_t i{};i<arraysize;i++)
    {
        sum += array[i];
    }
    sum = (sum*6)*(sum*6);
    cout<<sum<<endl;
    delete[] array;
}