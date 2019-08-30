#include <stdio.h>
// A linear search algorithm to find and return index of searched elements
int recursiveLinearSearch(int array[], int arraySize, int value, int index){
  if(index<arraySize){
    if(array[index] == value){
      return index;
    }
    else{
      return recursiveLinearSearch(array, arraySize, value, index+1);
    }
  }
  else{
    return -1;
  }
}
int main (void){
  int array[] = {13,22,17,5,15,30,98,16,43,33,90};
  //input array
  int value = 16; //value to be searched
  int arraySize = sizeof(array)/sizeof(array[0]);
  int result = recursiveLinearSearch(array, arraySize, value, 0);
  //calling faunciton to apply linear search
  (result == -1)? printf("Element is not present in array")
                : printf("Element is present at index %d\n", result);
  return 0;
}
