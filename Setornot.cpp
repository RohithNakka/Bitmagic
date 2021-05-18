#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos;
	cout<<"Enter number u want to check:";
	cin>>num;
	cout<<"Enter the position to check the bit set or not:";
	cin>>pos;
	if(num&((pos-1)<<1))
	   cout<<"Yes";
	else
	   cout<<"No";
}

