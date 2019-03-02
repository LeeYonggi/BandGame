#pragma once
#include "Object.h"
class Minute :
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

	Minute(Clock *_clock) : clock(_clock) { }
	virtual ~Minute();
};

