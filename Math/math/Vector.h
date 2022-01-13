#pragma once
#include "MathUtility.h"

struct Vector3
{
public:
	/* Vector components x, yand z*/
	float x, y, z;

public:

	static const Vector3 Zero;
	static const Vector3 One;
	static const Vector3 Up;
	static const Vector3 Down;
	static const Vector3 Forward;
	static const Vector3 Backward;
	static const Vector3 Right;
	static const Vector3 Left;
	static const Vector3 XAxis;
	static const Vector3 YAxis;
	static const Vector3 ZAxis;

public:

	FORCEINLINE Vector3();										// Default constructor
	FORCEINLINE Vector3(float valF);							// Constructor initializing all components to a single variable
	FORCEINLINE Vector3(float valX, float valY, float valZ);	// Constructor using values for each component

	FORCEINLINE Vector3& operator=(const Vector3& other);		// Copy another Vector3 in to this one
	FORCEINLINE Vector3 operator^(const Vector3& other) const;	// Calculate cross product of two vectors
	FORCEINLINE Vector3 operator|(const Vector3& other) const;	// Calculate dot product of two vectors
	FORCEINLINE Vector3 operator+(const Vector3& other) const;	// Calculate dot product of two vectors
	FORCEINLINE Vector3 operator-(const Vector3& other) const;	// Calculate dot product of two vectors
	FORCEINLINE Vector3 operator*(const Vector3& other) const;	// Calculate dot product of two vectors
	FORCEINLINE Vector3 operator/(const Vector3& other) const;	// Calculate dot product of two vectors

	bool operator==(const Vector3& other) const;				// Check against another vector for equality
	bool operator!=(const Vector3& other) const;				// Check against another vector for inequality

	bool Equals(const Vector3& other, float epsilon = SMALL_FLOAT) const;	// Compare for equality with another vector
	bool AllComponentsEqual(float epsilon = SMALL_FLOAT) const;	// Check if all vector components equal

	FORCEINLINE Vector3 operator-() const;						// Negate vector
	FORCEINLINE Vector3 operator+=(const Vector3& other);		// Adds another vector to this
	FORCEINLINE Vector3 operator-=(const Vector3& other);		// Subtract another vector from this
	FORCEINLINE Vector3 operator*=(const Vector3& other);		// Per element multiplication
	FORCEINLINE Vector3 operator/=(const Vector3& other);		// Per element division

	FORCEINLINE Vector3 operator*=(float scale);				// Multiply by scalar
	Vector3 operator/=(float scale);							// Divide by division

	FORCEINLINE Vector3 operator-(float bias) const;			// Substracts given value from each component of the vector
	FORCEINLINE Vector3 operator+(float bias) const;			// Adds given value to each component of the vector
	FORCEINLINE Vector3 operator*(float scale) const;			// Multiplies each component of the vector by value
	Vector3 operator/(float scale) const;						// Divides each component of the vector by value

	FORCEINLINE static Vector3 CrossProduct(const Vector3& A, const Vector3& B);	// Calculate cross product of two vectors
	FORCEINLINE static Vector3 DotProduct(const Vector3& A, const Vector3& B);	// Calculate dot product of two vectors

	float& operator[](int32 index);								// Gets specific vector element
	float  operator[](int32 index) const;						// Gets specific vector element
};

