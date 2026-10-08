#include <iostream>
using namespace std;
int main (){
    int a,b;
    char op;

    cout<<"enter a:";
    cin>>a;

    cout<<"enter operator:";
    cin>>op;

    cout<<"enter b:";
    cin>>b;

    switch (op){
        case '+' :
        cout<<"a+b="<<(a+b);
        break;

         case '-' :
        cout<<"a-b="<<(a-b);
        break;

         case '*' :
        cout<<"a*b="<<(a*b);
        break;

         case '/' :
        cout<<"a/b="<<(a/b);
        break;

        default:
        cout<<"invalid operator:";
    }

    return 0;
}
