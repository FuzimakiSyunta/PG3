#pragma once
class Enemy
{
private:
	enum Phase {
		APPROACH,//Ú‹ß(0)
		FIRE,//ËŒ‚(1)
		LEAVE,//—£’E(2)
	};

public:
	/// <summary>
	/// XV
	/// </summary>
	void Update();

private:
	//Ú‹ß
	void Approach();
	//ËŒ‚
	void Fire();
	//—£’E
	void Leave();
private:
	Phase phase_ = APPROACH;
};

