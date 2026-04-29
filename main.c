#include <stdio.h>
int main() {
    int card;
    int temp;
    int temp1;
    int numeroB=0;
    printf("inserisci il numero di cardinalità: ");
    scanf("%d",&card);
    int array[card];
    array[0]=1;
    for (int i=1;i<card;i++) {
        array[i]=0;
    }
    for (int i=1;i<card;i++) {
        temp=array[i-1];
        for (int k=1;k<card;k++) {
            temp1=temp;
            temp=array[k];
            array[k]=temp*(k+1)+temp1;
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