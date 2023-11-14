#pragma once
class Enemy
{
private:
	enum Phase {
		APPROACH,//�ڋ�(0)
		FIRE,//�ˌ�(1)
		LEAVE,//���E(2)
	};

public:
	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

private:
	//�ڋ�
	void Approach();
	//�ˌ�
	void Fire();
	//���E
	void Leave();
private:
	Phase phase_ = APPROACH;
	//�����o�֐��|�C���^
	void(Enemy::* Phase)();
	//�����o�֐��|�C���^�̃e�[�u��
	static void(Enemy::* PhaseTable[])();
};

