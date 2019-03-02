#pragma once
#include "Object.h"

class BackCastle :
	public Object
{
private:
	TexVertexRenderer * m_VertexRenderer;
public:
	void Init()		override;
	void Update()	override;
	void Render()	override;
	void Release()	override;

	BackCastle();
	virtual ~BackCastle();
};

