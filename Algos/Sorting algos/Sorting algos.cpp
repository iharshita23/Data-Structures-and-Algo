#include<bits/stdc++.h>
using namespace std;

void Arrswap(int arr[],int index1, int index2){ //0-indexing
int temp;
temp=arr[index1];
arr[index1]=arr[index2];
arr[index2]=temp;
}
void SelectionSort(int arr[],int sze){
int minindex;
for(int i=0;i<sze;i++){
    minindex=i;
    for(int j=i+1;j<sze;j++){if (arr[j]<arr [minindex]) {minindex=j;} }
    Arrswap(arr, minindex, i);
}
}

int main(){
int arr[]={88,77,66,55,44,33,22,11,2};
int sz= sizeof(arr)/sizeof(arr[0]);
SelectionSort(arr,sz);
cout<<"Sorted array by SelectionS algo"<<endl;

for(auto x: arr){
    cout<<x<<"  ";
}cout<< endl;



return 0;}
