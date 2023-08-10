/* programa prog09.ccp*/
/* Inversa de una matriz */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main() {
    int n,i, j, k;
    float A[50][100], p1,p2;
    printf("..Matriz de n*n...");
    printf("\nIngrese <n>: ");
    scanf("%d", &n);
    // Leer la matriz de entrada y llenar la matriz identidad
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);	
            if (i == j) A[i][n+j] = 1;
            else A[i][n+j] = 0;
        }
    }
    
    printf("\nMatriz aumentada:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n*2; j++) {
            printf("\t%.2f", A[i][j]);
        }
        printf("\n");
    }
    
    for (i = 1; i <= n; i++) {
        if(A[i][i]==0){
            p1=0;
            for (j = i+1; j <= n; j++) {
                if(A[j][i]!=0) {
                    for (k = 1; k <= n*2; k++) {
                        p2=A[i][k];
                        A[i][k] = A[j][k];
                        A[j][k] = p2;		
                    }
                    p1=1;
                    break;
                }
            }
            if(p1==0) {
                printf("\n No existe inversa..");
                getch();
                exit(0);
            }  	
        }
        
        p1=A[i][i];
        for(j = 1; j <= n*2; j++) {
            A[i][j] =  A[i][j]/p1;
        }
        for(k= 1; k <= n; k++) {
            if(i!=k) {
                p1=A[k][i];
                for(j= 1; j <= n*2; j++) {
                    A[k][j]=A[i][j]*(-p1)+A[k][j];
                }
            }
        }
    }
    
    printf("\nLa matriz inversa es:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("\t%.2f", A[i][n+j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}


