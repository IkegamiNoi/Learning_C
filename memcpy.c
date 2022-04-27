/*
指定バイト数分のメモリをコピーする関数
memcpy

第一引数にコピー先のメモリブロックのポインタ
第二引数にコピー元のメモリブロックのポインタ
第三引数はコピーサイズ
*/

//サンプル
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char buf[] = "ABCDDEFG";
    char buf2[] = "123456789";

    //3バイトだけコピー
    memcpy(buf,buf2,3);

    //表示
    printf("コピー後のbuf文字列→%s\n",buf);
    return 0;
}
