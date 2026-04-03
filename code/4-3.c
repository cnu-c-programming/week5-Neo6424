#include <stdio.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    int size =5;
    int index;

    scanf("%d", &index);

    if(0<index<5){
      printf("%d", arr[index]);
    }else{
      printf("Error!");
    }

    return 0;
}
