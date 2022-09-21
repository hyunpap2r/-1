#include <iostream>
using namespace std;

struct Statinfo{
    int hp;
    int attack;
    int defence;
};

Statinfo globalinfo;

void CreateMonster(Statinfo* info)
    {
        info -> hp = 100;
        info -> attack = 8;
        info -> defence = 5;

        //* 앞에 붙인다.
            //
        //* 뒤에 붙인다.

        info = &globalinfo;
    }



Statinfo* FindMonster()
{


    return nullptr;
}

void PrintinfoByref(const Statinfo& info)
{
    cout << "참조 전달" << endl;
    cout << "----------" << endl;
    cout << "HP : " << info.hp << endl;
    cout << "ATT : " << info.attack << endl;
    cout << "DEF : " << info.defence << endl;
    cout << "----------" << endl;
}


void PrintinfoByptr(Statinfo* info)
{
    if (info == nullptr)
        return;

    cout << "Null" << endl;
    cout << "----------" << endl;   
    cout << "HP : " << info->hp << endl;
    cout << "ATT : " << info->attack << endl;
    cout << "DEF : " << info->defence << endl;
    cout << "----------" << endl;
}
// void CreateMonster(Statinfo info)
//     {
//         info.hp = 100;
//         info.attack = 8;
//         info.defence = 5;
//     }

    //값을 수정하지 않는다면, 양쪽 다 문제는 없음


//     // 1) 값 전달방식

// void PrinterinfoByCopy(Statinfo info)
// {
//     cout << "값 전달, 복사" << endl;
//     cout << "----------" << endl;
//     cout << "HP : " << info.hp << endl;
//     cout << "ATT : " << info.attack << endl;
//     cout << "DEF : " << info.defence << endl;
//     cout << "----------" << endl;
// }

//     // 2) 주소 전달 방식

// void PrinterinfoByCopy(Statinfo* info)
// {
//     cout << "주소 전달" << endl;
//     cout << "----------" << endl;
//     cout << "HP : " << info->hp << endl;
//     cout << "ATT : " << info->attack << endl;
//     cout << "DEF : " << info->defence << endl;
//     cout << "----------" << endl;
// }
//구조체가 대형 구조체라면 값 전달 Statinfo로 넘기면 대형복사, Statinfo*로 넘기면 여전히 8바이트, 참조 전달 또한 여전히 8바이트
//하지만 값 전달처럼 편리하게 사용하고 주소를 전달하며 주소값을 이용하여 진퉁을 건드리고 양쪽의 장점을 융합한 방식


#define OUT

void Changeinfo(OUT Statinfo& info)
{

    info.hp  = 1000;
}
int main()
{
    //참조는 c++에만 있음.
    // int number  = 1;

    // int* pointer = &number;
    // //포인터 바구니에 있는 주소를 이동해, 바구니에 2를 넣는다.
        

    // //참조//

    // int& reference = number;
    // //c++관점에서는 number라는 바구니에 또 다른 이름을 부여한 것.
    // //number라는 바구니에 reference라는 다른 이름을 지어줄게
    // //앞으로 reference바구니에다가 뭘 꺼내거나 넣으면 실제 number바구니(진퉁) 그 값을 꺼내거나 넣으면 됌!
    // reference = 3;




    Statinfo info;
    CreateMonster(&info);
    
    // PrinterinfoByCopy(info);
    // PrinterinfoByCopy(&info);

    Statinfo* pointer = nullptr;
    pointer = &info;   
    PrintinfoByptr(pointer);

    Statinfo& reference = info;
    PrintinfoByref(reference);

    Changeinfo(OUT info);

    PrintinfoByref(*pointer);
    PrintinfoByptr(&reference);


    // Printinfo(&info);
    // Printinfo(info);

    return 0;
}