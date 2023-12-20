#include<stdio.h>
class vehicle
{
public:
	int MaxSpeed;
	int Weight;
	vehicle(int maxspeed, int weight) :MaxSpeed(maxspeed), Weight(weight){}
	void Run()
	{
		printf("Run\n");
	}
	void Stop() 
	{
		printf("Stop\n");
	}
};
class bicycle :virtual public vehicle
{
public:
	int Hight;
	bicycle(int maxspeed, int weight,int hight):vehicle(maxspeed, weight),Hight(hight){}
};
class motorcar :virtual public vehicle
{
public:
	int SeatNum;
	motorcar(int maxspeed, int weight,int seatnum):vehicle(maxspeed, weight), SeatNum(seatnum) {}
};
class motorcycle:public motorcar,public bicycle
{
public:
	motorcycle(int maxspeed, int weight, int hight,int seatnum) :vehicle(maxspeed, weight), bicycle(maxspeed, weight, hight), motorcar(maxspeed, weight, seatnum) {}
};
int main()
{
	motorcycle  motorcycle1(120, 60, 150, 2);
	printf("MaxSpeed=%d\nWeight=%d\nHight=%d\nSeatNum=%d", motorcycle1.MaxSpeed, motorcycle1.Weight, motorcycle1.Hight, motorcycle1.SeatNum);

	return 0;
}