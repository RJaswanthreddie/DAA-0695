#include <stdio.h>
#define MAX_SIZE 10
void subset_sum(int *arr, int n, int sum, int subset[]) {
  if (sum == 0) {
    for (int i = 0; i < n; i++) {
      if (subset[i] == 1) {
        printf("%d ", arr[i]);
      }
    }
    printf("\n");
    return;
  }
  for (int i = 0; i < n; i++) {
    if (sum - arr[i] >= 0) {
      subset[i] = 1;
      subset_sum(arr, n, sum - arr[i], subset);
      subset[i] = 0;
    }
  }
}
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int sum = 9;
  int subset[MAX_SIZE] = {0};
  subset_sum(arr, n, sum, subset);
  return 0;
}

