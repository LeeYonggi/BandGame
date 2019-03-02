#pragma once
#include "Object.h"
class BackMount :
	public Object
{
private:
	TexVertexRenderer * m_VertexRenderer;

public:
	void Init()		override;
	void Update()	override;
	void Render()	override;
	void Release()	override;

	BackMount();
	virtual ~BackMount();
};

