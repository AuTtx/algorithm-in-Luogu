#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    char a[55];
    scanf("%d %s",&n,a);
    for(int i=0;a[i];i++){
        putchar((a[i]-'a'+n)%26+'a');/*putchar�����������һ��
        �ַ������������ֱ�ʾ�ַ���ASCII��
        */
    }
    return 0;
}