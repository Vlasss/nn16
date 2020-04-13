#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int ac, char* av[])
{
	setlocale(LC_ALL, "ru");
	string str, str1, str2, str3, str4;
	int n1, n2;
	char* name1, * name2;

	if (ac > 1)
	{
		name1 = av[1];
		name2 = av[2];
	}
	else {
		cout << "¬ведите им€ файла" << endl;
		return 0;
	}

	ifstream f1(name1);
	if (f1.is_open() == 0)
	{
		cout << "ќшибка при открытии файла" << endl;
		return 0;
	}

	cout << "¬ведите N1 и N2" << endl;
	cin >> n1;
	cin >> n2;

	char sym;
	while (!f1.eof())
	{
		str = "";
		f1 >> str;
		str1 = str1 + " " + str;
	}

	for (int i = 0; i < n1; i++)
	{
		if (str1[i] == ' ')
		{
			str2 = str2 + str1[i];
			n1++;
		}
		else
		{
			str2 = str2 + str1[i];
		}
	}


	for (int i = 0; i < n2; i++)
	{

		if (str1[str1.size() - i - 1] == ' ')
		{
			str3 = str1[str1.size() - i - 1] + str3;
			n2++;
		}
		else
		{
			str3 = str1[str1.size() - i - 1] + str3;

		}
	}

	str4 = str2 + str3;
	ofstream f2("end.txt");
	f2 << str4;
	f1.close();
	f2.close();
	return 0;
}