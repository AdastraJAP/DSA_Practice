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

int arr[100],size,pos,num;
cout<<"Enter the size of the array: ";
cin>> size;
cout<<"Enter the elements of the array: ";
for(int i=0;i<size;i++){
    cin>>arr[i];
    cout<<" ";
}
cout<<"Enter the data you want to insert: ";
cin>>num;
cout<<endl;
cout<<"Enter the position where you want to insert the data : ";
cin>>pos;
for(int i=size-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
}
arr[pos-1]=num;
size++;
PrintArray(arr,size);

    return 0;
}