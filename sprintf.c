/* sprintf
文字列連結

書式
sprintf(代入する文字列名, “出力文字列書式”, 変数1, 変数2, ・・・・)

第一引数：結合した文字列の格納変数
第二引数：結合書式（%sや%d、¥nを指定する。printfと同様の使い方）
第三引数以降（可変長文字列）：結合したい値の入った変数
*/

//サンプル
#include <stdio.h>
 
int main(void) {
    char *str1 = "Hello";
    char *str2 = "World!";
 
    char str3[30];
 
    sprintf(str3, "%s %s\n", str1, str2);
    printf("%s", str3);
 
    return 0;
}