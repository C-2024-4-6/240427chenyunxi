#include<iostream>
using namespace std;
class A
{
private:
	int length, width, height;
public:
	void set()
	{
		cout << "��ֱ����볤����ĳ������ߣ�";
		cin >> length >> width >> height;
	}
	void show()
	{
		int v;
		v = length * width * height;
		cout << "�ó���������Ϊ��" << v << endl;
	}
};
int main()
{
	A a1;
	a1.set();
	a1.show();
	return 0;
}