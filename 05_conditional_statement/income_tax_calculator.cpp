#include <iostream>
using namespace std; 

int main(){
    float income, tax;
    cout<<"enter income:";
    cin>>income;

    if (income < 500000){
        tax=0;
    
    } 
    else if (income <= 1000000){
        tax=0.2 * income;

    }
    else {
        tax=0.3*income;

    }
    cout<<"tax="<<tax;
    return 0;

}

