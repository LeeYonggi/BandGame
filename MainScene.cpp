#include "stdafx.h"
#include "MainScene.h"


void MainScene::Init()
{
	OBJECTMANAGER->AddObject(OBJ_CAMERA, new Camera01);
	OBJECTMANAGER->AddObject(OBJ_BACK, new BackMount);
	OBJECTMANAGER->AddObject(OBJ_BACKGROUND, new BackCastle);
	OBJECTMANAGER->AddObject(OBJ_EFFECT, new BackFrog);
	gear = dynamic_cast<Gear*>(OBJECTMANAGER->AddObject(OBJ_UIEFFECT, new Gear));
	OBJECTMANAGER->AddObject(OBJ_UI, new UI_credit(gear));
	OBJECTMANAGER->AddObject(OBJ_UI, new UI_GameStart(gear));
	OBJECTMANAGER->AddObject(OBJ_UI, new UI_HowTo(gear));
	OBJECTMANAGER->AddObject(OBJ_UI, new UI_Exit(gear));
	OBJECTMANAGER->AddObject(OBJ_CHARACTER, new BackHorse);
}

void MainScene::Update()
{

}

void MainScene::Render()
{

}

void MainScene::Release()
{

}

MainScene::MainScene()
{
}


MainScene::~MainScene()
{
}
