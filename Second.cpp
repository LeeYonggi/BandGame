#include "stdafx.h"
#include "Second.h"


void Second::Init()
{
	AddComponent<TexVertexRenderer>();
	m_Texvertex = GetComponent<TexVertexRenderer>();
	m_Texvertex->AddImage("Second", L"./PNG/Clock/Second.png");
	transform = clock->GetTransform();
}

void Second::Update()
{
	int time = clock->GetTime();
	transform.rotation.z = -time * 6.0f;
}

void Second::Render()
{
}

void Second::Release()
{
}


Second::~Second()
{
}
