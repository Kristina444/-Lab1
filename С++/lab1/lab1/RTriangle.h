
#pragma once
#include <iostream>

class RTriangle
{
private:
	double side;
	double angle; //угол между катетом а и гепотинузэй с

public:
	RTriangle();
	RTriangle(double s, double a);

	double GetSide();
	double GetAngle();

	void SetSide(double s);
	void SetAngle(double a);

	void IncreaseSide(double proc);
	void ReductionSide(double proc);

	void CalculateABC(double& a, double& b, double& c);
	double CalculateRadius();
	double CalculateSqrtS();
	double CalculateDistance();
};

