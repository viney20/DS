/*AIM- Write a program to accept N integers from the user and store them in an array. Sort the array in ascending order using Bubble sort. Then accept another number from the user, search whether that number exists in the array using Binary Search. If it does, display its index and if it doesn't, then print that the number is not found in the array.*/
#include<iostream>
using namespace std;
class arr
{
	public:
		void create();
		void sort();
		void display();
		int i,j,n,beg=0,end,mid,item,flag=0,loc;
	 int a[100];
};
void arr::create()
{
	cout<<"Enter the size of array";
	cin>>n;
	cout<<"enter the elements in array";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}	
	}
void arr :: sort()
{
    cout<<"Array after sorting";
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
		{
			int temp;
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		    }
		}
	}
	for(i=0;i<n;i++)
	{		
	cout<<"\n"<<a[i];
    }
}
void arr::display()
{
	end=n-1;
    cout<<"\n Enter no. to be checked";
	cin>>item;
    while(beg<=end)
    {
        mid=((beg+end)/2);
	if(item==a[mid])
	{
		loc=mid;
		flag=1;
		break;
		}
		else if(item>a[mid])
		{
			beg=mid+1;
		}
		else if(item<a[mid])
		{
			end=mid-1;
		}
	 }
		if(flag)
		{
			cout<<item<<"\nElement found"<<loc;
		}
		else
		{
			cout<<"Not found";
		}
}
int main()
{
	arr ll;
	ll.create();
	ll.sort();
	ll.display();
}
