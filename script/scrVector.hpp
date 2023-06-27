#pragma once
#include "../rage/vector.hpp"
#include <string>
#include <sstream>
#include <ostream>

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
		
		bool operator==(const scrVector& other)
		{
			return this->x == other.x && this->y == other.y && this->z == other.z;
		}

		bool operator!=(const scrVector& other)
		{
			return this->x != other.x || this->y != other.y || this->z != other.z;
		}

		std::string to_string() const
		{
			std::stringstream ss;
			ss << *this;
			return ss.str();
		}

		friend std::ostream& operator<<(std::ostream& os, const scrVector& vec)
		{
			os << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
			return os;
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
