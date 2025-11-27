#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number= ";
	cin>>num;
	if(num%2==0)
	{
		cout<<"The number you enter is even: "<<endl;
	}
	else
	{
		cout<<"The number you enter is odd: "<<endl;
	}
	return 0;
}