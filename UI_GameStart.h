#pragma once
#include "Object.h"
class UI_GameStart :
	public Object
{
private:
	SpriteRenderer *m_sprite;
	UIManager *m_UI;
	Gear *gear;
public:
	void Init()		override;
	void Update()	override;
	void Render()	override;
	void Release()	override;

	UI_GameStart(Gear *_gear) : gear(_gear) { }
	UI_GameStart() { transform = { { 0, 0, 0 },{ 0, 0, 0 },{ 1.0f, 1.0f, 1.0f } }; }
	virtual ~UI_GameStart();
};

