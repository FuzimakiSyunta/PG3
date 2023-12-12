#include "Enemy.h"

void(Enemy::* Enemy::PhaseTable[])() =
{
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave,
};
void Enemy::Update()
{
	(this->*Enemy::PhaseTable[phase_])();
}

void Enemy::Approach()
{
	printf("�ڋ�\n");
	phase_ = Phase::FIRE;
}

void Enemy::Fire()
{
	printf("�ˌ�\n");
	phase_ = Phase::LEAVE;
}

void Enemy::Leave()
{
	printf("���E\n");
}




