#pragma once

namespace rage
{
	template <typename T>
	union vector2
	{
		T data[2];
		struct
		{
			T x, y;
		};

		constexpr vector2(T x, T y) : x(x),
							y(y)
		{
		}

		constexpr vector2() : x(),
					y()
		{
		}
	};

	template <typename T>
	union vector3
	{
		T data[3];
		struct
		{
			T x, y, z;
		};

		constexpr vector3(T x, T y, T z) noexcept : x(x),
										  y(y),
										  z(z)
		{
		}

		constexpr vector3() noexcept : x(),
							 y(),
							 z()
		{
		}

		constexpr vector3 operator+(const vector3 &rhs) const
		{
			return vector3(x + rhs.x, y + rhs.y, z + rhs.z);
		}

		constexpr vector3 operator-(const vector3 &rhs) const
		{
			return vector3(x - rhs.x, y - rhs.y, z - rhs.z);
		}

		constexpr vector3 operator*(const vector3 &rhs) const
		{
			return vector3(x * rhs.x, y * rhs.y, z * rhs.z);
		}

		constexpr vector3 operator/(const vector3 &rhs) const
		{
			return vector3(x / rhs.x, y / rhs.y, z / rhs.z);
		}

		constexpr vector3 operator+(const float &rhs) const
		{
			return vector3(x + rhs, y + rhs, z + rhs);
		}

		constexpr vector3 operator-(const float &rhs) const
		{
			return vector3(x - rhs, y - rhs, z - rhs);
		}

		constexpr vector3 operator*(const float &rhs) const
		{
			return vector3(x * rhs, y * rhs, z * rhs);
		}

		constexpr vector3 operator/(const float &rhs) const
		{
			return vector3(x / rhs, y / rhs, z / rhs);
		}

		constexpr bool operator==(const vector3 &rhs) const
		{
			return x == rhs.x && y == rhs.y && z == rhs.z;
		}

		constexpr vector3 &operator+=(const vector3 &rhs)
		{
			return *this = *this + rhs;
		}

		constexpr vector3 &operator-=(const vector3 &rhs)
		{
			return *this = *this - rhs;
		}

		constexpr vector3 &operator*=(const vector3 &rhs)
		{
			return *this = *this * rhs;
		}

		constexpr vector3 &operator/=(const vector3 &rhs)
		{
			return *this = *this / rhs;
		}

		constexpr vector3 &operator+=(const float &rhs)
		{
			return *this = *this + rhs;
		}

		constexpr vector3 &operator-=(const float &rhs)
		{
			return *this = *this - rhs;
		}

		constexpr vector3 &operator*=(const float &rhs)
		{
			return *this = *this * rhs;
		}

		constexpr vector3 &operator/=(const float &rhs)
		{
			return *this = *this / rhs;
		}

		constexpr T length() const
		{
			return sqrt(x * x + y * y + z * z);
		}

		constexpr T magnitude() const
		{
			return length();
		}

		// This doesn't modify the vector inline.
		constexpr vector3 normalize() const
		{
			T len = length();
			if (len)
			{
				return *this * (1 / len);
			}

			return *this;
		}

		// This doesn't modify the vector inline.
		constexpr vector3 multiply(const vector3 rhs) const
		{
			return vector3(x * rhs.x, y * rhs.y, z * rhs.z);
		}

		// This doesn't modify the vector inline.
		constexpr vector3 invert() const
		{
			return *this * -1;
		}

		// This doesn't modify the vector inline.
		constexpr vector3 cross_product(const vector3 &rhs) const
		{
			return vector3(y * rhs.z - z * rhs.y, z * rhs.x - x * rhs.z, x * rhs.y - y * rhs.x);
		}

		constexpr float dot_product(const vector3 &rhs) const
		{
			return x * rhs.x + y * rhs.y + z * rhs.z;
		}

		constexpr float distance(const vector3 &rhs) const
		{
			return (*this - rhs).length();
		}
	};

	template <typename T>
	union vector4
	{
		T data[4];
		struct
		{
			T x, y, z, w;
		};

		constexpr vector4(T x, T y, T z, T w) : x(x),
									  y(y),
									  z(z),
									  w(w)
		{
		}

		constexpr vector4() : x(),
					y(),
					z(),
					w()
		{
		}
	};

	template <typename T>
	union matrix34
	{
		T data[3][4];
		struct
		{
			struct
			{
				T x, y, z, w;
			} rows[3];
		};
	};

	template <typename T>
	union matrix44
	{
		T data[4][4];
		struct
		{
			struct
			{
				T x, y, z, w;
			} rows[4];
		};
	};

	typedef vector2<float> fvector2;
	typedef vector3<float> fvector3;
	typedef vector4<float> fvector4;
	typedef matrix34<float> fmatrix34;
	typedef matrix44<float> fmatrix44;
}
