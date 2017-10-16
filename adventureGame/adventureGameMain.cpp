#include <iostream>
#include "adventureGame.h"
using namespace std;

int main()
{
	//create benefits arrays to pass into constructors
	//CS, Math, Pre-Med, Buisness, Bible
	//benefits for Locations (MBB, LIB, CC, FRIENDS, CAT, GATA, BIBLE, MOODY)
	double mbbBenefits[5] = {0};
	double libBenefits[5] = {0, 0, -1.0, 2.0, 0};
	double ccBenefits[5] = {.5, .5, 0, 0, 1.0};
	double friendsBenefits[5] = {-1.0, -1.0, 0, 3.0, 1.5};
	double catsBenefits[5] = {0, ??, 0, 0, 0};
	double gataBenefits[5] = {0, 0, ??, 0, 0};
	double bibleBenefits[5] = {0, 0, 0, 0, 2.0};
	double moodyBenefits[5] = {0};

	//benefits for Items (potion, food, book)
	double potionBenefits[5] = {0, 0, -1.0, 0, 0};
	double foodBenefits[5] = {0, 0, 0, 1.0, 0};
	double bookBenefits[5] = {.5, .5, 0, 0, -1.5};

	//benefits for Professors (Prather => MBB, Homer => BIBLE, Reeves => Friends, Erkhe => LIB, Pettit => Moody)
	double PratherBenefits[5] = {0};
	double HomerBenefits[5] = {0, 1.0, 1.0, 1.0, 1.0};
	double ReevesBenefits[5] = {.5, .5, .5, .5, .5};
	double ErkheBenefits[5] = {0, 1.0, 0, 0, 0};
	double PettitBenefits[5] = {2.0, 2.0, 0, 0, 0};
}