#include<stdio.h>


int sum(int k) {
  if (k > 0) {
    return k * sum(k - 1);
  } else {
    return 1;
  }
}
int main() {
  int result = sum(5);
  printf("%d", result);
  return 0;
}




