#include "RTriangle.h"
#include <cmath>
#include <iostream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
using namespace std;

RTriangle::RTriangle() : side(1), angle(45) {};

RTriangle::RTriangle(double s, double ang) {
	if (s > 0 && ang > 0 && ang < 90) {
		side = s;
		angle = ang;
	}
	else {
		cout << "неверные данные";
		side = 1.0;
		angle = 45.0;
	};
};

double RTriangle::GetSide() {
	return side;
};

double RTriangle::GetAngle() {
	return angle;
};

void RTriangle::SetSide(double s) {
	if (s > 0) { side = s; }
};

void RTriangle::SetAngle(double a) {
	if (a > 0 && a < 90) { angle = a; }
};


void RTriangle::IncreaseSide(double proc) {
	side *= (1 + proc / 100);
};

void RTriangle::ReductionSide(double proc) {
	side *= (1 - proc / 100);
};

void RTriangle::CalculateABC(double& a, double& b, double& c) {
	a = side;
	double rad = angle * M_PI / 180.0;
	b = a * tan(rad);
	c = sqrt(a * a + b * b);
}


double RTriangle::CalculateRadius() {
	double a, b, c;
	CalculateABC(a, b, c);
	double r = (a + b - c)/2.0;
	return r;
};

double  RTriangle::CalculateSqrtS() {
	double a, b, c;
	CalculateABC(a, b, c);
	double s = a * b / 2.0;
	double rez = sqrt(s);
	return rez;
};

double  RTriangle::CalculateDistance() {
	double a, b, c;
	CalculateABC(a, b, c);
	double r_in = CalculateRadius();
	double r_circum = c / 2.0;
	return fabs(r_in - r_circum);
};