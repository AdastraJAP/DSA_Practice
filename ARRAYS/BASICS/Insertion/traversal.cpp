#include<iostream>

using namespace std;

void PrintArray(int arr[], int size){
    cout<<"--->THE ELEMENTS OF THE ARRAY ARE : "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i];
        cout<<endl;
    }
}

int main(){
 int arr[100],size;
 cout<<"Enter the size of the array: ";
 cin>>size;
 cout<<"Enter the elements of the array: "<<endl;
 for(int i=0;i<size;i++){
    cin>>arr[i];


 }

 PrintArray(arr,size);



    return 0;
}