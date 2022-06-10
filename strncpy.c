/* strncpy
文字列をn文字コピー

書式
char *strncpy(char *s1, const char *s2, size_t n);

第一引数：複写先の文字列型配列
第二引数：複写する文字列
第三引数：複写文字数

戻り値
第一引数を返す。
*/

//注意事項
/*
注意してほしいのはコピー後の文字列の最後のヌル文字(\0)です。
s2の長さがn以上の時はn文字をコピー後に '\0' は自動的に付加されません。
s2の長さがnより少ない場合はその少ない文字数分を '\0' で埋めてくれます。
オーバーラップした オブジェクト間でコピーが行われた場合には、動作は未定義です。
*/

//サンプル
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "ABCDEFGHI";
    char str2[] = "12345";

    strncpy(str1, str2, 3);  /* ①s2の長さがn以上のとき */
    printf("str1:%s\n", str1); //123DEFGHI
    strncpy(str1, str2, 8);  /* ②s2の長さがnより少ない場合 */
    printf("str1:%s\n", str1); //12345

    return 0;
}