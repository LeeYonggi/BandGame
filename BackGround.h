#pragma once
#include "Object.h"
class BackGround :
	public Object
{
private:
	TexVertexRenderer * m_TexVertex;
public:
	void Init();
	void Update();
	void Render();
	void Release();

	BackGround();
	virtual ~BackGround();
};

