#include<iostream>
using namespace std;

void BubbleSort(int Ar[],int n)
{
	int temp;
	cout<<"\nSorted Array:"<<endl;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++)
		{
			if(Ar[j+1]<Ar[j])
			{
				temp=Ar[j];
				Ar[j]=Ar[j+1];
				Ar[j+1]=temp;
			}
		}
	}
 for(int i=0;i<n;i++)
  cout<<Ar[i]<<" ";
 cout<<endl;
}
int main()
{
	int size,Ar[100];
	cout<<"Enter the size of the Array:"<<endl;
	cin>>size;
	cout<<"\nEnter the elements of the Array:"<<endl;
	for(int i=0;i<size;i++)
	 cin>>Ar[i];
	BubbleSort(Ar,size);
}
