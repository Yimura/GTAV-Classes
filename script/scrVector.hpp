#pragma once
#include "../rage/vector.hpp"

namespace rage
{
	class scrVector
	{
	public:
		scrVector() = default;

		scrVector(rage::fvector3 vec) :
			x(vec.x), y(vec.y), z(vec.z)
		{
		}

		scrVector(float x, float y, float z) :
			x(x), y(y), z(z)
		{
		}

		scrVector operator+(const scrVector& other)
		{
			scrVector vec;
			vec.x = this->x + other.x;
			vec.y = this->y + other.y;
			vec.z = this->z + other.z;
			return vec;
		}

		scrVector operator-(const scrVector& other)
		{
			scrVector vec;
			vec.x = this->x - other.x;
			vec.y = this->y - other.y;
			vec.z = this->z - other.z;
			return vec;
		}

		scrVector operator*(const scrVector& other)
		{
			scrVector vec;
			vec.x = this->x * other.x;
			vec.y = this->y * other.y;
			vec.z = this->z * other.z;
			return vec;
		}

		scrVector operator*(const float& other)
		{
			scrVector vec;
			vec.x = this->x * other;
			vec.y = this->y * other;
			vec.z = this->z * other;
			return vec;
		}

		alignas(8) float x{};
		alignas(8) float y{};
		alignas(8) float z{};
	};
}

class Vector2 final
{
public:
	Vector2() = default;

	Vector2(float x, float y)
		: x(x), y(y)
	{
	}

public:
	alignas(8) float x;
	alignas(8) float y;
};

class Vector4 final
{
public:
	Vector4() = default;

	Vector4(float x, float y, float z, float w)
		: x(x), y(y), z(z), w(w)
	{
	}

public:
	alignas(8) float x;
	alignas(8) float y;
	alignas(8) float z;
	alignas(8) float w;
};
