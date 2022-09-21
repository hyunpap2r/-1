#include <iostream>
using namespace std;

struct Statinfo
{
    int hp;
    int attack;
    int defence;
};

void EnterLobby();
Statinfo CreatePlayer();
void CreateMonster(Statinfo* info);
bool StartBattle(Statinfo* player, Statinfo* monster);


int main()
{

    EnterLobby();

    return 0;
}
void EnterLobby()
{
    cout << "로비에 입장하였습니다." << endl;

    Statinfo player;
    player = CreatePlayer();

    CreatePlayer();

    Statinfo monster;
    CreateMonster(&monster);

    bool victory = StartBattle(&player, &monster);

    if (victory)
    {
        cout << "승리" << endl;
    }
    else
        cout << "패배" << endl;
}

Statinfo CreatePlayer()
{
    Statinfo ret;

    cout << "플레이어 생성" << endl;

    ret.hp = 100;
    ret.attack = 10;
    ret.defence = 2;

    return ret; 

}

void CreateMonster(Statinfo* info)
{

    cout << "몬스터 생성" << endl;

    info -> hp = 40;
    info -> attack = 8;
    info -> defence = 1;


}

bool StartBattle(Statinfo* player, Statinfo* monster)
{

    while(true)
    {
        int damage = player -> attack - monster -> defence;
        if (damage <0 )
        {
            damage = 0;
        }
        monster -> hp -= damage;
        if (monster ->hp < 0)
        {
            monster -> hp = 0;
        }
        cout << "몬스터 HP : " << monster -> hp << endl;
        
        if (monster -> hp ==0)
        {
            return true;
        }
        damage = monster -> attack - player -> defence;
        if (damage < 0)
        {
            damage = 0;
        }
        cout << "플레이어 HP : " << player -> hp << endl;

        player -> hp -= damage;
        if(player -> hp < 0)
        {
            player -> hp = 0;
        }
        if (player -> hp == 0)
        {
            return false;
        }
    }
}
