#include<iostream>
#include"date.h"
using namespace std;
using namespace ext;
int main() {
	ext::Date inp;
	int i;
	cin >> inp.day>> i>> inp.year;
	inp.month = Month(i);
	cin >> i;
	TimeDelta in;
	in.delta = i;
	print(inp, DateFormat::MonthAsString);
}
