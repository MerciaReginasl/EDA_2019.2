*
 * =====================================================================================
 *
 *       Filename:  q2.c
 *
 *    Description:  Função splitInt
 *
 *       
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verifyListInt(const char *s){
    int i, countN = 0;
    for(i = 0; s[i]!='\0';i++){
        if((s[i]<'0' || s[i]>'9') && s[i]!=' ') return 0;
        else if((s[i]>='0' && s[i]<='9') && (s[i+1]==' ' || s[i+1]=='\0')) countN++;
    }
    return countN;
}

int* splitInt(const char *s, int *size){
    int vSize = verifyListInt(s);
    *size = vSize;
    if(!vSize) return NULL;
    int* vn = (int*)malloc(vSize*sizeof(int));
    int i, cn = 0, qn = 0;
    char num[10];
    for(i = 0; s[i]!='\0';i++){
        if(s[i]!=' '){
            num[cn] = s[i];
            cn++;
        }
        if((s[i+1]==' '||s[i+1]=='\0') && cn){
            num[cn] = '\0';
            vn[qn] = atoi(num);
            cn = 0, qn++;
        }
    }
   return vn; 
}

int main(){
    char ent[100];
    scanf("%[^\n]s", ent);
    int size;
    int *ent_int = splitInt(ent, &size);
    // Checar se a string é valida
    if(ent_int==NULL){
        printf("String inválida\n");
        return 1;
    }
    printf("Size: %d\n", size);
    int i;
    for(i = 0; i<size; i++){
        printf("%d\n", ent_int[i]);
    }
    return 0;
}
