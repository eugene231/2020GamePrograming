#include "Car.h"

void Car::SpeedUp() {
	speed += 10;
}

void Car::SpeedDown() {
	speed -= 10;
}

void Car::show() {
	cout << "==============" << endl;
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
	cout << "==============" << endl;
}

int Car::getSpeed() {
	return speed;
}

void Car::setSpeed(int s) {
	speed = s;
}

int Car::getGear() {
	return gear;
}

void Car::setGear(int g) {
	gear = g;
}

string Car::getColor() {
	return color;
}

void Car::setColor(string c) {
	color = c;
}

Car::~Car() {
	cout << "소멸자 호출" << endl;
	delete p;
}

Car::Car() :MAX_SPEED(200) {
	cout << "생성자 호출" << endl;
	speed = 0;
	gear = 1;
	color = "white";
}

Car::Car(int s, int g, string c) :speed(s), gear(g), color(c) {};