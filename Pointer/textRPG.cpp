#include <iostream>

using namespace std;

// 주제 : TextRPG

enum PlayerType
{
   PT_Knigth = 1,
   PT_Archer,
   PT_mage
};

enum MonsterType
{
   MT_Slime = 1,
   MT_Orc,
   MT_Skeleton
};
//플레이어 


struct Objectinfo
{
   int type;
   int hp;
   int attack;
   int defence;
};

Objectinfo playerinfo;
Objectinfo monsterinfo;



//함수
void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateMonster();
void EnterBattle();

//메인함수
int main()
{
   srand(time(0)); //랜덤시드 설정

   int hp = 10;

   EnterLobby();

   return 0;
}

//필드 입장//
void EnterLobby()
{

   while (true)
   {
      cout << " ===================== " << endl;
      cout << " 로비에 입장하였습니다. " << endl;
      cout << " ===================== " << endl;

      //플레이어 직업 선택
      SelectPlayer();

      cout << " ===========================" << endl;
      cout << " (1) 필드 입장 (2) 게임 종료 " << endl;
      cout << " ===========================" << endl;
      
      int input;
      cin >> input;

      //필드입장
      if (input == 1)
      {
         EnterField();
      }
      else
      {
         return;
      }
   }
}

//캐릭터 선택
void SelectPlayer()
{
   while (true)
   {
      cout << " =============== " << endl;
      cout << " 직업을 골라주세요. " << endl;
      cout << " (1) 기사 (2) 궁수 (3) 검사" << endl;
      cout << " >> " << endl;
      cin >> playerinfo.type;

      if (playerinfo.type == PT_Knigth)
      {
         cout << " 기사가 생성되었습니다!" << endl;
         playerinfo.hp = 150;
         playerinfo.attack = 10;
         playerinfo.defence = 10;
         break;

      }
      else if (playerinfo.type == PT_Archer)
      {
         cout << "궁수가 생성되었습니다!" << endl;
         playerinfo.hp = 120;
         playerinfo.attack = 12;
         playerinfo.defence = 8;
         break;
      }
      else if (playerinfo.type == PT_mage)
      {
         cout << "마법사가 생성되었습니다!" << endl;
         playerinfo.hp = 100;
         playerinfo.attack = 10;
         playerinfo.defence = 12;
         break;
      }
      else
      {
         cout << " 잘못 선택하셨습니다. " << endl;
      }
   }

}

//필드입장
void EnterField()
{
   while (true)
   {
      cout << " ======================= " << endl;
      cout << " 필드에 입장하였습니다. " << endl;
      cout << " ======================= " << endl;

      cout << " [PLYAER]\n HP : " << playerinfo.hp << "\n ATTACK : " << playerinfo.attack << "\n DEFENCE : " << playerinfo.defence << endl;
      
      CreateMonster();

      cout << " ======================= " << endl;
      cout << " (1) 전투 (2) 도주 " << endl;
      cout << " >> " << endl;

      int input;
      cin >> input;

      if (input == 1)
      {
         EnterBattle();
         if (playerinfo.hp == 0)
            return;
      }
      else
      {
         return;
      }

   }

}

//몬스터 생성
void CreateMonster()
{
   monsterinfo.type = 1+ ( rand() % 3);

   switch (monsterinfo.type)
   {
   case MT_Slime:
      cout << " 슬라임 생성중...! \n HP : 15 \n ATTACKT : 5 \n DEFENCE : 0 " << endl;
      monsterinfo.hp = 15;
      monsterinfo.attack = 5;
      monsterinfo.defence = 0;
      break;
   case MT_Orc:
      cout << " 오크 생성중...! \n HP : 40 \n ATTACKT : 9 \n DEFENCE : 3 " << endl;
      monsterinfo.hp = 40;
      monsterinfo.attack = 9;
      monsterinfo.defence = 3;
      break;
   case MT_Skeleton:
      cout << " 해골 생성중...! \n HP : 80 \n ATTACKT : 15 \n DEFENCE : 5 " << endl;
      monsterinfo.hp = 80;
      monsterinfo.attack = 15;
      monsterinfo.defence = 5;
      break;
   }
}

//전투시작
void EnterBattle()
{
   while (true)
   {

      int damage = playerinfo.attack - monsterinfo.defence;
      if (damage < 0)
         damage = 0;

      monsterinfo.hp -= damage;
      if (monsterinfo.hp < 0)
         monsterinfo.hp = 0;

      cout << " 몬스터 남은 체력 : " << monsterinfo.hp << endl;

      if (monsterinfo.hp == 0)
      {
         cout << " ======================= " << endl;
         cout << " 몬스터를 처치했습니다." << endl;
         return;
      }

         damage = monsterinfo.hp - playerinfo.defence;
      if (damage < 0)
          damage = 0;


      //반격
      playerinfo.hp -= damage;
      if (playerinfo.hp < 0)
          playerinfo.hp = 0;

      cout << " 플레이어 남은 체력 : " << playerinfo.hp << endl;
      if (playerinfo.hp == 0)
      {
         cout << " ======================= " << endl;
         cout << " 당신은 사망했습니다... " << endl;
         return;
      }
   }
}