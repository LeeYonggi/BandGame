#pragma once
#include "Object.h"
class Camera01 :
	public Object
{
private:
	bool moveCam;
	D3DXVECTOR3 target;
	D3DXVECTOR3 position;
	int time;
public:
	void Init();
	void Update();
	void Render();
	void Release();
	void SetTarget(D3DXVECTOR3 _target) { target = _target; }
	void SetPosition(D3DXVECTOR3 _position) { position = _position; time = timeGetTime() + 5000; }

	Camera01();
	virtual ~Camera01();
};

