#include <stdio.h>

int sum_range(int *start, int *end){
  arr[0] = arr[0]+arr[0];
  arr[1] = arr[1]+arr[1];
  arr[2] = arr[2]+arr[2];
  arr[3] = arr[3]+arr[3];
  arr[4] = arr[4]+arr[4];
}

int main() {
  int data[] = {10,20,30,40,50,60,70};

  int result = sum_range(&data[1],&data[4]);

  printf("%d\n",result);
    
  return 0;
}
