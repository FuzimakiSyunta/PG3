#include "Enemy.h"



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



