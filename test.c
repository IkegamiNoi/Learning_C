#include <stdio.h>
#include <string.h>

void strcmp_test();
void sprintf_test();

int main(){
    printf("test");
    //strcmp_test();
    sprintf_test();
}

void strcmp_test(){
    char a[3]= "00"; 
    if(0 == strcmp(a, "00")){
        printf("00");
    }else{
        printf("fale");
    }
}
void sprintf_test(){
    char a[25];
    sprintf(a, "%s", "2022010412729206@20011");
    printf("[%.17s]¥n[%.5s]¥n", a,a);
}
