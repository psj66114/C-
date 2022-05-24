#include <iostream>
using namespace std;
#define pi 3.14
#include "class.h"

Oval::Oval(int x, int y) {
	getTwo(x, y);
}

Oval::~Oval() {
	cout << "Oval 클래스 실행 종료" << endl;
}

void Oval::getTwo(int x, int y) {
	A = x;
	B = y;
}

void Oval::AreaOval() {
	result = A * B * 3.14;
	cout << "타원의 넓이는 " << result << endl;
}