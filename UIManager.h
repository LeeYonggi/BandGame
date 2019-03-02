#pragma once
#include "Component.h"
class UIManager :
	public Component
{
private:
	D3DXIMAGE_INFO info;
	Transform transform;
public:
	void Init(string str);
	bool IsCollisionOver();
	void Render();
	void Release();
	void SetTransform(Transform _transform) { transform = _transform; }

	UIManager();
	virtual ~UIManager();
};

