card=0
numeroB=0
n=int(input("inserisci il numero massimo di elementi dell'insieme: "))
insieme=[]
for i in range(n):
    elem=input(f"inserisci elemento (solo singolo carattere alfanumerico) {i + 1}: ")[0]
    gia_presente=elem in insieme
    if not gia_presente:
        insieme.append(elem)
        card+=1
    else:
        print("l'elemento è già presente nell'insieme")
array=[0]*card
if card>0:
    array[0]=1
for i in range(1,card+1):
    print(array[i-1],end=" ")
print()
for i in range(card,1,-1):
    for k in range(card,1,-1):
        array[k-1]=array[k-1]*k+array[k-2]
    for j in range(card):
        print(array[j],end=" ")
    print()
for i in range(card):
    numeroB+=array[i]
print()
print(f"il numero di partizioni possibile sono: {numeroB}")