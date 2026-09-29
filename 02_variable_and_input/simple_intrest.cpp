#include<iostream>
using namespace std;
int main(){
    float p;
    float r;
    float t;
    cout<<"enter principal:";
    cin>>p;
    cout<<"enter rate:";
    cin>>r;
    cout<<"enter time:";
    cin>>t;
    float simple_interest=(p*r*t)/100;
    cout<<"simple interest is:"<<simple_interest;
    return 0;
}