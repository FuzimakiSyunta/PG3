#include "Enemy.h"


void(Enemy::* Enemy::PhaseTable[])() =
{
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave,
};


void Enemy::Update()
{
	//�����o�֐��|�C���^�Ɋ֐��A�h���X��������
	Phase = &Enemy::Approach;
	Phase = &Enemy::Fire;
	Phase = &Enemy::Leave;
}

void Enemy::Approach()
{
	printf("�ڋ�\n");
}

void Enemy::Fire()
{
	printf("�ˌ�\n");
}

void Enemy::Leave()
{
	printf("���E\n");
}



