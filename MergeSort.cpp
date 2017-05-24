//Merge Sort + To find number of Array inversion
#include <iostream>
using namespace std;
long long int countInv=0;

void merge(int A[],int l,int mid,int r)
{
    int j=l;
    int k=mid+1;
    int Arr[r-l+1],temp=0;
    for(int i=l;i<=r;i++)
    {
        if(j>mid)
        {
           Arr[temp++]=A[k++]; 
        }
        else
        if(k>r)
        {
           Arr[temp++]=A[j++];
           
        }
        else
        if(A[j]<=A[k])
        {
            Arr[temp++]=A[j++];
        }
        else
        {
            Arr[temp++]=A[k++];
            countInv=countInv+(mid-j)+1;
        }
    }
    for(int i=0;i<temp;i++)
      A[l++]=Arr[i];
    
}
void mergeSort(int A[],int l,int r)
{
    if(l<r)
    {
    int mid=(l+r)/2;
    mergeSort(A,l,mid);
    mergeSort(A,mid+1,r);
    merge(A,l,mid,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
     cin>>A[i];
    mergeSort(A,0,n-1);
    for(int i=0;i<n;i++) 
     cout<<A[i]<<" ";
    cout<<endl;
    //cout<<countInv;
    return 0;
}
