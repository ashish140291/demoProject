#include<iostream>
class Numbers
{
private:
	int a;
	int b;
public:
	Numbers(int x = 0, int y = 0)
	{
		a = x;
		b = y;
	}

	int Sum()
	{
		return a + b;
	}
	int difference()
	{
		return a - b;
	}
	int Multiplication()
	{
		return a * b;
	}
};

using namespace std;

int main()
{
	Numbers obj(5, 6);
	cout <<" the result is = "<< obj.Sum() << endl;
	return 0;
}