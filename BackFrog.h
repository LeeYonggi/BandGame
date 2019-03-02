#pragma once

class BackFrog
	: public Object
{
private:
	TexVertexRenderer * m_VertexRenderer;
public:
	void Init()		override;
	void Update()	override;
	void Render()	override;
	void Release()	override;

	BackFrog();
	virtual ~BackFrog();
};

