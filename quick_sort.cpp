#include<bits/stdc++.h>
using namespace std;
int partision(vector<int>&v,int low,int high)
{
	int pivot=v[low];
	int i=low,j=high;
	while(i<j)
	{
		while(i<=high-1 && v[i]<=pivot)
		{
			i++;
		}
		while(j>=low+1 && v[j]>=pivot)
		{
			j--;
		}
		if(i<j)
		{
			swap(v[i],v[j]);
		}
	}
	swap(v[low],v[j]);
	return j;


}
 void quick_sort(vector<int>&v,int low,int high)
 {
 	if(low<high)
	{
	int pi= partision(v,low,high);
	quick_sort(v,low,pi-1);
	quick_sort(v,pi+1,high);
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
  cout<<"before quick sort"<<endl;
 for(int i=0;i<n;i++)
  {
	cout<<v[i]<<" ";
  }
  cout<<endl;
  cout<<"After quick sort"<<endl;
   quick_sort(v,0,n-1);
  for(int i=0;i<n;i++)
  {
	cout<<v[i]<<" ";
  }
  cout<<endl;
}


