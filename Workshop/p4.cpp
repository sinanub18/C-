// + operator overloading

/*#include<iostream>
using namespace std;
class add
{
	int n;
public:
	add(int i)
	{
		n = i;
	}
	add()
	{
	}
	add operator+(add a1)
	{
		add c;
		c.n = (this->n) + a1.n;
		return c;
	}
	void disp()
	{
		cout << n;
	}
};

int main()
{
	add ob1(10);
	add ob2(20);
	add ob3(30);
	add res;
	res=ob1 + ob2; // this is interpreted by compiler as ob1.operator+(ob2);
	res.disp();
	//ob3 + ob2; this is interpreted by compiler as ob3.operator+(ob2);
return 0;
}*/




