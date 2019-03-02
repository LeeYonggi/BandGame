#include "stdafx.h"
#include "InGameScene.h"


void InGameScene::Init()
{
	Camera01 *cam = dynamic_cast<Camera01*>(OBJECTMANAGER->AddObject(OBJ_CAMERA, new Camera01));
	Clock *p = dynamic_cast<Clock*>(OBJECTMANAGER->AddObject(OBJ_BACKGROUND, new Clock));
	OBJECTMANAGER->AddObject(OBJ_BACKGROUND_EFFECT, new Second(p));
	OBJECTMANAGER->AddObject(OBJ_BACKGROUND_EFFECT, new Minute(p));
	OBJECTMANAGER->AddObject(OBJ_BACK, new BackGround);
	OBJECTMANAGER->AddObject(OBJ_CHARACTER, new Character1(cam, p));
	OBJECTMANAGER->AddObject(OBJ_CHARACTER, new Character2(cam, p));
	OBJECTMANAGER->AddObject(OBJ_CHARACTER, new Character3(cam, p));
	OBJECTMANAGER->AddObject(OBJ_CHARACTER, new Character4(cam, p));
	INGAMEMANAGER->Init();
	INGAMEMANAGER->SetClock(p);
}

void InGameScene::Update()
{
	INGAMEMANAGER->Update();
}

void InGameScene::Render()
{
	INGAMEMANAGER->Render();
}

void InGameScene::Release()
{
	INGAMEMANAGER->Release();
	SOUNDMANAGER->Release();
}

InGameScene::InGameScene()
{
}


InGameScene::~InGameScene()
{
}
