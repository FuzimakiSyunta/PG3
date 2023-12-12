#include<stdio.h>
#include"Enemy.h"

int main(void) {
	Enemy* enemy_ = new Enemy;
	for (int i = 0; i < 3; i++) {
		enemy_->Update();
	}
	return 0;
}