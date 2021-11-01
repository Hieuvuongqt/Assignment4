#include <stdio.h>
int main() {
  int n, sum = 0;
  printf("\nEnter n: ");
  scanf("%d", &n);
  for(int i = 1; i < n; i +=2){
    sum = sum + i;
  }
  printf("\nSum of odd numbers %d is: %d", n, sum);
}
