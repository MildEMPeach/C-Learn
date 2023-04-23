#include <iostream>
using namespace std;

enum Direciton{
    LEFT,
    RIGHT=89,
    UP,
    DOWN,
};

// enum A{
//     LEFT,
//     RIGHT
// };
//不带class的定义，是不可以有同样的成员名的

enum class sex{
    girl,
    boy=0,
};

enum class AAA:int{
    A='a',
    EF=120
};

int main(void){
    Direciton d=LEFT;
    int d1=LEFT;//没有限定域的可以直接与int做隐式转换
    cout<<d<<endl;
    cout<<d1<<endl;
    cout<<RIGHT<<endl;
    //cout<<girl<<endl;//girl,boy被限定在enum类型中，所以不能直接引用。
    //cout << sex::girl<<endl;//sex::girl是枚举类型，若输出需要强制转换为int型
    cout << (int)sex::girl<<endl;
    cout <<(int)sex::boy<<endl;
    cout <<(int) AAA::A<<endl;
    return 0;
}