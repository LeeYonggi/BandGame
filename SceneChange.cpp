#include "stdafx.h"
#include "SceneChange.h"


void SceneChange::Init()
{
	AddComponent<SpriteRenderer>();
	m_Sprite = GetComponent<SpriteRenderer>();
	m_Sprite->AddanimeImage("sceneChange", L"./PNG/BackGround/%d.png", 0, 5, 100);
	transform.position = { 640, 360, 0 };
	m_Sprite->SetAnimeConfirm(true);
}

void SceneChange::Update()
{
	if (m_Sprite->GetNowImage() >= 4)
		destroy = true;
}

void SceneChange::Render()
{
}

void SceneChange::Release()
{
}

SceneChange::SceneChange()
{
}


SceneChange::~SceneChange()
{
}
