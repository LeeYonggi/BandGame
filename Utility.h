#pragma once

namespace utility
{
	template<typename T>
	void lerp(T *p, const T p0, const T p1, const float dot)
	{
		*p = p0 + (p1 - p0) * dot;
	}
}