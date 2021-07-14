#include<iosteam>
using namespace std;

class Numbers
{
private:
	int a;
	int b;
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
