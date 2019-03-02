#include "stdafx.h"
#include "BackCastle.h"


void BackCastle::Init()
{
	AddComponent<TexVertexRenderer>();
	m_VertexRenderer = GetComponent<TexVertexRenderer>();
	m_VertexRenderer->AddImage("BackCastle", L"./PNG/BackGround/castle.png");
	transform.position = { 0, 0, 0 };
}

void BackCastle::Update()
{
}

void BackCastle::Render()
{
}

void BackCastle::Release()
{
}

BackCastle::BackCastle()
{
}


BackCastle::~BackCastle()
{
}
