#include <stdio.h>

int main(void) {
    int i;
    int result;

    scanf("%d",&i);         // キーボードからiに入力
    result = i +100;                 // iに100を加えて、resultで受ける
    printf("%d\n", result);   //resultを表示
    return 0;
}
