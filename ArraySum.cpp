#include<iostream>
#include<fstream>
using namespace std;

int ArraySum(int n)
{
	int *a,sum=0,i;
    a=new int[n];
	ifstream in("E:\\������Դ1.txt");
	for(i=0;in>>a[i],i<n;i++)
	{   sum+=a[i];}
	cout<<"Ԫ�صĺ�Ϊ��"<<sum<<endl;
	return sum;}

int main()
{
	int n=0;
	cout<<"�����������鳤��:";
	cin>>n;
	ArraySum(n);
	return 0;
}






