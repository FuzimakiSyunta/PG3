#include "Enemy.h"



void Enemy::Update()
{
	//メンバ関数ポインタに関数アドレスを代入する
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



