#include<stdio.h>
int main() {
  int arr[50], a, i,*p;
  printf("Enter the number of elements : ");
  scanf("%d", &a);
  printf("Enter elements:\n");
  for (i = 0; i < a; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Your entered elements :\n");
  for (p = arr; p < arr + a; p++) {
    printf("%d is your entered value\n",*p);
  }
  return 0;
}