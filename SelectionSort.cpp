#include<iostream>
using namespace std;

void SelectionSort(int Ar[],int n)
{
	int ismall,temp;
	cout<<"\nSorted Array:"<<endl;
	for(int i=0;i<n-1;i++){
		ismall=i;
		for(int j=i+1;j<n;j++)
		{
			if(Ar[j]<Ar[ismall])
			{
				temp=Ar[ismall];
				Ar[ismall]=Ar[j];
				Ar[j]=temp;

			}
		}
        cout<<Ar[i]<<" ";
	}
  cout<<Ar[n-1]<<endl;
}
int main()
{
	int size,Ar[100];
	cout<<"Enter the size of the Array:"<<endl;
	cin>>size;
	cout<<"\nEnter the elements of the Array:"<<endl;
	for(int i=0;i<size;i++)
	 cin>>Ar[i];
	SelectionSort(Ar,size); 
}