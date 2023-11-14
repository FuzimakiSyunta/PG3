#include "Enemy.h"


void(Enemy::* Enemy::PhaseTable[])() =
{
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave,
};


void Enemy::Update()
{
	//メンバ関数ポインタに関数アドレスを代入する
	Phase = &Enemy::Approach;
	Phase = &Enemy::Fire;
	Phase = &Enemy::Leave;
}

void Enemy::Approach()
{
	printf("接近\n");
}

void Enemy::Fire()
{
	printf("射撃\n");
}

void Enemy::Leave()
{
	printf("離脱\n");
}



