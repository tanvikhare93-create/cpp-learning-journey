#include <iostream>
using namespace std;
int main(){
    float pencil;
    float pen;
    float eraser;
    cout<<"enter cost of pencil:";
    cin>>pencil;
    cout<<"enter cost of pen:";
    cin>>pen;
    cout<<"enter cost of eraser:";
    cin>>eraser;
    float total_cost=pencil + pen +eraser;
    cout<<"the total cost of the items are:"<<total_cost;
    return 0;
}