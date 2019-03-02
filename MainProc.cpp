#include "stdafx.h"
#include "MainProc.h"


void MainProc::Init()
{
	srand(time(NULL));
	OBJECTMANAGER->Init();
	windowAct = true;
	SCENEMANAGER->AddScene(new MainScene);
}

void MainProc::Update()
{
	SOUNDMANAGER->Update();
	OBJECTMANAGER->Update();
	SCENEMANAGER->Update();
	INPUTMANAGER->Update();
}

void MainProc::Render()
{
	OBJECTMANAGER->Render();
	SCENEMANAGER->Render();
}

void MainProc::Release()
{
	INGAMEMANAGER->ReleaseSingleton();
	OBJECTMANAGER->ReleaseSingleton();
	//manager delete
	SCENEMANAGER->ReleaseSingleton();
	DATAMANAGER->ReleaseSingleton();
	TIMEMANAGER->ReleaseSingleton();
	INPUTMANAGER->ReleaseSingleton();
	SOUNDMANAGER->ReleaseSingleton();
}

MainProc::MainProc()
{
}


MainProc::~MainProc()
{
}
