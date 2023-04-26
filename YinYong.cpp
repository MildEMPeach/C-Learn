//引用
#include <iostream>
using namespace std;

int main(void){
    int a=10;
    int &b =a;
    cout<<a<<" "<<b<<endl;
    a=6;
    cout<<a<<" "<<b<<endl;
    b=5;
    cout<<a<<" "<<b<<endl;
    return 0;
}