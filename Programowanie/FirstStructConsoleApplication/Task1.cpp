
#include <iostream>

//Napissz program który obliczy odleg³oœc punktu 2d od œrodka uk³adu wspó³rzêdnych 

void Task1()
{
	double x, y;
	std::cout << "Podaj x\n";
	std::cin >> x;

	std::cout << "Podaj y\n";
	std::cin >> y;

	double distance = sqrt(x * x + y * y);

	std::cout << "Odleg³oœc to : " << distance << "\n";
}