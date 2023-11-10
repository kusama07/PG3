#pragma once
#include <istream>

class Enemy
{
public:
	void Update();

	void MeleeAttack();

	void ShootingAttack();

	void Leave();

private:

	static void(Enemy::* spFuncTable[3])();

	enum class Phase
	{
		kMeelAttack,
		kShootingAttack,
		kLeave,
	}phase_;

};

