#include<iostream>
#include<cstdio>
#include<cstring>
char w[110];
int ans[26]={0};//��0��ʼ���α�ʾ��ĸa����
int main(){
    int maxn=0,minn=10000,l,delta;
    scanf("%s",w);
    l=strlen(w);/*���������sizeof���ȼ��������ֽڣ���
    ����Ҫ��ָ�룬����������ָ��ĵ�һ��Ԫ
    ��,��������Ҳ��ָ�룬ָ���һ��Ԫ�ص�λ�ã�������strlen���������ƣ�*/
    for(int i=0;i<l;i++){
        ans[w[i]-'a']++;//ͳ����ĸ��ӦASCII��ĸ���
    }

    for(int i=0;i<26;i++){
        if(ans[i]>maxn) maxn=ans[i];
        if(ans[i]!=0 && ans[i]<minn) minn=ans[i];//ע��26����ĸ�п�������ĸ��0����Ҫ�ų�
    }

    delta=maxn-minn;
    //��������������������������������
    if(delta==0||delta==1){
        printf("No Answer\n0\n");
        return 0;
    }
    for(int h=2;h*h<delta;h++){
        if(delta % h == 0){
            printf("No Answer\n0\n");
            return 0;
        }
    }
    printf("Lucky Word\n&d\n",delta);
    return 0;
}