#pragma once
#include "Object.h"
class SceneChange :
	public Object
{
private:
	SpriteRenderer * m_Sprite;
	BaseScene *scene;

public:
	void Init();
	void Update();
	void Render();
	void Release();
	void SetBaseScene(BaseScene *_scene) { scene = _scene; }

	SceneChange();
	virtual ~SceneChange();
};

