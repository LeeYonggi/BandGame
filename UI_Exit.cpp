#include "stdafx.h"
#include "UI_Exit.h"


void UI_Exit::Init()
{
	AddComponent<SpriteRenderer>();
	AddComponent<UIManager>();
	m_sprite = GetComponent<SpriteRenderer>();
	m_UI = GetComponent<UIManager>();
	m_sprite->AddImage("Exit", L"./PNG/UI/Exit.png");
	m_UI->Init("Exit");
	transform.position = { 150, 610, 0 };
}

void UI_Exit::Update()
{
	if (gear->Getact()) return;
	if (m_UI->IsCollisionOver())
	{
		utility::lerp<float>(&transform.position.x, transform.position.x, 210.0f, 0.1f);
		gear->SetActive(true);
		Transform temp = transform;
		temp.rotation = gear->GetTransform().rotation;
		temp.position.x = 70;
		gear->SetTransform(temp);
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON)) exit(0);
	}
	else
		utility::lerp<float>(&transform.position.x, transform.position.x, 150.0f, 0.1f);
}

void UI_Exit::Render()
{
}

void UI_Exit::Release()
{
}



UI_Exit::~UI_Exit()
{
}
