#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{

   int T[5], n, i, p, pos;
   bool exist;
   do{
   printf("Donner la taille de vecteur n");
   scanf("%d", n);
   }while(n>0 && n<5);

   for(i=0; i<n; i++){
   printf("Donner T[%d]", i+1);
   scanf("%d", &T[i]);
   }

    printf("give the element you wanna serch for ");
    scanf("%d", &p);

    i=0; exist = 0;
    while(i<n && exist==0){
        if(T[i] == p){
            exist = 1;
            pos = i;
        }else{
        i++;
        }
    }

    if(exist == 1){
        printf("L'element exsiste, et sa position est %d", pos);
    }else{
    printf("-1");}



    return 0;
}
