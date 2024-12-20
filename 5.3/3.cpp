#include<iostream>
using namespace std;
class A
{
private:
	int length, width, height;
public:
	void set()
	{
		cout << "请分别输入长方体的长、宽、高：";
		cin >> length >> width >> height;
	}
	void show()
	{
		int v;
		v = length * width * height;
		cout << "该长方体的体积为：" << v << endl;
	}
};
int main()
{
	A a1;
	a1.set();
	a1.show();
	return 0;
}