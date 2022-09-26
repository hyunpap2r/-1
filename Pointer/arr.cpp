#include <iostream>
using namespace std;

struct Statinfo
{
	int hp = 0xAAAAAAAA;
	int attack = 0xBBBBBBBB;
	int defence = 0xDDDDDDDD;

};


int main()
{

	// �迭�� ũ��� ������� ��
	const int monsterCount = 10;
	Statinfo monsters[monsterCount];
	
	//���²� ������ [�̸�]�� �ٱ����� �̸��̾���

	int a = 10;
	int b = a;

	// Statinfo players[10]; ��� �Ұ���//

	//�迭�� �̸��� �迭�� �����ּ�, ��Ȯ���� ���� ��ġ�� ����Ű�� TYPE* ������ �� ������ �� ��ü,,
	auto WhoAmi = monsters;

	//monster_0[�ּ�]
	Statinfo* monster_0 = monsters;
	monster_0->hp = 100;
	monster_0->attack = 10;
	monster_0->defence = 1;

	//monster_1[�ּ�]
	Statinfo*monster_1 = monsters + 1;
	monster_1->hp = 200;
	monster_1->attack = 20;
	monster_1->defence = 2;

	//monster_2[�ּ�]
	Statinfo& monster_2 = *(monsters + 2);
	monster_2.hp = 300;
	monster_2.attack = 30;
	monster_2.defence = 3;

	//[����] ���� �ٸ� �ǹ̴�
	Statinfo temp = *(monsters + 2);
	temp.hp = 400;
	temp.attack = 40;
	temp.defence = 4;

	for (int i = 0; i < 10; i++)
	{
		Statinfo& monster = *(monsters + i);
		monster.hp = 100*(i+1);
		monster.attack = 10 * (i + 1);
		monster.defence = (i + 1);
	}
	
	//���� �Ʒ��� ����. 
	// �� ����, �Ʒ� ����

	for (int i = 0; i < 10; i++)
	{
		monsters[i].hp = 100 * (i + 1);
		monsters[i].attack = 10 * (i + 1);
		monsters[i].defence = (i + 1);
	}


	int numbers[5] = {};
	int numbers1[10] = {1,2,3,4,5};
	int numbers2[] = { 1,2,3,4,5,56,6,34,7 };

	



	return 0;
}