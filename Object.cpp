#include "stdafx.h"
#include "Object.h"
#include "Component.h"


void Object::SetActive(bool _active)
{
	active = _active;
	for (auto iter : components)
		iter.second->SetActive(_active);
}

Object::Object()
{
	active = true;
	destroy = false;
}


Object::~Object()
{
	for (auto iter : components)
	{
		SAFE_DELETE(iter.second);
	}
	components.clear();
}
