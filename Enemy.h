#pragma once
class Enemy
{
public:
	// �f�X�g���N�^

	/// <summary>
	/// ������
	/// </summary>
	void Initialize();

	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

	/// <summary>
	/// �`��
	/// </summary>
	void Draw();
private:
	//�����o�֐��|�C���^
	void(Enemy::*pFunc)();
	//�����o�֐��|�C���^�Ɋ֐��A�h���X��������



};
