#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>

using namespace std;

class Car
{
private:
	int speed;
	int gear;
	string color;
	int* p;
	const int MAX_SPEED;

public:
	Car(int s, int g, string c);
	Car();
	~Car();

	void SpeedUp();
	void SpeedDown();
	void show();

	int getSpeed();
	void setSpeed(int s);
	int getGear();
	void setGear(int g);	
	string getColor();
	void setColor(string c);

};

int main() {
	srand(time(NULL));
	srand(GetTickCount());
	
	Car car1(rand() % 200, 1, "red"), car2(rand() % 200, 1, "red");
	Car* a = new Car();

	car1.show();
	car2.show();


	if (car1.getSpeed() > car2.getSpeed()) {
		cout << "car1ÀÌ ½Â¸®ÇÔ" << endl;
	}
	else {
		cout << "car2ÀÌ ½Â¸®ÇÔ" << endl;
	}

	return 0;
	
}