#include<iostream>

using namespace std;

void PrintArray(int arr[],int size){
    cout<<"---> THE ELEMENTS OF THE ARRAY ARE: ";
    cout<<endl;
    for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
     cout<<endl;
    }
}
int main(){
 int arr[100],size,num;
 cout<<"Enter the size of the array: ";
 cin>>size;
 cout<<"Enter the elements of the array: ";
 for(int i=0;i<size;i++){
  cin>> arr[i];
  cout<<" ";
 }
 PrintArray(arr,size);
 cout<<"Enter the data you want to insert: ";
 cin>> num;
 arr[size]=num;
 size++;
 PrintArray(arr,size);





    return 0;

}