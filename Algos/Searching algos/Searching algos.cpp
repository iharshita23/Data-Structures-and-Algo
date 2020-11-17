#include<bits/stdc++.h>
using namespace std;
LinearS(int arr[],int key,int Size){
for (int i=0;i<Size;i++){
    if (arr[i]==key){return i;}}
    return -1;}
BinaryS(int arr[],int key,int low, int high){
int mid= low +(high-low)/2;
if (high>=1){
if (arr[mid]==key)
    return mid;
if (arr[mid]>key)
    return BinaryS(arr,key,low,(mid-1));
if (arr[mid]<key)
    return BinaryS(arr,key,(mid+1),high);
}
else
    return -1;


}












int main(){
int arr[]={1,2,4,8,16,32,64,128,256,512,1024};
// key to find is 128
int Sarr= sizeof(arr)/sizeof(arr[0]);
cout<<"By LS Key found at index  "<<LinearS(arr,128,Sarr)<<endl;
cout<<"By BS Key found at index  "<<BinaryS(arr,1024,0,Sarr-1)<<endl;



return 0;}
