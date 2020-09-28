#include <iostream>

using namespace std;

int main() {
    string opc;
    cin>>opc;
    //char, int, short, float, double, long
    if(opc=="char")
        cout<<sizeof(char)<<endl;
    if(opc=="int")
        cout<<sizeof(int)<<endl;
    if(opc=="short")
        cout<<sizeof(short)<<endl;
    if(opc=="float")
        cout<<sizeof(float)<<endl;
    if(opc=="double")
        cout<<sizeof(double)<<endl;
    if(opc=="long")
        cout<<sizeof(long)<<endl;
    

    return 0;
}