#pragma once
#include "Object.h"
class Gear :
	public Object
{
private:
	SpriteRenderer *m_sprite;
	bool howToActive;
	bool act;
public:
	void Init();
	void Update();
	void Render();
	void Release();
	void Sethowto(bool set) { howToActive = set; act = true;}
	bool Getact() { return act; }

	Gear();
	virtual ~Gear();
};

