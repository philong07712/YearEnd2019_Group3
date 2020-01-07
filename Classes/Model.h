#ifndef _MODEL_H_
#define _MODEL_H_
#define TAG_ANIMATE_RUN 111
#define TAG_ANIMATE_IDLE1 121
#define TAG_ANIMATE_IDLE2 122
#define TAG_ANIMATE_HIT TAG_ANIMATE_IDLE2 + 1
#define TAG_ANIMATE_ATTACK 131
#define TAG_ANIMATE_DIE TAG_ANIMATE_ATTACK + 1

#define TAG_ENEMY_ATTACK TAG_ANIMATE_ATTACK + 1
#define SPEED_PLAYER 5.0f
#define SPEED_MB01 0.6f
#define m_SCALE 4.0f
#define TIME_MOVE_TO_PLAYER 10
#define VISION_OF_MB 400
#define VISION_OF_EM2 300
#define RANGE_OF_MB 100
#define VISION_OF_EM3 500
#include<Player.h>
class Model
{
public:
	static const int BITMASK_WORLD = 100;
	static const int BITMASK_PLAYER = BITMASK_WORLD + 1;
	static const int BITMASK_GROUND = BITMASK_PLAYER + 1;
	static const int BITMASK_ENEMY = BITMASK_GROUND + 1;
	static const int BITMASK_VILLAGER = BITMASK_ENEMY + 1;
	static const int BITMASK_ENEMY2 = BITMASK_VILLAGER + 1;
	static const int BITMASK_ENEMY3 = BITMASK_ENEMY2 + 1;
	static const int BITMASK_NORMAL_ATTACK = 50;
	static const int BITMASK_ENEMY1_ATTACK = BITMASK_NORMAL_ATTACK + 10;
	static const int BITMASK_ENEMY2_ATTACK = BITMASK_ENEMY1_ATTACK + 10;
	static const int BITMASK_ENEMY3_ATTACK = BITMASK_ENEMY2_ATTACK + 10;

	static const int MAIN_CHARACTER_TYPE = 1;
	static const int MAIN_MONSTER_TYPE = 2;
	static const int MAIN_VILLAGER_TYPE = 3;
	static const int MAIN_ENEMY2_TYPE = 4;
	static const int MAIN_ENEMY3_TYPE = 5;
	static const int KNOCKBACK = 2;
	// Order of the map
	static const int TREE_ORDER = 3;
};
#endif