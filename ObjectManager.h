#pragma once
#include "SingleTon.h"

#define MAX_OBJECT_SIZE 8

enum OBJECT_STATE
{
	OBJ_CAMERA,
	OBJ_BACK,
	OBJ_BACKGROUND,
	OBJ_BACKGROUND_EFFECT,
	OBJ_CHARACTER,
	OBJ_EFFECT,
	OBJ_UI,
	OBJ_UIEFFECT
};

class ObjectManager :
	public SingleTon<ObjectManager>
{
private:
	map<OBJECT_STATE, vector<Object*>*> m_Object;
public:
	void Init();
	void Update();
	void Render();
	void Release();

	Object *AddObject(OBJECT_STATE state, Object *obj);
	vector<Object*>* GetObjectArray(OBJECT_STATE state);

	ObjectManager();
	virtual ~ObjectManager();
};

#define OBJECTMANAGER ObjectManager::GetSingleton()