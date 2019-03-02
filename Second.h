#pragma once
#include "Object.h"
class Second :
	public Object
{
private:
	TexVertexRenderer * m_Texvertex;
	Clock * clock;
public:
	void Init()		override;
	void Update()	override;
	void Render()	override;
	void Release()	override;

	Second(Clock *_clock) : clock(_clock) { }
	virtual ~Second();
};

