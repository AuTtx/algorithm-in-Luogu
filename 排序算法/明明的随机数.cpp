// p1059 ����С�����ü�������
#include<iostream>
#include<algorithm>
#define max 1005
using namespace std;
int a[max], n, ans[max],cnt, tmp = -1;
int main(){
    cin >> n;
    for(int i=0; i<n; i++)cin >> a[i];
    sort(a, a + n);//��a[0]�� a[n-1]��������
    for(int j=0; j<n ;j++){
        if(a[j] != tmp) ans[cnt++] = a[j];
        tmp = a[j];
    }
    cout << cnt <<endl;//ע��Ϊ����a�����˶���Ԫ�ؿռ䣬sizeof(a)/sizeof(int)���Ƕ��٣��˴�Ϊ1005
    for(int i=0; i< cnt; i++) cout << ans[i] << " ";
    return 0;4
}
