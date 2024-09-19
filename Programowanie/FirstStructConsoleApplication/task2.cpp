#include <iostream>

//Napissz program który obliczy odleg³oœc punktu 2d od innego punktu 

struct point
{
	double x;
	double y;
};
void getPointValue(point &p)
{
	std::cout << "Podaj x\n";
	std::cin >> p.x;

	std::cout << "Podaj y\n";
	std::cin >> p.y;
}

void Task2()
{
	point firstPoint;

	getPointValue(firstPoint);

	double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);

	std::cout << "Odleg³oœc to : " << distance << "\n";
}