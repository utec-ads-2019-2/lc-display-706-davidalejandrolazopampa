//
// Created by David Lazo on 29/10/2019.
//
#include<stdio.h>
int num;
char tim[20];
char forma[5][6] = {{"    "},{"   |"},{"|   "},{"|  |"},{" -- "},};
char numeralforma[10][5] = {{4,3,0,3,4},{0,1,0,1,0},{4,1,4,2,4},{4,1,4,1,4},{0,3,4,1,0},{4,2,4,1,4},{4,2,4,3,4},{4,1,0,1,0},{4,3,4,3,4},{4,3,4,1,4}};
void Mostrar(char tim[], int num) {
    int tam;
    for(int i = 0; i < 5; i++) {
        if(i == 0 || i == 2 || i == 4) {
            tam = 1;
        }
        else
            {tam = num;}
        while(tam--) {
            for(int j = 0; tim[j]; j++) {
                if(tim[j] == ' ') {
                    putchar(' ');continue;
                }
                putchar(forma[numeralforma[tim[j] - '0'][i]][0]);
                for(int k = 0; k < num; k++){
                    putchar(forma[numeralforma[tim[j] - '0'][i]][1]);
                }
                putchar(forma[numeralforma[tim[j] - '0'][i]][3]);
                if(tim[j+1] != '\0'){
                    putchar(' ');
                }
            }
            puts("");
        }
    }
}
int main() {

    while(scanf("%d %s", &num, tim) == 2) {
        if(num == 0){break;}
        Mostrar(tim, num);
        puts("");
    }
    return 0;
}