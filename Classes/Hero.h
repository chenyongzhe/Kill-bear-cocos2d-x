#ifndef _HERO_H_
#define _HERO_H_

#include "cocos2d.h"
USING_NS_CC;
#include "Global.h"
#include "Role.h"

//主角类
class Hero :public Role
{
public:
	Hero(void);
	~Hero(void);
	virtual bool init();
	CREATE_FUNC(Hero);
	void onMove(Vec2 direction, float distance);
	void onStop();
	void onAttack(int number);
	void updateSelf();
	void attackCallBackAction(Node* pSender);//普通攻击回调
	void FontsCallBackAction(Node* pSender);//数字淡出回调
	void damageDisplay(int number,Vec2 point);//产生伤害数字动画
};

#endif

