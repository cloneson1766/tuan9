#include<iostream>
using namespace std;
void a()
{
	int k = 5;
	int *p = &k;
	delete p;
	cout << *p;
}
int main()
{
	a();
}

//sau khi delete thi khong truy xuat duoc den vung bo nho do nua
