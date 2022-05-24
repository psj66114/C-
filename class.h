#ifndef Oval_H
#define Oval_H

class Oval {  //타원 클래스
public:
	int A = 3, B = 7;
	double result;
	Oval(int x, int y);
	~Oval();
	void getTwo(int x, int y);
	void AreaOval();

};
#endif Oval_H