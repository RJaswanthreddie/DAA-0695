#include <stdio.h>

int main() {
  int n, l, w, h, c;

  printf("Enter the number of containers: ");
  scanf("%d", &n);

  printf("Enter the length, width, and height of the container: ");
  scanf("%d %d %d", &l, &w, &h);

  printf("Enter the capacity of each container: ");
  scanf("%d", &c);

  int total_volume = l * w * h;
  int max_containers = total_volume / c;

  printf("The maximum number of containers that can be loaded is: %d\n", max_containers);

  return 0;
}
