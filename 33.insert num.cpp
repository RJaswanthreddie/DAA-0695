#include <stdio.h>
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the element to insert: ");
    scanf("%d",&x);
    printf("Enter the position: ");
    scanf("%d",&pos);
    n++;
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    if(pos>n)
      printf("Entered postion is not valid");
    return 0;
}
