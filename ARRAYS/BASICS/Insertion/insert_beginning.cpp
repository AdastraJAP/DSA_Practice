#include<iostream>

using namespace std;

void PrintArray(int arr[],int size){
    cout<<"--->THE ELEMENTS OF THE ARRAY ARE : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
        cout<<" ";
    }
}
int main(){
  int arr[100],size,num;
  cout<<"Enter the size of the array: ";
  cin>>size;
  cout<<"Enter the elements of the array : ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  cout<<"The data you want to insert: "<<endl;
  cin>>num;

 for(int i=size-1;i>=0;i--){
    arr[i+1]=arr[i];

 }
 arr[0]=num;
 size++;
 PrintArray(arr,size);
}
