#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main(){
    const int AtoZ=26;
    int NumberAtoZ[AtoZ]={0};
    int r=0;

    char sentence[10000];
    cout<<"영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n 텍스트의 끝은 ; 입니다. 10000개 까지 가능합니다.";
cin.getline(sentence,10000,';');
for(int i=0;i<strlen(sentence);++i){
    bool curChar=isalpha(sentence[i]);
    if (curChar){
        char curAlpha =tolower(sentence[i]);
        int a=curAlpha-'a';
        NumberAtoZ[a]++;
        r++;
        
    }

}
cout<<"알파벳 갯수"<<r<<"\n";
for(int i=0;i<26;i++){
    char nowAlpha='a'+i;
    cout<<nowAlpha<<"("<<NumberAtoZ[i]<<")    :";
    for(int j=0;j<NumberAtoZ[i];j++) cout<<"*";
    cout<<"\n";
}
}
