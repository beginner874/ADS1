#include <stdio.h>
int main() {
    int card;
    int numeroB=0;
    printf("inserisci il numero di cardinalità: ");
    scanf("%d",&card);
    int array[card];
    array[0]=1;
    for (int i=1;i<=card;i++) {
        array[i]=0;
    }
    for (int i=card;i>1;i--) {
        for (int k=card;k>1;k--) {
            array[k-1]=array[k-1]*k+array[k-2];
        }
    }
    for (int i=0;i<card;i++) {
        printf("%d ",array[i]);
        numeroB=numeroB+array[i];
    }
    printf("\n");
    printf("il numero di partizioni possibile sono: %d\n",numeroB);
    return 0;
}