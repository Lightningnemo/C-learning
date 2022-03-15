#define _CRT_SECURE_NO_WARNINGS 1
/***********************
作者：L.K.
日期：3.15
修改内容：
************************/
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int sum = 0;
	cout << "请输入一段文本:\n";
	while (cin >> i) {
		sum += i;
		while (cin.peek() == ' ')
		{
			cin.get();
		}
		if (cin.peek() == '\n')
		{
			break;
		}
	}
	cout << sum << endl;
	return 0;
}
