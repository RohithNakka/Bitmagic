#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"enter a number";
	cin>>num;
	while(num!=0)
	{
		if(num&1==1)
		count++;
		num>>=1;
		
		
		
	}
	cout<<count;
}

