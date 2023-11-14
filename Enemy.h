#pragma once
class Enemy
{
private:
	enum Phase {
		APPROACH,//接近(0)
		FIRE,//射撃(1)
		LEAVE,//離脱(2)
	};

public:
	/// <summary>
	/// 更新
	/// </summary>
	void Update();

private:
	//接近
	void Approach();
	//射撃
	void Fire();
	//離脱
	void Leave();
private:
	Phase phase_ = APPROACH;
	//メンバ関数ポインタ
	void(Enemy::* Phase)();
	//メンバ関数ポインタのテーブル
	static void(Enemy::* PhaseTable[])();
};

