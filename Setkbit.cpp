#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int num,pos;
  cout<<"enter the number:";

  cin>>num;
  cout<<"Enter the position u want the bit set to 1:";
  cin>>pos;
  int res;
  res=num|(1<<(pos-1));

  cout<<"the result after setting bit to 1";
  cout<<res;
  return 0;
}
