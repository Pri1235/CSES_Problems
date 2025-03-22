#include <stdio.h>

// Input - n +ve integer
// Task - n even divide by 2, n odd * 3 + 1; stop when n == 1
// Output - all values during the above task

int main() {
    long long int n;
    
   
    if (scanf("%lld", &n) != 1) {
       
        return 1; 
    }
    
    printf("%lld ", n);
    
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (n * 3) + 1;
        }
        printf("%lld ", n);
    }
    
    return 0;
}
