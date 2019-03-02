#include "stdafx.h"
#include "Minute.h"

const float TimeTransform(1.0f / 60.0f);

void Minute::Init()
{
	AddComponent<TexVertexRenderer>();
	m_Texvertex = GetComponent<TexVertexRenderer>();
	m_Texvertex->AddImage("Minute", L"./PNG/Clock/Minute.png");
	transform = clock->GetTransform();
}

void Minute::Update()
{
	int time = clock->GetTime();
	transform.rotation.z = -time * TimeTransform;
}

void Minute::Render()
{
}

void Minute::Release()
{
}

Minute::~Minute()
{
}
