/* strrchr
文字列の最後から文字を検索する

書式
#include <string.h>
char *strrchr(const char *s, int c);

第一引数：検索対象文字列
第二引数：検索文字

戻り値
見つけた場所のアドレス
見つからなかった場合NULL
*/

#include <string.h>
#include <stdio.h>

int main(void)
{
    char test[20] = "123456321";
    char *p;
    p = strrchr(test,'3');
    printf("検索文字が見つかった場所から表示→%s\n",p); //321
    return 0;
}
