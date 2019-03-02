#include "stdafx.h"
#include "UI_GameStart.h"


void UI_GameStart::Init()
{
	AddComponent<SpriteRenderer>();
	AddComponent<UIManager>();
	m_sprite = GetComponent<SpriteRenderer>();
	m_UI = GetComponent<UIManager>();
	m_sprite->AddImage("UI_GameStart", L"./PNG/UI/Start.png");
	m_UI->Init("UI_GameStart");
	transform.position = { 180, 390, 0 };
}

void UI_GameStart::Update()
{
	if (gear->Getact()) return;
	if (m_UI->IsCollisionOver())
	{
		utility::lerp<float>(&transform.position.x, transform.position.x, 230.0f, 0.1f);
		gear->SetActive(true);
		Transform temp = transform;
		temp.rotation = gear->GetTransform().rotation;
		temp.position.x = 70;
		gear->SetTransform(temp);
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
		{
			SCENEMANAGER->AddScene(new InGameScene);
		}
	}
	else
		utility::lerp<float>(&transform.position.x, transform.position.x, 180.0f, 0.1f);
}

void UI_GameStart::Render()
{
}

void UI_GameStart::Release()
{
}



UI_GameStart::~UI_GameStart()
{
}
