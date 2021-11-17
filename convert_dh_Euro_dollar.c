#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
  float dh , euro, dollar;

  printf("entre votre argent en dH:\n");
  scanf("%f",&dh);

  printf("choise une option:\ndh vers euro: 1\ndh vers dollar: 2\n");
  scanf("%d", &i);

  if(i == 1)
  {
    euro = dh * 96/1000;
    printf("votre argente ets: %f" ,euro);
  }
  else if(i == 2)
  {
      dollar = dh * 11/100;
      printf("votre argente ets: %f" ,dollar);
  }
  return 0;
}
