#include <stdio.h>


void main(){
  
  int base,altezza,area;
  
  printf("Inserire: base altezza\n");
  
  scanf("%d %d",&base,&altezza); 
  
  area = base * altezza;
  area = area *0.5;

  return area;
}
