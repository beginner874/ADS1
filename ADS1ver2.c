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
        printf("%d ",array[i-1]);
    }
    printf("\n");
    for (int i=1;i<card;i++) {
        for (int k=card;k<0;k--) {
            array[k]=array[k]*(k)+array[k-1];
        }
        for (int j=0;j<card;j++) {
                printf("%d ",array[j]);
            }
            printf("\n");
    }
    for (int i=0;i<card;i++) {
            numeroB=numeroB+array[i];
    }
    printf("\n");
    printf("il numero di partizioni possibile sono: %d\n",numeroB);
    return 0;
}