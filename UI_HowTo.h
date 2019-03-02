#pragma once
#include "Object.h"
class UI_HowTo :
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

	UI_HowTo(Gear *_gear) : gear(_gear) { }
	virtual ~UI_HowTo();
};

