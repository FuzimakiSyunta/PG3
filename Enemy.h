#include <stdio.h>

class Enemy
{
public:
	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

private:
	enum Phase {
		APPROACH,//�ڋ�(0)
		FIRE,//�ˌ�(1)
		LEAVE,//���E(2)
	};

private:
	//�ڋ�
	void Approach();
	//�ˌ�
	void Fire();
	//���E
	void Leave();
	//�����o�֐��|�C���^�̃e�[�u��
	static void(Enemy::* PhaseTable[])();
private:
	Phase phase_ = APPROACH;
	
};

