#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& arr)
{
   for(int i=0;i<arr.size();i++)
   {
      int cur=arr[i];
      int j=i+1;
      int mn_e=cur;
      int mn_ind=i;
      while(j<arr.size())
	  {
         if(arr[j]<mn_e)
		 {
			mn_e=arr[j];
			mn_ind=j;
		 }
		 else
		 {
			j++;
		 }
	  }
	  swap(arr[mn_ind],arr[i]);
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

    cout << "Original array: ";
    for (int num : v)
	{
        cout << num << " ";
    }

    selectionSort(v);

    cout << "\nSorted array: ";
    for (int num : v) {
        cout << num << " ";
    }

    return 0;
}

