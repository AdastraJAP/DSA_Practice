#include<iostream>

using namespace std;

void PrintArray(int arr[],int size){
    cout<<"---> THE ELEMENTS OF THE ARRAY ARE : "<<endl;
    for(int i=0;i<size;i++){
       cout<<arr[i];
       cout<<" ";
    }
}

int main(){
int arr[50],size,pos;
cout<<"Enter the size of the array:  ";
cin>>size;
cout<<"Enter the elements of the array: ";
for(int i=0;i<size;i++){
   cin>>arr[i];
}
size--;
PrintArray(arr, size);
    return 0;
}