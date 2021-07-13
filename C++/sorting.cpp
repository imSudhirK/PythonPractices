#include<bits/stdc++.h>
using namespace std;

void swap(int *n1, int *n2){
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}

void printArray(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void selectionSort(int arr[], int n){
  int min_indx;
  for(int i=0; i<n-1; i++){
    min_indx = i;
    for(int j=i+1; j<n; j++){
      if(arr[j]<arr[min_indx]){
        min_indx = j;
      }
    }
    if(min_indx != i){
      swap(&arr[i], &arr[min_indx]);
    }
  }
}

void bubbleSort(int arr[], int n){
  int marker = n-1;
  while(marker>0){
    for(int i=0; i < marker; i++){
      if(arr[i] > arr[i+1]){
        swap(&arr[i], &arr[i+1]);
      }
    }
    marker -=1;
  }
}

void insertionSort(int arr[], int n){
  for(int marker=0; marker<n-1; marker++){
    for(int j = marker+1; j>0; j--){
      if(arr[j] < arr[j-1]){
        swap(&arr[j], &arr[j-1]);
      }
      else break;
    }
  }
}

void merge(int arr[], int l, int m, int r){
  auto const lA_n = m-l+1;
  auto const rA_n = r-m;

  auto *temp_lA = new int [lA_n];
  auto *temp_rA = new int [rA_n];

  for(auto i=0; i<lA_n; i++){
    temp_lA[i] = arr[l+i];
  }
  for(auto i=0; i<rA_n; i++){
    temp_rA[i] = arr[m+1+i];
  }

  auto temp_li = 0, temp_ri = 0;
  auto a_indx= l;

  while(temp_li < lA_n && temp_ri < rA_n){
    if(temp_rA[temp_ri] < temp_lA[temp_li]){
      arr[a_indx] = temp_rA[temp_ri];
      temp_ri +=1;
    }
    else{
      arr[a_indx] = temp_lA[temp_li];
      temp_li +=1;
    }
    a_indx +=1;
  }

  while(temp_li< lA_n){
    arr[a_indx] = temp_lA[temp_li];
    temp_li++;
    a_indx++;
  }

  while(temp_ri < rA_n){
    arr[a_indx] = temp_rA[temp_ri];
    temp_ri++;
    a_indx++;
  }
}

void mergeSort(int arr[], int const l, int const r){
  if( l == r) return;

  auto mid = (l+r)/2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid+1, r);
  merge(arr, l, mid, r);
}


int main(){
  int n;
  cin>>n;
  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  //selectionSort(arr, n);
  //printArray(arr, n);

  //bubbleSort(arr, n);
  //printArray(arr, n);

  //insertionSort(arr, n);
  //printArray(arr, n);

  mergeSort(arr, 0, n-1);
  printArray(arr, n);
}
