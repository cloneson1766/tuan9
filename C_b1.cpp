#include <iostream>

using namespace std;

//lay do dai chuoi
int size(const char *a)
{
	int n = 0;
	while(*a!=0)
	{
		n++;
		a++;
	}
	return n;
}

//dao nguoc
void reverse(const char *a)
{
	char *p = new char;
	int n = size(a);
	for(int i=0;i<n;i++)
	{
		*(p+i) = *a;
		a++;
	}
	//*(p+n) = '\0';
	for(int i=n-1;i>=0;i--){
		cout << *(p+i);
	}
	delete p;
}

//xoa ki tu
char* delete_char(const char *a, char c)
{
	int n=size(a);
	char *p=new char;
	for(int i=0;i<n;i++)
	{
		*(p+i) = *a;
		a++;
	}
	*(p+n) = '\0';
	for(int i=0;i<n;i++){
			if(*(p+i)==c){
				for(int j=i;j<n;j++){
				*(p+j) = *(p+j+1);
			}
			i--;
			n--;
		}
	}
	return p;
	delete p;
}

//don phai
char* pad_right(const char *a,int _n)
{
	int n = size(a);
	char *p = new char;
	for(int i=0;i<n;i++)
	{
		*(p+i) = *a;
		a++;
	}
	*(p+n) = '\0';
	if(n>=_n){
		return p;
	}
	else
	{
		for(int i=n;i<_n;i++)
		{
			*(p+i) = '_';
			*(p+_n)='\0';
			n++;
		}
		return p;
	 }
	 delete p;
}


int main()
{
	char s[100];
	char c;
	int n;
	cout << "Nhap chuoi: ";
	cin.getline(s,100);
	reverse(s);
	cout << "\nNhap ki tu can xoa: "; cin >> c;
	cout << delete_char(s, c);
	cout << "\nNhap do dai muon don: ";cin >> n;
	cout << pad_right(s,n);
	cout << "\n";
}
