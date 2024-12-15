#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
}

float Triangle::get_area(/*bool has_depth*/) const
{
	return float(0.5 * _base * _height);
}
