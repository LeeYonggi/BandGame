#pragma once
#include "Object.h"
class UI_credit :
	public Object
{
private:
	SpriteRenderer * m_sprite;
	UIManager *m_UI;
	Gear *gear;
public:
	void Init();
	void Update();
	void Render();
	void Release();

	UI_credit(Gear *_gear) : gear(_gear) { }
	virtual ~UI_credit();
};

