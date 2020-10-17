/* Here are some Sorting algos  */
/*Tc of Selection sort is  */
#include<bits/stdc++.h>
using namespace std;

void Arrswap(int arr[],int index1, int index2){ //0-indexing
int temp;
temp=arr[index1];
arr[index1]=arr[index2];
arr[index2]=temp;
}
void SelectionSort(int arr[],int sze){ /*Tc of Selection sort is O(n^2) */
int minindex;
for(int i=0;i<sze;i++){
    minindex=i;
    for(int j=i+1;j<sze;j++){if (arr[j]<arr [minindex]) {minindex=j;} }
    Arrswap(arr, minindex, i);
}
}
void BubbleSort(int arr[], int sze){bool swapped;
    for(int i=0;i<sze-1;i++){swapped=false;
        for(int j=0;j<sze-i-1;j++){
            if (arr[j]>arr[j+1]){Arrswap(arr,j , j+1); swapped =true;}        }
    if (swapped=false)
        break;}

}
void InsertionSort(int arr[],int sze){
int key;
for(int i=1;i<sze;i++){
    key=arr[i];
        for (int j=i-1;j>=0&&j<sze;j--){
            if (arr[j]>arr[j+1]){Arrswap(arr,j,j+1);s}
            else break;
        }

}


    }


int main(){
int arr[]={88,77,66,55,44,33,22,11,2};
int sz= sizeof(arr)/sizeof(arr[0]);
InsertionSort(arr,sz);
cout<<"Sorted array by SelectionS algo"<<endl;

for(auto x: arr){
    cout<<x<<"  ";
}cout<< endl;



return 0;}
