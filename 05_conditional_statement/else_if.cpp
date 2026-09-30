#include <iostream>
using namespace std;
int main(){

    int marks;
    cout<<"enter your marks:";     //calculate student grade 
    cin>>marks;

    if (marks>=90){
        cout<<"A";

    }else if (marks>80){
        cout<<"B";

    } else {
    cout<<"C";}

return 0;
}