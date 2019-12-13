#include<iostream>
using namespace std;
int main()
{
int n;
int c=1;
cin>>n;
for(int i=1;i<=n;i++)
{
	for(int space=i;space<=n;space++)
	{
		cout<<"  ";
	}
for(int j=1;j<=2*i-1;j++)
{
cout<<c<<" ";
c++;
}
cout<<endl;
}
return 0;
}
