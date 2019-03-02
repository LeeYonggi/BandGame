#include "stdafx.h"
#include "UI_credit.h"


void UI_credit::Init()
{
	AddComponent<SpriteRenderer>();
	AddComponent<UIManager>();
	m_sprite = GetComponent<SpriteRenderer>();
	m_UI = GetComponent<UIManager>();
	m_sprite->AddImage("CreditIdle", L"./PNG/UI/CreditIdle.png");
	m_UI->Init("CreditIdle");
	transform.position = { 1220, 60, 0 };
}

void UI_credit::Update()
{
	if (gear->Getact()) return;
	if (m_UI->IsCollisionOver())
	{
		m_sprite->AddImage("CreditOver", L"./PNG/UI/CreditOver.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
		{
			m_sprite->AddImage("CreditDown", L"./PNG/UI/CreditDown.png");
			gear->SetActive(true);
			gear->Sethowto(false);
		}
		transform.rotation.z += 0.1f;
	}
	else
		m_sprite->AddImage("CreditIdle", L"./PNG/UI/CreditIdle.png");
}

void UI_credit::Render()
{
}

void UI_credit::Release()
{
}


UI_credit::~UI_credit()
{
}
