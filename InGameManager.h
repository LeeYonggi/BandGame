#pragma once
#include "Object.h"

enum MUSIC_STATE
{
	NONE,
	ADIOS,
	DONTGIVE,
	PASSWORD,
	WEARE,
	BREAKBREAD
};

class InGameManager :
	public Object, public SingleTon<InGameManager>
{
private:
	vector<SpriteRenderer*> sp_uilist;
	vector<UIManager*> uilist;
	vector<Object*> v_obj;

	SpriteRenderer *songlist;
	SpriteRenderer *exit;
	UIManager *exit_ui;
	SpriteRenderer *open;
	UIManager *open_ui;
	UI_GameStart *ui;
	SpriteRenderer *close;
	UIManager *close_ui;
	SpriteRenderer *play;
	UIManager *play_ui;
	SpriteRenderer *stop;
	UIManager *stop_ui;

	SpriteRenderer *adios;
	UIManager *adios_ui;
	SpriteRenderer *dontgive;
	UIManager *dontgive_ui;
	SpriteRenderer *password;
	UIManager *password_ui;
	SpriteRenderer *weare;
	UIManager *weare_ui;
	SpriteRenderer *breakbread;
	UIManager *breakbread_ui;

	bool openSonglist;
	bool playsound;
	MUSIC_STATE musicState;
	int musicTime[5];
	Clock *clock;
	float delay;
public:
	void Init()		override;
	void Update()	override;
	void Render()	override;
	void Release()	override;
	void BasicUIUpdate();
	void SonglistUpdate();
	MUSIC_STATE GetMusicState() { return musicState; }
	void SetClock(Clock *_clock) { clock = _clock; }

	InGameManager();
	virtual ~InGameManager();
};

#define INGAMEMANAGER InGameManager::GetSingleton()