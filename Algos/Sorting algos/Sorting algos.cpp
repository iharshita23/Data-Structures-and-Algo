#include<bits/stdc++.h>
using namespace std;
void printArray(int A[], int size){
    for(int i = 0; i < size; i++)
        cout << A[i] << " ";}
void Arrswap(int arr[],int index1, int index2){ //0-indexing
int temp;
temp=arr[index1];
arr[index1]=arr[index2];
arr[index2]=temp;
}
void Swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}





int Pindex(int arr[],int start, int finish){
int pivotindex =start;
for (int i=0;i<=(finish-start-1);i++){
    if(arr[start+i]<arr[finish]) {Swap(&arr[start+i] , &arr[pivotindex] ); pivotindex++; }

} Swap(&arr[pivotindex], &arr[finish] );

return pivotindex;}
void QuickSort(int arr[],int strt, int ed){
if (ed>strt){
    int Index=Pindex(arr,strt,ed);
    QuickSort(arr,strt,Index-1);
    QuickSort(arr, Index+1, ed);

}

}
void MergeArr(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
int i = 0;int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {if (L[i] <= R[j])
        {arr[k] = L[i];i++;}
        else
        {arr[k] = R[j];
            j++;}
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;k++;
    }
}
void MergeSort(int arr[],int le , int ri){
    if(le<ri){
        int mid= le+ (ri-le)/2;
        MergeSort(arr,le, mid);
        MergeSort(arr, mid+1, ri);
        MergeArr(arr,le,mid,ri);}


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
            if (arr[j]>arr[j+1]){Arrswap(arr,j,j+1);}
            else break;
        }

}


    }
int main(){
int arr[]={12,11,13,5,6};
int sz= sizeof(arr)/sizeof(arr[0]);
QuickSort(arr,0,sz-1);
cout<<"Sorted array by SelectionS algo"<<endl;
printArray(arr,sz);


return 0;}
