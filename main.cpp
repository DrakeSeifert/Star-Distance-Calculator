#include <iostream>
#include "star.hpp"
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define NUM_STARS 1000

using namespace std;

int main() {

	srand(time(NULL));

	Star *star = new Star[NUM_STARS];
	for(int i; i < NUM_STARS; i++) {
		star[i] = Star();
	}

	int ans;
	cout << "Enter distance from Earth in ly: ";
	cin >> ans;

	int validStars = 0;
	int starDistance;
	for(int i; i < NUM_STARS; i++) {
		starDistance = star[i].distance();
		if(starDistance <= ans) {
			cout << i << "\t" << starDistance << endl;
			validStars++;
		}
	}

	cout << endl << "Stars in range: " << validStars << endl << endl;

	//Max distance is 8658.52 ly
	//cout << sqrt(3*(4999*4999)) << endl;

	return 0;
}