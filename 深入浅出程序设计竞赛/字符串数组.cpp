#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int d;
    cout << d << endl;
    char a[] = "whu666";
    char b[] = "hust6666";
    cout << a << endl;
    strcpy(a,b);
    cout << a << endl;
    char c[100];
    memset(c,'8',sizeof(c));
    cout << c <<endl;
    cout << strlen(c) <<endl;
    strcpy(c,"pku&thu666");
    cout << c <<endl;
    cout << strlen(c);
    strcat(a,b);
    cout << a << endl;
    char e[4] = {65,67,'a','\0'};//�ַ���char���鴢�����asc2�룬�����ֱֵ��Ϊ���֣������Ӧ�ַ���
    cout << e << endl;
    int f[5] = {2};//f[0]��ֵΪ2������Զ���ֵΪ0��
    cout << f <<endl;
    for(int i = 0; i<5;i++) cout << f[i] <<" ";
    return 0;
}