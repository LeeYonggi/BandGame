#pragma once
#include "Object.h"

#define MAX_SIZE 128

class Character1 :
	public Object
{
private:
	TexVertexRenderer *m_Texvertex;
	unsigned int animedelay;
	Camera01 *camera;
	Clock *time;
	vector<vector<int>*> v_animeFrame;
	char animeFrame[5][MAX_SIZE];
	vector<bool> animeActive;
	vector<int> animeCount;

public:
	void Init()		override;
	void Update()	override;
	void Render()	override;
	void Release()	override;

	Character1(Camera01 *_camera, Clock *_time) : camera(_camera), time(_time) { }
	virtual ~Character1();
};

