#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&v,int n)
 {
	for(int i=1;i<n;i++)
	{
		int key=v[i];//assuming v[i-1] to v[0] itself a sorted array
		int j=i-1;
		while(j>=0 && v[j]>key)  //now key will be inserted in sorted array
		{
		  v[j+1]=v[j];
		  j=j-1;
		}
		v[j+1]=key;
	}
 }
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	insertion_sort(v,n);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
}
