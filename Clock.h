#pragma once
#include "Object.h"
class Clock :
	public Object
{
private:
	TexVertexRenderer *m_Texvertex;
	float time;
	bool timeActive;
	float frame;

public:
	void Init()		override;
	void Update()	override;
	void Render()	override;
	void Release()	override;
	void SetTime(float set) { time = set; }
	float GetTime() { return time; }
	void SetTimeActive(bool set) { timeActive = set; }
	bool GetTimeActive() { return timeActive; }

	Clock();
	virtual ~Clock();
};

