#include <iostream>
using namespace std;

//knight 설계
// 속성 hp, attack , y ,x
// 기능 Move, Attack, Die

class knight
{
public: //은닉성때 설명
    //멤버함수
    void Move(int y, int x);
    void Attack();
    void Die()
    {
        hp = 0;
        cout << "Die" << endl;
    }
public:
    //멤버 변수
    int hp;
    int attack;
    int PosY;
    int PosX;
};

void knight::Move(int y, int x)
{
    PosY = y;
    PosX = x;
    cout << "Move " << y << ","<< x << endl;
}

void knight::Attack()
{
    cout << "Attack" << endl;
}

//instantiate 객체를 만든다!

//================          Main            ======================
int main()
{

    knight k1;
    k1.hp = 100;
    k1.attack = 10;
    k1.PosY = 0;
    k1.PosX = 0;

    knight k2;
    k2.hp = 80;
    k2.attack = 5;
    k2.PosY = 1;
    k2.PosX = 1;

    
    k1.Move(2,2);
    k1.Attack();
    k1.Die();



    return 0;
}