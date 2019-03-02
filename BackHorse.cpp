#include "stdafx.h"
#include "BackHorse.h"


void BackHorse::Init()
{
	AddComponent<TexVertexRenderer>();
	m_Texvertex = GetComponent<TexVertexRenderer>();
	m_Texvertex->AddanimeImage("BackHorseIdle", L"./PNG/horse/%d.png", 1, 4, 150);
	m_Texvertex->SetAnimeConfirm(true);
	transform.position = {400, -300, 0};
	upLeg = false;
}

void BackHorse::Update()
{
	int num = rand() % 200;
	if (upLeg == false && num == 0)
	{
		m_Texvertex->AddanimeImage("BackHorseLeg", L"./PNG/horse2/%d.png", 1, 5, 150);
		upLeg = true;
	}
	else if (upLeg == true && m_Texvertex->GetNowImage() > 4)
	{
		m_Texvertex->AddanimeImage("BackHorseIdle", L"./PNG/horse/%d.png", 1, 4, 150);
		upLeg = false;
	}
	
	//if (upLeg == true && m_Texvertex->GetNowImage() >= 3)
	//{
	//	m_Texvertex->AddanimeImage("BackHorseIdle", L"./PNG/horse/horse%d.png", 1, 4, 150);
	//	upLeg = false;
	//}

}

void BackHorse::Render()
{
}

void BackHorse::Release()
{
}

BackHorse::BackHorse()
{
}


BackHorse::~BackHorse()
{
}
