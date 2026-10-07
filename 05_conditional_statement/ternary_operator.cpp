#include <iostream>
using namespace std;
int main(){

  int age;

  cout<<"enter age:";
  cin>>age;

    string isadult=(age>=18)? "adult" : "not an adult";

    cout<<isadult ;
    return 0;
}   


//program to check no is odd or even 
//  int a;
//  cout<<"enter no:";
//  cin>>a;

//  string odd_or_even =(a%2==0)? "odd" : "even";
//  cout<<"the no is:"<<odd_or_even ;
//    return 0;
// }