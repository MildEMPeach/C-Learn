//引用
#include <iostream>
using namespace std;
//修改a，b的值，本来要用指针，传递a，b的地址，现在可以用引用。



void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(void){
    int a=10;
    int c=8;
    int &b =a;
    cout<<a<<" "<<b<<endl;
    a=6;
    cout<<a<<" "<<b<<endl;
    b=5;
    cout<<a<<" "<<b<<endl;
    swap(a,c);
    cout<<a<<" "<<c<<endl;
    return 0;
}