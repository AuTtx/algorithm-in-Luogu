#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a[105];
    cin >> n;
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int cnt = unique(a, a + n) - a;//unique()ȥ��֮��õ���������һ��Ԫ�صĵ�ַ
    /*����ָ�������Ϊ����ָ��֮����������ָ�����͵���Ŀ��
    �磺int *p,*q;
    p-q=(p��ַ-q��ַ)/sizeof(int)*/
    printf("%d\n",cnt);
    for(int i=0; i < cnt; i++){
        printf("%d ",a[i]);
    }
    return 0;

}//����ȥ��STL