#include<iostream>

using namespace std;


void PrintArray(int arr[],int size){
    cout<<"----->THE ELEMENTS OF THE ARRAY ARE : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
        cout<<" ";
    }
}

int main(){
int arr[50],size,pos;
cout<<"Enter the size of the array: "<<endl;
cin>>size;
cout<<endl;
cout<<"enter the elements of the array: "<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
    cout<<" ";
}

for(int i=0;i<size-1;i++){
    arr[i]=arr[i+1];
}
size--;
PrintArray(arr,size);
    return 0;
}