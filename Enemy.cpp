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
}

void Enemy::Approach()
{

}

void Enemy::Fire()
{

}

void Enemy::Leave()
{

}



