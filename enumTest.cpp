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
//����class�Ķ��壬�ǲ�������ͬ���ĳ�Ա����

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
    int d1=LEFT;//û���޶���Ŀ���ֱ����int����ʽת��
    cout<<d<<endl;
    cout<<d1<<endl;
    cout<<RIGHT<<endl;
    //cout<<girl<<endl;//girl,boy���޶���enum�����У����Բ���ֱ�����á�
    //cout << sex::girl<<endl;//sex::girl��ö�����ͣ��������Ҫǿ��ת��Ϊint��
    cout << (int)sex::girl<<endl;
    cout <<(int)sex::boy<<endl;
    cout <<(int) AAA::A<<endl;
    return 0;
}