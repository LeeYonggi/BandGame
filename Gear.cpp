#include "stdafx.h"
#include "Gear.h"


void Gear::Init()
{
	AddComponent<SpriteRenderer>();
	m_sprite = GetComponent<SpriteRenderer>();
	m_sprite->AddImage("gear", L"./PNG/UI/Over.png");
	transform.position = { 100, 100, 0 };
	howToActive = false;
	act = false;
	SetActive(false);
}

void Gear::Update()
{
	if (act == false)
	{
		m_sprite->AddImage("gear", L"./PNG/UI/Over.png");
		transform.rotation.z += TIMEMANAGER->GetDeltaTime() * 50;
		bool activeCheck = std::all_of(OBJECTMANAGER->GetObjectArray(OBJ_UI)->begin(),
			OBJECTMANAGER->GetObjectArray(OBJ_UI)->end(),
			[](Object *obj) { return !obj->GetComponent<UIManager>()->IsCollisionOver(); });
		if (activeCheck)
			SetActive(false);
	}
	else
	{
		transform.position = { 640, 360, 0 };
		transform.rotation.z = 0;
		if(howToActive)
			m_sprite->AddImage("B_howto", L"./PNG/BackGround/howto.png");
		else
			m_sprite->AddImage("B_credit", L"./PNG/BackGround/credit.png");
		if (INPUTMANAGER->IsKeyDown(VK_RBUTTON))
			act = false;
	}
}

void Gear::Render()
{
}

void Gear::Release()
{
}

Gear::Gear()
{
}


Gear::~Gear()
{
}
