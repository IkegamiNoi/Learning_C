/* strcmp.c
文字列の比較

書式
#include <string.h>
int strcmp(const char *s1, const char *s2);

第一引数：比較文字列１
第二引数：比較文字列２

戻り値
s1 > s2 で正の値、s1 < s2 で負の値、s1 = s2で 0 を返す。この大小関係は一般に文字コード順による。
*/

//サンプル
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "ABC";
    char str1[] = "ABC";
    char str2[] = "ABD";
    char str3[] = "B";
    char str4[] = "AAAA";

    printf("strcmp(%s, %s) = %d\n", str, str1, strcmp(str, str1));
    printf("strcmp(%s, %s) = %d\n", str, str2, strcmp(str, str2));
    printf("strcmp(%s, %s) = %d\n", str, str3, strcmp(str, str3));
    printf("strcmp(%s, %s) = %d\n", str, str4, strcmp(str, str4));

    return 0;
}