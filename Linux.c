#include <stdio.h>

int main(){
    int i,j,result;

    for (i = 1; i < 10; ++i) {
        for(j = 1;j < 10;j++){
            result = i * j;
            printf("%d * %d = %-4d",i,j,result); //-表示左对齐，4表示输出四位整型数字
        }
        printf("\n");
    }
}