#include<iostream>
using namespace std;
int main(){
    int a[] = {4,1,9,5,1,7,5,8};
    for(int i=0; i < 7; i++){
        for(int j=0; j < 7-i; j++){
            if(a[j] > a[j+1]){
                int p = a[j];
                a[j] = a[j+1];
                a[j+1] = p;
            }
        }
    }

    for(int i=0;i < sizeof(a)/sizeof(int); i++)//sizeof(������������[]��)��ʾһ��������Ĵ�С
    //sizeof(&������)��ʾ�����һ��Ԫ�صĴ�С
    cout << a[i] << " ";
    return 0;
}//ð������ÿ����һ��ѭ������ȷ��һ���ϴ�ֵ������ĩβ