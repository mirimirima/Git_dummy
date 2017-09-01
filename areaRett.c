#include <stdio.h>


void main(){
  
  int base,altezza,area;
  
  printf("Inserire: base altezza\n");
  
  scanf("%d %d",&base,&altezza); 
  
  area = base * altezza;

  return area;
}

void main(){
  
  int base,altezza,area;
  
  base = 4;
  altezza = 3;
  area = base * altezza;
  
  printf("L'area del rettangolo di ");
  printf("base=%d e altezza=%d e': %d\n",base,altezza,area);

  
}
