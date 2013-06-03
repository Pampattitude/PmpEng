#pragma once

template<typename T>
class Vector1
{
public:
	Vector1()
		:	x()
	{}
	Vector1(T x)
		:	x(x)
	{}
	Vector1(Vector1 const &v)
		:	x(v.x)
	{}

	Vector1 const	&operator=(Vector1 const &v)
	{
		if (&v == this)
			return *this;
		this->x = v.x;
		return *this;
	}
	Vector1			operator+(Vector1 const &v) const
	{ return Vector1(this->x + v.x); }
	Vector1			operator-(Vector1 const &v) const
	{ return Vector1(this->x - v.x); }
	Vector1			operator*(Vector1 const &v) const
	{ return Vector1(this->x * v.x); }
	Vector1			operator/(Vector1 const &v) const
	{ return Vector1(this->x / v.x); }
	Vector1			operator+=(Vector1 const &v)
	{ this->x += v.x; return *this; }
	Vector1			operator-=(Vector1 const &v)
	{ this->x -= v.x; return *this; }
	Vector1			operator*=(Vector1 const &v)
	{ this->x *= v.x; return *this; }
	Vector1			operator/=(Vector1 const &v)
	{ this->x /= v.x; return *this; }

	~Vector1()
	{}

	T			x;
};
