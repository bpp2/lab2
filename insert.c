
#include <stdio.h>

void insertionSortfunc(int valarray[], int allelements){
    int i, presentvalueloc, temp;
    for (i=1; i<allelements; i++) {
        presentvalueloc = valarray[i];
        temp = i - 1;
        while (temp >= 0 && valarray[temp] > presentvalueloc) {
            valarray[temp + 1] = valarray[temp];
            temp = temp - 1;
        }
        valarray[temp+1] = presentvalueloc;
    }
}



int main() {
  int allelements;

  printf(" The number of elements in the array:");
  scanf("%d", &allelements);
  
  int valarray[allelements];
  int v;
  printf("Enter %d integers: \n", allelements);
  for(v = 0; v<allelements; v++) {
    scanf("%d", &valarray[v]);
  }

  insertionSortfunc(valarray, allelements);
  int z;
  printf("sorted list: \n");
  for(z = 0; z<allelements; z++) {
    printf("%d \n", valarray[z]);
  }
  return 0;
}