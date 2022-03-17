#define _CRT_SECURE_NO_WARNINGS 1

/***********************
作者：L.K.
日期：3.17
内容：
************************/
#include <iostream>
using namespace std;

const float PI = 3.1415;
const float FENCE_PRICE = 35;
const float CONCRETE_PRICE = 20;

class Circle
{
public:
	Circle(float r);
	float circumference();
	float area();
private:
	float radius;
};

Circle::Circle(float r)
{
	radius = r;
}

float Circle::circumference()
{
	return 2 * PI * radius;
}

float Circle::area()
{
	return PI * radius * radius;
}

int main()
{
	float radius;
	cout << "Enter the radius of the circle:";
	cin >> radius;
	Circle pool(radius);
	Circle poolRim(radius + 1);

	float fenceCost = poolRim.circumference() * FENCE_PRICE;
	cout << "Fencing Cost is " << fenceCost << endl;

	float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "Concrete Cost is " << concreteCost << endl;

	return 0;
}
