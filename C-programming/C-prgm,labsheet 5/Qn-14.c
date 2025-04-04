#include <stdio.h>
#include <stdlib.h>
void Max(int *arr, int size, int *max, int *min) {
  *max = *min = arr[0];

  for (int i = 1; i < size; i++) {
  if (arr[i] > *max) {
  *max = arr[i]; 
  }
  if (arr[i] < *min) {
  *min = arr[i]; 
  }
  }
}
int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int *arr = (int *)malloc(size * sizeof(int));
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
  scanf("%d", &arr[i]);
  }
  int max, min;
  Max(arr, size, &max, &min);
  printf("Maximum value: %d\n", max);
  printf("Minimum value: %d\n", min);
  free(arr);
  return 0;
}