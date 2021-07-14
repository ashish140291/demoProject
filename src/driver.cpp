#include<iostream>
#include <fstream>
using namespace std;
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

	void Generateresult(int res, int input1, int input2)
	{
		  ofstream myfile("D://Aish//demoProject//reports//Report.html" , ios::app);
		  myfile << "<!DOCTYPE html><html><head><p>Test Results:</p></head><body>"; //starting html
		  
		 //add some html content
		 myfile << "Input 1 = "<<input1 << " :  Input2 : "<< input2 << " => Result = "<<res;  
		 
		  
		  
		//ending html
		myfile << "</body></html>";
		myfile.close();
	}
};



int main()
{
	int input1 = 5, input2 =6;
	Numbers obj(input1, input2);
	obj.Generateresult(obj.Sum(),input1,input2);
	obj.Generateresult(obj.difference(),input1,input2);
	obj.Generateresult(obj.Multiplication(),input1,input2);
	//cout <<"output is generated at this path: D:\Aish\demoProject\result\Report.html" << endl;
	return 0;
}