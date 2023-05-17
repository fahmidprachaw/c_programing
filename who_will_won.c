#include <stdio.h>

int main() {
  int n, a, b, counatA=0, countb=0;
  scanf("%d", &n);

  while (n--)
  {
    scanf("%d%d", &a, &b);
    if(a>b){
      counatA++;
    }
    else if(a<b){
      countb++;
    }
    else if(a == b){
      counatA--;
      countb--;
    }
  }
  if(counatA > countb){
    printf("Tiger\n");
  }
  else if(countb > counatA){
    printf("Pathan\n");
  }
  else if(counatA == countb){
    printf("Draw\n");
  }
  
  return 0;
}
