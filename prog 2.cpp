#include<iostream>
#include<fstream>
using namespace std;

int ArraySum(int n)
{
	int *a,sum=0,i;
    a=new int[n];
	ifstream in("E:\\数据来源1.txt");
	for(i=0;in>>a[i],i<n;i++)
	{   sum+=a[i];}
	cout<<"元素的和为："<<sum<<endl;
	return sum;}

int main()
{
	int n=0;
	cout<<"输入任意数组长度:";
	cin>>n;
	ArraySum(n);
	return 0;
}






