#pragma once
#include <iostream>

using namespace std;


class ThietBi
{
protected:
	int n;
	char ten[30];
	class ThietBi *A;
public:
	ThietBi();
	~ThietBi();
	void tab(int);
	void Nhap(ThietBi&);
	friend void Xuat(ThietBi, int);
};

