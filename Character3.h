#pragma once
#include "Object.h"
class Character3 :
	public Object
{
private:
	TexVertexRenderer * m_Texvertex;
	unsigned int animedelay;
	Camera01 *camera;
	Clock *time;
	
	vector<vector<int>*> v_animeFrame;
	vector<vector<int>*> v_animestate;
	char animeFrame[5][MAX_SIZE];
	vector<bool> animeActive;
	vector<int> animeCount;

public:
	void Init()		override;
	void Update()	override;
	void Render()	override;
	void Release()	override;

	Character3(Camera01 *_camera, Clock *_time) : camera(_camera), time(_time) { }
	virtual ~Character3();
};

