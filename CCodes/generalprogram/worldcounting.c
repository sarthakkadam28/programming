#include<stdio.h>
#define In 1
#define Out 0
int main(){
    int nl, nw, nc, state, c;
    state = Out;
    nl = nw = nc = 0;
    while ((c=getchar())!=EOF)
    {
    ++nc;
    if (c=='\n'){
    ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state=Out;
    }
      else if (state == Out)
      {
        state=In;
        ++nw;
      }
      printf("%d,%d,%d\n",nl,nw,nc);
    
    }
    
}