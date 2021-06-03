#include "ThietBi.h"



ThietBi::ThietBi()
{
	A = NULL;
	n = 0;
}


ThietBi::~ThietBi()
{
	/*delete[]A;
	A = NULL;*/
}

void ThietBi::tab(int n)
{
	for (int i = 0; i < n; i++)
		cout << "\t";
}
void ThietBi::Nhap(ThietBi &B)
{
	cout << "Nhap ten thiet bi: ";
	cin.getline(B.ten, 30);
	cout << "Nhap so thanh phan cua " << B.ten << ": ";
	cin >> B.n;
	cin.ignore();
	B.A = new ThietBi[B.n];
	for (int i = 0; i < B.n; i++)
	{
		Nhap(B.A[i]);
	}
}


void Xuat(ThietBi B, int count)
{
	B.tab(count); 
	cout << B.ten << endl;
	for (int i = 0; i < B.n; i++)
		Xuat(B.A[i], count + 1);
}