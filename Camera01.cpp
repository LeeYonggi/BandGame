#include "stdafx.h"
#include "Camera01.h"


void Camera01::Init()
{
	AddComponent<cCamera>();
	transform.position = { 0.0f, 0.0f, MAX_SIZE_DIVISION };
	transform.rotation = { 0.0f, 0.0f, 0.0f };
	GetComponent<cCamera>()->SetCam({ 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f });
	position = { 0, 0, MAX_SIZE_DIVISION };
	target = { 0, 0, 0 };
	time = 0;
}

void Camera01::Update()
{
	if (time > timeGetTime())
	{
		utility::lerp<D3DXVECTOR3>(&transform.position, transform.position, position, 0.1f);
		GetComponent<cCamera>()->SetCam(target, { 0.0f, 1.0f, 0.0f });
	}
	else
	{
		position = { 0, 0, MAX_SIZE_DIVISION };
		utility::lerp<D3DXVECTOR3>(&transform.position, transform.position, position, 0.1f);
		utility::lerp<D3DXVECTOR3>(&target, target, { 0.0f, 0.0f, 0.0f }, 0.1f);
		GetComponent<cCamera>()->SetCam(target, { 0.0f, 1.0f, 0.0f });
	}
}

void Camera01::Render()
{
}

void Camera01::Release()
{
}

Camera01::Camera01()
{
}


Camera01::~Camera01()
{
}
