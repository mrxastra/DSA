#include<stdio.h>
int sort(int arr[],int n){
  int temp;
  for(int j = 0; j < n; j++){
    for(int i = 0; i < (n-j-1); i++){
       if(arr[i] > arr[i+1]){
          temp = arr[i];
          arr[i] = arr[i+1];
         arr[i+1] = temp;    
     }
    }
  }
}

int print(int arr[], int n){
  for (int i = 0; i <= n-1; i++){
    printf("%d \t",arr[i]);
  }
  printf("\n");
}
// {Largest Element Code}
// int main(){
//   int arr[10] = {4,2,6,8,43,1,3};
//   int n = 7;
//   int larg = arr[0];
//   for(int i = 0;i<= n-1; i++){
//     if(arr[i] > larg){

//       larg = arr[i];

//     }
//   }
//   printf("%d",larg);

//   return 0;
// }

// 

int secondlargest(int arr[], int n){
  int largest = arr[0];
  int slargest = -1;
  for (int i = 1; i<n;i++){
    if(arr[i] > largest){
      slargest = largest;
      largest = arr[i];
    }
    else if (arr[i] < largest && arr[i] > slargest){
      slargest = arr[i];
    }
  }
  return slargest;
}

int secondSmallest(int arr[],int n){
  int smallest = arr[0];
  int ssmallest = arr[n];

  for(int i = 0; i<n; i++){
    if(arr[i] < smallest){
      ssmallest = smallest;
      smallest = arr[i];

    }
    else if(arr[i] < ssmallest && arr[i] > smallest){
      ssmallest = arr[i];
    }
  }
  return ssmallest;
}

// Check if array is sorted or not

int checkSort(int arr[],int n){
  for(int i=0; i<n; i++){
    if(arr[i] <= arr[i+1]){
    }
    else{
      printf("array is not sorted\n");
    }
  }
  printf("array is sorted");
} 

int removeDuplicates(int arr[],int n){
  int i = 0;
  for(int j=1 ; j<n ; j++){
    if(arr[i] != arr[j]){
      arr[i+1] = arr[j];
      i++;
    }
  }
  return i+1;
}



int main(){
  int arr[10] = {1,2,3,4,5,6,7,8};
  int n = 7;
  // sort(arr,n);
  // print(arr,n);

  // printf("second largest array : ");
  // printf("%d",arr[n-2]);

  // printf("%d",secondSmallest(arr,n));

  //checkSort(arr,n);

  printf("%d",removeDuplicates(arr,n));
  
  return 0;
  
}