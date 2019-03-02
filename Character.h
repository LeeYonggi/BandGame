#pragma once
#include "Object.h"
class Character :
	public Object
{
private:
	
public:
	void Init();
	void Update();
	void Render();
	void Release();

	Character();
	virtual ~Character();
};

