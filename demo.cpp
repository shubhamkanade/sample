#include<iostrem>
using namespace std;

class Demo
{
	public:

		void fun(int *p)
		{
			cout<<"first definition";
		}

		void fun(float *p)
		{
			cout<<"second definition";
		}

		void fun(int iNo)
		{
			cout<<"third definition";
		}
};

int main()
{
	int no=11;
	float f=3.14;

	Demo obj();

	obj.fun(no);
	obj.fun(&no);
	obj.fun(&f);

	return 0;
}
