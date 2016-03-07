#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int a[100],sum=0;
	ifstream in("E:\\数据来源1.txt");
	for(int i=0;in>>a[i],i<100;i++)
	{   sum+=a[i];}
	cout<<"100个元素的和为："<<sum<<endl;
	   return 0;
}

