#include<iostream>
#include<fstream>
using namespace std;
ifstream fin_1;
ofstream fout_2;
ofstream fout_3;
void task1() {

	fin_1.open("tickets.txt");
	fout_2.open("lucky.txt");
	fout_3.open("unlucky.txt");
	char inp[6];
	int luck, unluck;
	luck = 0;
	unluck = 0;
	for(int i=0; i<1000; i++)
	{
		fin_1 >> inp;
		if ((inp[0] + inp[1] + inp[2]) == (inp[3] + inp[4] + inp[5]))
		{
			luck++;
			fout_2 << inp << '\n';

		}
		else
		{
			unluck++;
			fout_3 << inp << '\n';

		}
	}

	fin_1.close();
	fout_2.close();
	fout_3.close();
	cout << "Luck=" << luck << "\n Unluck" << unluck;

}// по какой-то причине выдает ошибку о повреждении стека вокруг inp, мне решить так и не удалось.

void task2()
{
	struct strin {//формально структура тут нужна только чтоб исправить ошибку, которую я смог исправить только добавив саму структуру
		char* str = new char;
		int len = -1;
	};
	int cou=0;
	int inp[5] ;
	strin mem;
	
	fin_1.open("triangles.txt");
	int all;
	fin_1 >> all;
	for (int i = 1; i < all; i++)
	{
		for (int g = 0; g < 5; g++) {

			fin_1 >> inp[g];
		}
		int col = inp[4];
		inp[4] = inp[1] + inp[2] + inp[3];
		for (int g = 0; g < 5; g++) 
		{
			mem.str[cou] = inp[i];
			cou++;
		}
		mem.str[cou] = col;
		cou++;
	}
	mem.str[cou] = '\0';
	fin_1.close();
	fin_1.open("colors.txt");
int colAll;
	fin_1 >> colAll;              //Выдает ошибку доступа 
	for (int i = 0; colAll; i++) 
	{
		int colnum;
		string col;
		fin_1 >> colnum >> col;
		col = "triangle-" + col + ".txt";
		fout_2.open(col);
		for (int g = 0; g < all; g++) 
		{
			if(colnum==mem.str[6*g+5])
			{
			
			}

		}
	}
}
int main()
{
	task2();

}