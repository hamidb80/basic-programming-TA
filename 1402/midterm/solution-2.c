#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CH 100
#define MAX 10

void bubble(
    char esmHa[MAX][MAX_CH],
    float moadelHa[MAX],
    int senHa[MAX],
    int shomareTermHa[MAX],
    int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (moadelHa[i] < moadelHa[j])
      {
        float ti = moadelHa[i];
        moadelHa[i] = moadelHa[j];
        moadelHa[j] = ti;

        int sh = shomareTermHa[i];
        shomareTermHa[i] = shomareTermHa[j];
        shomareTermHa[j] = sh;

        int sn = senHa[i];
        senHa[i] = senHa[j];
        senHa[j] = sn;

        char es[MAX_CH];
        strcpy(es, esmHa[i]);
        strcpy(esmHa[i], esmHa[j]);
        strcpy(esmHa[j], es);
      }
    }
  }
}

int searchName(char esm[MAX_CH], char esmHa[MAX][MAX_CH], int n)
{
  for (int i = 0; i < n; i++)
    if (strcmp(esm, esmHa[i]) == 0)
      return i;

  return -1;
}

int main()
{
  char esmHa[MAX][MAX_CH];
  float moadelHa[MAX];
  int senHa[MAX];
  int shomareTermHa[MAX];

  int n;

  printf("n: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    fflush(stdin);
    printf("~~~~~ %d ~~~~~~\n", i + 1);

    printf("esm: ");
    gets(esmHa[i]);

    printf("moadel: ");
    scanf("%f", &moadelHa[i]);

    printf("sen: ");
    scanf("%d", &senHa[i]);

    printf("shomare Term: ");
    scanf("%d", &shomareTermHa[i]);
  }

  bubble(
      esmHa,
      moadelHa,
      senHa,
      shomareTermHa, n);

  for (int i = 0; i < n; i++)
  {
    printf("#%d esm '%s', moadel %f, sen %d, shomare Term: %d\n",
           i + 1,
           esmHa[i],
           moadelHa[i],
           senHa[i],
           shomareTermHa[i]);
  }

  printf("\nesm ra vared konid: ");
  fflush(stdin);
  char esm[MAX_CH];
  gets(esm);

  int index = searchName(esm, esmHa, n);

  if (index == -1)
    printf("daneshjoo vojud nadarad");
  else
    printf("#%d '%s'", index + 1, esm);
}