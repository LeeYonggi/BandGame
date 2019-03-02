#pragma once
#include "Object.h"
class BackHorse :
	public Object
{
private:
	TexVertexRenderer *m_Texvertex;
	float frame;
	bool upLeg;
public:
	void Init();
	void Update();
	void Render();
	void Release();

	BackHorse();
	virtual ~BackHorse();
};

