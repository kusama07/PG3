#include "Enemy.h"

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::MeleeAttack,
	&Enemy::ShootingAttack,
	&Enemy::Leave,
};

void Enemy::Update() {

	(this->*spFuncTable[static_cast<size_t>(phase_)])();

	phase_ = Phase::kShootingAttack;
	(this->*spFuncTable[static_cast<size_t>(phase_)])();

	phase_ = Phase::kLeave;
	(this->*spFuncTable[static_cast<size_t>(phase_)])();

}

void Enemy::MeleeAttack() {
	printf("近接攻撃\n");
}

void Enemy::ShootingAttack() {
	printf("射撃攻撃\n");
}

void Enemy::Leave() {
	printf("離脱\n");
}