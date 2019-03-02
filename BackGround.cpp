#include "stdafx.h"
#include "BackGround.h"


void BackGround::Init()
{
	AddComponent<TexVertexRenderer>();
	m_TexVertex = GetComponent<TexVertexRenderer>();
	m_TexVertex->AddImage("Back", L"./PNG/BackGround/InGame.png");
}

void BackGround::Update()
{
}

void BackGround::Render()
{
}

void BackGround::Release()
{
}

BackGround::BackGround()
{
}


BackGround::~BackGround()
{
}
