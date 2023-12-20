#include<iostream>
class Rect
{
	double length;
	double width;
public:
	Rect(double L, double W) :length(L), width(W) {}
	Rect operator+(Rect& a)
	{
		Rect result(length + a.length, width + a.width);
		return result;
	}
	void display()
	{
		std::cout << "length =" << length << " ,width=" << width << std::endl;
	}
};
int main()
{
	Rect r1(10, 20), r2(30, 20);
	r1.display();
	r2.display();
	Rect result = r1 + r2;
	std::cout << "Result:"; result.display();

	return 0;
}