#pragma once

namespace rage
{
	template<typename T>
	union vector2
	{
		T data[2];
		struct { T x, y; };

		vector2(T x, T y) :
			x(x),
			y(y)
		{
		}

		vector2() :
			x(),
			y()
		{
		}
	};

	template<typename T>
	union vector3
	{
		T data[3];
		struct { T x, y, z; };

		vector3(T x, T y, T z) noexcept : x(x),
			y(y),
			z(z)
		{
		}

		vector3() noexcept : x(),
			y(),
			z()
		{
		}

		vector3 operator+(const vector3 &rhs) const
		{
			return vector3(x + rhs.x, y + rhs.y, z + rhs.z);
		}

		vector3 operator-(const vector3 &rhs) const
		{
			return vector3(x - rhs.x, y - rhs.y, z - rhs.z);
		}

		vector3 operator*(const vector3 &rhs) const
		{
			return vector3(x * rhs.x, y * rhs.y, z * rhs.z);
		}

		vector3 operator/(const vector3 &rhs) const
		{
			return vector3(x / rhs.x, y / rhs.y, z / rhs.z);
		}

		vector3 operator+(const float &rhs) const
		{
			return vector3(x + rhs, y + rhs, z + rhs);
		}

		vector3 operator-(const float &rhs) const
		{
			return vector3(x - rhs, y - rhs, z - rhs);
		}

		vector3 operator*(const float &rhs) const
		{
			return vector3(x * rhs, y * rhs, z * rhs);
		}

		vector3 operator/(const float &rhs) const
		{
			return vector3(x / rhs, y / rhs, z / rhs);
		}

		bool operator==(const vector3 &rhs) const
		{
			return x == rhs.x && y == rhs.y && z == rhs.z;
		}

		vector3 &operator+=(const vector3 &rhs)
		{
			return *this = *this + rhs;
		}

		vector3 &operator-=(const vector3 &rhs)
		{
			return *this = *this - rhs;
		}

		vector3 &operator*=(const vector3 &rhs)
		{
			return *this = *this * rhs;
		}

		vector3 &operator/=(const vector3 &rhs)
		{
			return *this = *this / rhs;
		}

		vector3 &operator+=(const float &rhs)
		{
			return *this = *this + rhs;
		}

		vector3 &operator-=(const float &rhs)
		{
			return *this = *this - rhs;
		}

		vector3 &operator*=(const float &rhs)
		{
			return *this = *this * rhs;
		}

		vector3 &operator/=(const float &rhs)
		{
			return *this = *this / rhs;
		}

		float length() const
		{
			return sqrt(x * x + y * y + z * z);
		}

		// This doesn't modify the vector inline.
		vector3 normalize() const
		{
			return *this * (1 / length());
		}

		// This doesn't modify the vector inline.
		vector3 multiply(const vector3 other) const
		{
			return vector3(x * other.x, y * other.y, z * other.z);
		}

		// This doesn't modify the vector inline.
		vector3 invert() const
		{
			return *this * -1;
		}

		float distance(const vector3 &rhs) const
		{
			return (*this - rhs).Length();
		}
	};

	template <typename T>
	union vector4
	{
		T data[4];
		struct { T x, y, z, w; };

		vector4(T x, T y, T z, T w) :
			x(x),
			y(y),
			z(z),
			w(w)
		{
		}

		vector4() :
			x(),
			y(),
			z(),
			w()
		{
		}
	};

	template<typename T>
	union matrix34
	{
		T data[3][4];
		struct { struct { T x, y, z, w; } rows[3]; };
	};

	template<typename T>
	union matrix44
	{
		T data[4][4];
		struct { struct { T x, y, z, w; } rows[4]; };
	};

	typedef vector2<float> fvector2;
	typedef vector3<float> fvector3;
	typedef vector4<float> fvector4;
	typedef matrix34<float> fmatrix34;
	typedef matrix44<float> fmatrix44;
}
