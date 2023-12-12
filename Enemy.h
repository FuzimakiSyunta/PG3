#include <stdio.h>

class Enemy
{
public:
	/// <summary>
	/// 更新
	/// </summary>
	void Update();

private:
	enum Phase {
		APPROACH,//接近(0)
		FIRE,//射撃(1)
		LEAVE,//離脱(2)
	};

private:
	//接近
	void Approach();
	//射撃
	void Fire();
	//離脱
	void Leave();
	//メンバ関数ポインタのテーブル
	static void(Enemy::* PhaseTable[])();
private:
	Phase phase_ = APPROACH;
	
};

