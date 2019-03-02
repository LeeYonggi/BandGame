#include "stdafx.h"
#include "UI_HowTo.h"


void UI_HowTo::Init()
{
	AddComponent<SpriteRenderer>();
	AddComponent<UIManager>();
	m_sprite = GetComponent<SpriteRenderer>();
	m_UI = GetComponent<UIManager>();
	m_sprite->AddImage("HowTo", L"./PNG/UI/HowTo.png");
	m_UI->Init("HowTo");
	transform.position = { 150, 500, 0 };
}

void UI_HowTo::Update()
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
		if(INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			gear->Sethowto(true);
	}
	else
		utility::lerp<float>(&transform.position.x, transform.position.x, 150.0f, 0.1f);
}

void UI_HowTo::Render()
{
}

void UI_HowTo::Release()
{
}


UI_HowTo::~UI_HowTo()
{
}
