//A
//B
//C
//D
//E
//F
//G
//H
//I
//J
//K
//L
//M

/* memcpy
指定バイト数分のメモリをコピーする関数

書式
#include <string.h>
void* memcpy(void *buf1, const void *buf2, size_t n);

第一引数：コピー先のメモリブロックのポインタ
第二引数：コピー元のメモリブロックのポインタ
第三引数：コピーサイズ
*/

//N
//O
//P
//Q
//R
//S

/* sprintf
文字列連結

書式
sprintf(代入する文字列名, “出力文字列書式”, 変数1, 変数2, ・・・・)

第一引数：結合した文字列の格納変数
第二引数：結合書式（%sや%d、¥nを指定する。printfと同様の使い方）
第三引数以降（可変長文字列）：結合したい値の入った変数
*/

/* strcmp.c
文字列の比較

書式
#include <string.h>
int strcmp(const char *s1, const char *s2);

第一引数：比較文字列１
第二引数：比較文字列２

戻り値
s1 > s2 で正の値、s1 < s2 で負の値、s1 = s2で 0 を返す。
この大小関係は一般に文字コード順による。
*/

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

//T
//U
//V
//W
//X
//Y
//Z
