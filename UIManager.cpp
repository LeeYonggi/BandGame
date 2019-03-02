#include "stdafx.h"
#include "UIManager.h"


void UIManager::Init(string str)
{
	info = DATAMANAGER->GetTexture(str)->info;
}

bool UIManager::IsCollisionOver()
{
	int x = transform.position.x + GetObject_()->GetTransform().position.x - (info.Width / 2);
	int y = transform.position.y + GetObject_()->GetTransform().position.y - (info.Height / 2);

	if (x < INPUTMANAGER->GetCusorPosition().x &&
		y < INPUTMANAGER->GetCusorPosition().y &&
		x + info.Width > INPUTMANAGER->GetCusorPosition().x &&
		y + info.Height > INPUTMANAGER->GetCusorPosition().y)
		return true;
	return false;
}

void UIManager::Render()
{
}

void UIManager::Release()
{
}

UIManager::UIManager()
{
	tag = "UIManager";
	transform = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
}


UIManager::~UIManager()
{
}
