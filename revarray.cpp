#include <iostream>
//PROGRAM TO REVERSE AN ARRAY

using namespace std;

int reversearray(int arr[],int size){
	int start=0;
	int end = size-1;
	
		while(start<=end){
		swap(arr[start],arr[end]);
		start++,end--;	
		}	
}
int printrevarray(int arr[],int size){
	cout<<"The reverse of the given array is [ ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	cout<<endl;
}

int main()
{
 int size;
 cout<<"Enter the size of the array : ";
 cin>>size;
 int array[size];
 for(int i=0;i<size;i++){
 	cout<<"Enter the element "<<i+1<<endl;
 	cin>>array[i];
 }
 
 reversearray(array,size);
 printrevarray(array,size);
 
 return 0;
}


