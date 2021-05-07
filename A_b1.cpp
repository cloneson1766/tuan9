#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* a, const char* b)
{
	char *p = new char;
	strcpy(p, a);
    strcat(p, b);
    return p;
    delete p;
}

int main()
{
	cout<<concat("Hello"," World");
	return 0;
}
