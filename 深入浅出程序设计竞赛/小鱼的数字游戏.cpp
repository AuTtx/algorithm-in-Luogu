#include<iostream>
using namespace std;
int main(){
	int n=0,a[110],tmp;
	//�����뵽0����ѭ��������ʹ��do while���
	do{
		cin>>tmp;a[n]=tmp;n++;
	}while(tmp!=0);
	n--;
	while(n--)
		cout<<a[n]<<' ';
		return 0;
}
