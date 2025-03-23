#include<stdio.h>
#include<stdlib.h>

// input - n len of numbers
//         n - 1 numbers
// output - print the missing number

int main() {
  long long int n;
  scanf("%lld", &n);

  long long int sum = 0, val;
  long long int totalSum = (n * (n + 1)) / 2;  

  for (int i = 0; i < n - 1; i++) {
      scanf("%lld", &val);
      sum += val;
  }

  printf("%d\n", totalSum - sum);
  return 0;
}