#include <stdio.h>
#include <areaRett.c>
#include <areaTri.c>


void main(){
  
  int area;

  int forma;

  printf("Di che forma vuoi l'area?\n");
  printf("[1:rettangolo, 2:triangolo, 3:nexttodo]\n");

  scanf("%i",&forma);

  if(forma==1)area=areaRett();
  if(forma==2)area=areaTri();
  
  return area;
}
