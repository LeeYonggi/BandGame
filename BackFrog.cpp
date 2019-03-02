#include "stdafx.h"
#include "BackFrog.h"


void BackFrog::Init()
{
	AddComponent<TexVertexRenderer>();
	m_VertexRenderer = GetComponent<TexVertexRenderer>();
	m_VertexRenderer->AddImage("BackForg", L"./PNG/BackGround/forg.png");
	transform.position = { 0, 0, 0 };
}

void BackFrog::Update()
{
}

void BackFrog::Render()
{
}

void BackFrog::Release()
{
}

BackFrog::BackFrog()
{
}


BackFrog::~BackFrog()
{
}
