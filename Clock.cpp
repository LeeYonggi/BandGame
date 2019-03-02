#include "stdafx.h"
#include "Clock.h"


void Clock::Init()
{
	AddComponent<TexVertexRenderer>();
	m_Texvertex = GetComponent<TexVertexRenderer>();
	m_Texvertex->AddImage("Clock", L"./PNG/Clock/Clock.png");
	transform.position = { 0, 300, 0 };
	timeActive = false;
	frame = timeGetTime() + 1000.0f;
	time = 0;
}

void Clock::Update()
{
	if (timeActive)
	{
		if (frame <= timeGetTime())
		{
			frame = timeGetTime() + 1000.0f;
			time++;
		}
	}
	else
	{

	}
}

void Clock::Render()
{
}

void Clock::Release()
{
}

Clock::Clock()
{
}


Clock::~Clock()
{
}
