#include<cstdio>
#include<cstring>
int main(){
    char src[40];
    char dest[100];
    memset(dest, ' 0', sizeof(dest));
    strcpy(src,"this is runoob.com");
    printf(" %s\n ",dest);
    strcpy(dest,src);
    printf("����Ŀ���ַ����� %s\n",dest);
    return 0;


}