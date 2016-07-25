#ifndef ENGINE_VECTOR_2
#define ENGINE_VECTOR_2

namespace Math
{
	struct Vector2
	{
		float x;
		float y;
		explicit Vector2(float xVal = 0.0f, float yVal = 0.0f) : x(xVal), y(yVal) {}
		//inline Vector2(const Vector2 &source);
		inline Vector2& operator=(const Vector2 &vec1);
		inline Vector2& operator+=(const Vector2 &vec1);
		inline Vector2& operator-=(const Vector2 &vec1);
		inline Vector2& operator*=(float scalar);
		inline Vector2& operator/=(float scalar);
	};
	inline Vector2 operator+(const Vector2 &vec1, const Vector2 &vec2);
	inline Vector2 operator-(const Vector2 &vec1, const Vector2 &vec2);
	inline Vector2 operator*(float scalar, const Vector2 &vec2);
	inline Vector2 operator*(const Vector2 &vec2, float scalar);
	inline float operator*(const Vector2 &vec1, const Vector2 &vec2);

	#include "Vector2.inl"

}

#endif