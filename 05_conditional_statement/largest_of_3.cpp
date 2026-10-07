#include <iostream>
using namespace std;
int main(){

    int a,b,c ;
    
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;

    if (a>=b && a>=c){
        cout<<"largest no :"<<a;
    } 
    else if (b>=c){
        cout<<"largest no :"<<b;
    }
    else {
    cout<<"largest no :"<<c;
    }

 return 0;


}