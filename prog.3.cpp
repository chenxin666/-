#include<iostream>
#include<fstream>
using namespace std;

int ArraySum(int n,int min,int max)
{
	int *a,sum=0,i;
    a=new int[n];
	ifstream in("E:\\数据来源.txt");
	for(i=0;in>>a[i],i<n;i++)
	{
		if(a[i]>=min&&a[i]<=max)
		sum+=a[i];}
	    cout<<"元素的和为："<<sum<<endl;
	    return sum;}

int main()
{
	int n=0,min,max;
	cout<<"指定范围最小值：";
	cin>>min;
	cout<<"指定范围最大值：";
	cin>>max;
	cout<<"输入任意数组长度:";
	cin>>n;
	ArraySum(n,min,max);
	return 0;
}


