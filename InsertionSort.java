import java.util.Scanner;

class InsertionSort{
	public static void main(String[] args){
	  Scanner sc = new Scanner(System.in);
	  int size;
      System.out.println("Enter the Size of Array:");
      size=sc.nextInt();
      int Arr[] = new int[size];
      System.out.println("Enter the Elements of Array:");
      for(int i=0;i<size;i++)
       Arr[i]=sc.nextInt();
      InSort(Arr,size);
	}
	public static void InSort(int Ar[],int n)
	{
	 int i,hole,value;
	 for(i=1;i<n;i++){
	  value=Ar[i];
	  hole=i;                       //Position of value
	  while(hole>0 && Ar[hole-1]>value){
	  	Ar[hole]=Ar[hole-1];
	  	hole--;
	  }
	  Ar[hole]=value;
	 }
	 System.out.println("Sorted Array Elements:");
	 for(i=0;i<n;i++){
	 System.out.print(Ar[i]+" ");
	 }
	 System.out.println();
	}
}