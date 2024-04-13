#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int n, m, s = 0;
  bool flag = false;
  scanf("%d %d", &n, &m);
  
  for(int i = 0; i <= n; ++i){
    for(int j = 0; j <= m; ++j){     
      if(i + j >= 10)
        printf("%d\n", s);
        flag = true;
        break;
      s += i + j;
    }
    if (flag) {
        break;
    }

  }
  exit_sum: printf("%d\n", s);
  return 0;
}