#include <stdio.h>
#include <string.h>

// 1402 // 10
// 1400 // 8

// 1402 - 1400 = 2
// 1402 - 1390 = 12
// 1402 - 1300 = 102 = 10.2
// 1390 - 1300 = 90 / 10 = 9

#define K 3
#define MAX 100

int search(char name[], char names[][MAX]){
  for (int i = 0; i < K; i++)
    if (strcmp(name, names[i]) == 0)
      return i;

  return -1;
}

int takhmin(int tedad_safahat, char goruh_seni, int sal_nashr)
{
  return (
      tedad_safahat *
      (sal_nashr - 1300) *
      goruh_seni);
}

int main()
{
  char esmaHa[K][MAX];
  int tedadSafehHa[K];
  int saleChapHa[K];
  char goruhSeniHa[K];
  int gheymatHa[K];

  for (int i = 0; i < K; i++)
  {
    printf("--- baraye ketab %d ---\n", i + 1);
    printf("esme ketab: ");
    gets(esmaHa[i]);

    printf("tedad safahat: ");
    scanf("%d", &tedadSafehHa[i]);
    getchar();

    printf("sale chap: ");
    scanf("%d", &saleChapHa[i]);
    getchar();

    printf("goruh seni: ");
    scanf("%c", &goruhSeniHa[i]);
    getchar();
  }

  for (int i = 0; i < K; i++)
  {
    int gh = takhmin(tedadSafehHa[i], goruhSeniHa[i], saleChapHa[i]);
    gheymatHa[i] = gh;
  }

  printf("esme ketabi ke mikhai peida koni: ");
  char esmeKetab[MAX];
  gets(esmeKetab);

  int index = search(esmeKetab, esmaHa);
  if (index != -1)
  {
    printf(
        "esme '%s' tedad '%d' sal '%d' seni '%c' gheymat '%d'\n",
        esmaHa[index],
        tedadSafehHa[index],
        saleChapHa[index],
        goruhSeniHa[index],
        gheymatHa[index]);
  }
  else
  {
    printf("ketab vojood nadard.\n");
  }
}