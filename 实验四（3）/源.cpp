#include<iostream>
class shape
{
public:
	virtual double area() 
	{
		return 0;
	};
};
class square :virtual public shape
{
protected:
	double side;
public:
	square(double side):side(side){}
	double area()
	{
		return  side* side;
	}
};
class cube :public square
{
public:
	cube(double side) : square(side){}
	double area()
	{
		return  6*side * side;
	}
};
int main()
{
	square s(2.0);
	cube c(4.0);
	shape* p=&s;
	std::cout << "s面积为="<< p->area() << std::endl;
	p = &c;
	std::cout << "c面积为=" << p->area() << std::endl;

	return 0;
}