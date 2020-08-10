#include "Car.h"

void Car::SpeedUp() {
	speed += 10;
}

void Car::SpeedDown() {
	speed -= 10;
}

void Car::show() {
	cout << "==============" << endl;
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "���� : " << color << endl;
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
	cout << "�Ҹ��� ȣ��" << endl;
	delete p;
}

Car::Car() :MAX_SPEED(200) {
	cout << "������ ȣ��" << endl;
	speed = 0;
	gear = 1;
	color = "white";
}

Car::Car(int s, int g, string c) :speed(s), gear(g), color(c) {};