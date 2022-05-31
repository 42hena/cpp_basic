#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimspleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimspleFunc() const
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple &obj)
{
	obj.SimspleFunc();
}

int main(void)
{
	SoSimple obj1(2);
	const SoSimple obj2(7);

	obj1.SimspleFunc();
	obj2.SimspleFunc();

	YourFunc(obj1);
	YourFunc(obj2);
	return 0;
}