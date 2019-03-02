#include "stdafx.h"
#include "InGameManager.h"


void InGameManager::Init()
{
	musicState = NONE;
	openSonglist = false;
	Transform temp;
	transform.position = { 640, 0, 0 };
	songlist = new SpriteRenderer;
	songlist->AddImage("songlist", L"./PNG/ui-button/songlist.png");
	songlist->SetObj(this);
	sp_uilist.push_back(songlist);

	exit = new SpriteRenderer;
	exit->AddImage("exit", L"./PNG/ui-button/exit/0.png");
	exit->SetObj(this);
	temp.position = { -300, -320, 0};
	temp.scale = { 0.0f, 0.0f, 0.0f };
	exit->SetTransform(temp);
	exit_ui = new UIManager;
	exit_ui->SetObj(this);
	exit_ui->Init("exit");
	exit_ui->SetTransform(temp);
	sp_uilist.push_back(exit);
	uilist.push_back(exit_ui);

	open = new SpriteRenderer;
	open->AddImage("open", L"./PNG/ui-button/open/0.png");
	ui = new UI_GameStart;
	open->SetObj(ui);
	temp.position = { 640, 460, 0 };
	temp.scale = { 0.0f, 0.0f, 0.0f };
	open->SetTransform(temp);
	open_ui = new UIManager;
	open_ui->SetObj(ui);
	open_ui->Init("open");
	open_ui->SetTransform(temp);
	sp_uilist.push_back(open);
	uilist.push_back(open_ui);
	v_obj.push_back(ui);

	close = new SpriteRenderer;
	close->AddImage("close", L"./PNG/ui-button/close/0.png");
	close->SetObj(this);
	temp.position = { 600, -330, 0 };
	temp.scale = { 0.0f, 0.0f, 0.0f };
	close->SetTransform(temp);
	close_ui = new UIManager;
	close_ui->SetObj(this);
	close_ui->Init("close");
	close_ui->SetTransform(temp);
	sp_uilist.push_back(close);
	uilist.push_back(close_ui);

	play = new SpriteRenderer;
	play->AddImage("play", L"./PNG/ui-button/play/0.png");
	play->SetObj(this);
	temp.position = { -440, -320, 0 };
	temp.scale = { 0.0f, 0.0f, 0.0f };
	play->SetTransform(temp);
	play_ui = new UIManager;
	play_ui->SetObj(this);
	play_ui->Init("play");
	play_ui->SetTransform(temp);
	sp_uilist.push_back(play);
	uilist.push_back(play_ui);

	stop = new SpriteRenderer;
	stop->AddImage("stop", L"./PNG/ui-button/stop/0.png");
	stop->SetObj(this);
	temp.position = { -370, -320, 0 };
	temp.scale = { 0.0f, 0.0f, 0.0f };
	stop->SetTransform(temp);
	stop_ui = new UIManager;
	stop_ui->SetObj(this);
	stop_ui->Init("stop");
	stop_ui->SetTransform(temp);
	sp_uilist.push_back(stop);
	uilist.push_back(stop_ui);

	adios = new SpriteRenderer;
	adios->AddImage("adios", L"./PNG/ui-songs/adios/0.png");
	adios->SetObj(this);
	temp.position = { 0, -320, 0 };
	temp.scale = { 0.0f, 0.0f, 0.0f };
	adios->SetTransform(temp);
	adios_ui = new UIManager;
	adios_ui->SetObj(this);
	adios_ui->Init("adios");
	adios_ui->SetTransform(temp);
	sp_uilist.push_back(adios);
	uilist.push_back(adios_ui);

	dontgive = new SpriteRenderer;
	dontgive->AddImage("dontgive", L"./PNG/ui-songs/dontgive/0.png");
	dontgive->SetObj(this);
	temp.position = { 380, -320, 0 };
	temp.scale = { 0.0f, 0.0f, 0.0f };
	dontgive->SetTransform(temp);
	dontgive_ui = new UIManager;
	dontgive_ui->SetObj(this);
	dontgive_ui->Init("dontgive");
	dontgive_ui->SetTransform(temp);
	sp_uilist.push_back(dontgive);
	uilist.push_back(dontgive_ui);

	password = new SpriteRenderer;
	password->AddImage("password", L"./PNG/ui-songs/password486/0.png");
	password->SetObj(this);
	temp.position = { -380, -250, 0 };
	temp.scale = { 0.0f, 0.0f, 0.0f };
	password->SetTransform(temp);
	password_ui = new UIManager;
	password_ui->SetObj(this);
	password_ui->Init("password");
	password_ui->SetTransform(temp);
	sp_uilist.push_back(password);
	uilist.push_back(password_ui);

	weare = new SpriteRenderer;
	weare->AddImage("weare", L"./PNG/ui-songs/weare/0.png");
	weare->SetObj(this);
	temp.position = { 0, -250, 0 };
	temp.scale = { 0.0f, 0.0f, 0.0f };
	weare->SetTransform(temp);
	weare_ui = new UIManager;
	weare_ui->SetObj(this);
	weare_ui->Init("weare");
	weare_ui->SetTransform(temp);
	sp_uilist.push_back(weare);
	uilist.push_back(weare_ui);

	breakbread = new SpriteRenderer;
	breakbread->AddImage("breakbread", L"./PNG/ui-songs/breakbread/0.png");
	breakbread->SetObj(this);
	temp.position = { 380, -250, 0 };
	temp.scale = { 0.0f, 0.0f, 0.0f };
	breakbread->SetTransform(temp);
	breakbread_ui = new UIManager;
	breakbread_ui->SetObj(this);
	breakbread_ui->Init("breakbread");
	breakbread_ui->SetTransform(temp);
	sp_uilist.push_back(breakbread);
	uilist.push_back(breakbread_ui);

	SOUNDMANAGER->AddSound("adios", L"./music/adios.mp3");
	SOUNDMANAGER->AddSound("Dontgive", L"./music/Dontgive.mp3");
	SOUNDMANAGER->AddSound("Password486", L"./music/Password486.mp3");
	SOUNDMANAGER->AddSound("Weare", L"./music/Weare.mp3");
	SOUNDMANAGER->AddSound("breakbread", L"./music/breakbread.mp3");
	playsound = false;
	for (int i = 0; i < 5; i++)
		musicTime[i] = 0;
	delay = timeGetTime() + 1000;
}

void InGameManager::Update()
{
	if (playsound == false)
		SonglistUpdate();
	BasicUIUpdate();

	if (openSonglist)
		utility::lerp<float>(&transform.position.y, transform.position.y, 360, 0.1f);
	else
		utility::lerp<float>(&transform.position.y, transform.position.y, 0, 0.05f);
}

void InGameManager::Render()
{
	songlist->Render();
	exit->Render();
	if(delay < timeGetTime())
		open->Render();
	close->Render();
	stop->Render();
	play->Render();
	adios->Render();
	dontgive->Render();
	password->Render();
	weare->Render();
	breakbread->Render();
}

void InGameManager::Release()
{
	for (auto iter : v_obj)
	{
		SAFE_DELETE(iter);
	}
	v_obj.clear();
	for (auto iter : uilist)
	{
		SAFE_DELETE(iter);
	}
	uilist.clear();
	for (auto iter : sp_uilist)
	{
		SAFE_DELETE(iter);
	}
	sp_uilist.clear();
}

void InGameManager::BasicUIUpdate()
{
	if (exit_ui->IsCollisionOver() && openSonglist)
	{
		exit->AddImage("exit1", L"./PNG/ui-button/exit/1.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			SCENEMANAGER->AddScene(new MainScene);
	}
	else
		exit->AddImage("exit", L"./PNG/ui-button/exit/0.png");
	if (open_ui->IsCollisionOver())
	{
		open->AddImage("open1", L"./PNG/ui-button/open/1.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			openSonglist = true;
	}
	else
		open->AddImage("open", L"./PNG/ui-button/exit/0.png");

	if (close_ui->IsCollisionOver() && openSonglist)
	{
		close->AddImage("close1", L"./PNG/ui-button/close/1.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			openSonglist = false;
	}
	else
		close->AddImage("close", L"./PNG/ui-button/close/0.png");

	if (play_ui->IsCollisionOver() && openSonglist)
	{
		if (playsound == false)
		{
			play->AddImage("play1", L"./PNG/ui-button/play/1.png");
			if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			{
				switch (musicState)
				{
				case NONE:
					break;
				case ADIOS:
					//SOUNDMANAGER->Playbgm("adios", false);
					SOUNDMANAGER->RePlay("adios", false);
					clock->SetTime(musicTime[0]);
					break;
				case DONTGIVE:
					SOUNDMANAGER->RePlay("Dontgive", false);
					clock->SetTime(musicTime[1]);
					break;
				case PASSWORD:
					SOUNDMANAGER->RePlay("Password486", false);
					clock->SetTime(musicTime[2]);
					break;
				case WEARE:
					SOUNDMANAGER->RePlay("Weare", false);
					clock->SetTime(musicTime[3]);
					break;
				case BREAKBREAD:
					SOUNDMANAGER->RePlay("breakbread", false);
					clock->SetTime(musicTime[4]);
					break;
				default:
					break;
				}
				if (musicState != NONE)
				{
					playsound = true;
					clock->SetTimeActive(true);
				}
			}
		}
		else
		{
			play->AddImage("play3", L"./PNG/ui-button/play/3.png");
			if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			{
				SOUNDMANAGER->AllPause();
				clock->SetTimeActive(false);
				musicTime[(int)musicState - 1] = clock->GetTime();
				playsound = false;
			}
		}
	}
	else
	{
		if (playsound == true)
			play->AddImage("play2", L"./PNG/ui-button/play/2.png");
		else
			play->AddImage("play", L"./PNG/ui-button/play/0.png");
	}

	if (stop_ui->IsCollisionOver() && openSonglist)
	{
		stop->AddImage("stop1", L"./PNG/ui-button/stop/1.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
		{
			switch (musicState)
			{
			case NONE:
				break;
			case ADIOS:
				//SOUNDMANAGER->Playbgm("adios", false);
				SOUNDMANAGER->Close("adios");
				SOUNDMANAGER->AddSound("adios", L"./music/adios.mp3");
				break;
			case DONTGIVE:
				SOUNDMANAGER->Close("Dontgive");
				SOUNDMANAGER->AddSound("Dontgive", L"./music/Dontgive.mp3");
				break;
			case PASSWORD:
				SOUNDMANAGER->Close("Password486");
				SOUNDMANAGER->AddSound("Password486", L"./music/Password486.mp3");
				break;
			case WEARE:
				SOUNDMANAGER->Close("Weare");
				SOUNDMANAGER->AddSound("Weare", L"./music/Weare.mp3");
				break;
			case BREAKBREAD:
				SOUNDMANAGER->Close("breakbread");
				SOUNDMANAGER->AddSound("breakbread", L"./music/breakbread.mp3");
				break;
			default:
				break;
			}
			playsound = false;
		}
	}
	else
		stop->AddImage("stop", L"./PNG/ui-button/stop/0.png");

	switch (musicState)
	{
	case NONE:
		break;
	case ADIOS:
		adios->AddImage("adios2", L"./PNG/ui-songs/adios/2.png");
		break;
	case DONTGIVE:
		dontgive->AddImage("dontgive2", L"./PNG/ui-songs/dontgive/2.png");
		break;
	case PASSWORD:
		password->AddImage("password2", L"./PNG/ui-songs/password486/2.png");
		break;
	case WEARE:
		weare->AddImage("weare2", L"./PNG/ui-songs/weare/2.png");
		break;
	case BREAKBREAD:
		breakbread->AddImage("breakbread2", L"./PNG/ui-songs/breakbread/2.png");
		break;
	default:
		break;
	}
}

void InGameManager::SonglistUpdate()
{
	if (adios_ui->IsCollisionOver() && openSonglist)
	{
		adios->AddImage("adios1", L"./PNG/ui-songs/adios/1.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			musicState = ADIOS;
	}
	else
		adios->AddImage("adios", L"./PNG/ui-songs/adios/0.png");
	if (password_ui->IsCollisionOver() && openSonglist)
	{
		password->AddImage("password1", L"./PNG/ui-songs/password486/1.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			musicState = PASSWORD;
	}
	else
		password->AddImage("password", L"./PNG/ui-songs/password486/0.png");
	if (dontgive_ui->IsCollisionOver() && openSonglist)
	{
		dontgive->AddImage("dontgive1", L"./PNG/ui-songs/dontgive/1.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			musicState = DONTGIVE;
	}
	else
		dontgive->AddImage("dontgive", L"./PNG/ui-songs/dontgive/0.png");
	if (weare_ui->IsCollisionOver() && openSonglist)
	{
		weare->AddImage("weare1", L"./PNG/ui-songs/weare/1.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			musicState = WEARE;
	}
	else
		weare->AddImage("weare", L"./PNG/ui-songs/weare/0.png");
	if (breakbread_ui->IsCollisionOver() && openSonglist)
	{
		breakbread->AddImage("breakbread1", L"./PNG/ui-songs/breakbread/1.png");
		if (INPUTMANAGER->IsKeyDown(VK_LBUTTON))
			musicState = BREAKBREAD;
	}
	else
		breakbread->AddImage("breakbread", L"./PNG/ui-songs/breakbread/0.png");
}

InGameManager::InGameManager()
{
}


InGameManager::~InGameManager()
{
}
