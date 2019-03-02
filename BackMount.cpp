#include "stdafx.h"
#include "BackMount.h"


void BackMount::Init()
{
	AddComponent<TexVertexRenderer>();
	m_VertexRenderer = GetComponent<TexVertexRenderer>();
	m_VertexRenderer->AddImage("Mount", L"./PNG/BackGround/Mount.png");
	transform.position = { 0, 0, 0 };
}

void BackMount::Update()
{
}

void BackMount::Render()
{
}

void BackMount::Release()
{
}

BackMount::BackMount()
{
}


BackMount::~BackMount()
{
}
