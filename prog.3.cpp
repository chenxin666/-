#include<iostream>
#include<fstream>
using namespace std;

int ArraySum(int n,int min,int max)
{
	int *a,sum=0,i;
    a=new int[n];
	ifstream in("E:\\������Դ.txt");
	for(i=0;in>>a[i],i<n;i++)
	{
		if(a[i]>=min&&a[i]<=max)
		sum+=a[i];}
	    cout<<"Ԫ�صĺ�Ϊ��"<<sum<<endl;
	    return sum;}

int main()
{
	int n=0,min,max;
	cout<<"ָ����Χ��Сֵ��";
	cin>>min;
	cout<<"ָ����Χ���ֵ��";
	cin>>max;
	cout<<"�����������鳤��:";
	cin>>n;
	ArraySum(n,min,max);
	return 0;
}


