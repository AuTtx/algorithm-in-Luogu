#include<iostream>
#include<string>
using namespace std;
int main(){
    string word,s;
    getline(cin,word);
    getline(cin,s);//���Խ�����һ�е��������ݶ����ַ����������Ƿ��пո�
    //cin ����tab���߿ո�Ƚ�������
    for(int i=0;i<word.length();i++){
        if(word[i]>='A' && word[i]<='Z'){
            word[i]+='a'-'A';
        }
    }

    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+='a'-'A';
        }
    }

    word=' '+ word + ' ';
    s=' ' + s + ' ';//ʵ�ֵ�����ȫƥ�������ĸ���ֺ���

    if(s.find(word)==-1){
        cout<< -1 <<endl;
    }else{
        int firstpos = s.find(word);
        int nextpos = s.find(word),cnt=0;
        while (nextpos != -1)
        {
            cnt++;
            nextpos = s.find(word, nextpos + 1);
        }
        cout<< cnt <<' '<< firstpos<< endl;
    }
    return 0;
}