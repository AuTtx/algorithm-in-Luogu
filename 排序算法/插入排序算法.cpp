#include<iostream>
using namespace std;
int main(){
    int a[]={3,8,4,10,6,7,2,5,9,1};
    for(int i=1; i<10 ;i++){
        int now = a[i],j;
        for(j = i-1; j>=0 ;j--){
            if(a[j] > now)
                a[j+1] = a[j];//λ�ú��Ƶȴ�����,a[i]��a[j+1]����
            else break;
        }
        a[j+1] = now; 
    }
    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }
    return 0;
}