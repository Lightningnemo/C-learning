#define _CRT_SECURE_NO_WARNINGS 1
/***********************
作者：L.K.
日期：3.15
修改内容：
************************/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//ifstream in;
	//in.open("test.txt");
	//if (!in)
	//{
	//	cerr << "打开文件失败" << endl;
	//	return 0;
	//}
	//char x;
	//while (in >> x)
	//{
	//	cout << x;
	//}
	//cout << endl;
	//in.close();

	ofstream out;
	out.open("test.txt", ios::app);

	if (!out)
	{
		cerr << "打开文件失败" << endl;
		return 0;
	}

	for (int i = 10; i > 0; i--)
	{
		out << i;
	}
	out.close();
	return 0;
}
