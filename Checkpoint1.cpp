 
#include<bits/stdc++.h>
using namespace std;

string decrypt(string cipher,int shift){
    string result = "";
    for (int i=0;i<cipher.length();i++){
        char ch=cipher[i];

        if(ch>='a' && ch<='z'){
            ch=((ch-'a'-shift+26)%26)+'a';
        }

        else if(ch>='A'&&ch<='Z'){
            ch=((ch-'A'-shift+26)%26)+'A';
        }

        result+=ch;
    }

    return result;
}

int main() {
    string cipher="odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";

    cout<<"Caesar Cipher Breaker"<<endl;
    cout<<endl;
    cout << "Original Cipher: "<<cipher<<endl;
    cout<<endl;

    //Trying all possible shifts(0-25)
    cout<<"Trying all possible shifts:"<<endl;
    for(int shift = 0; shift < 26; shift++){
        string decrypted =decrypt(cipher,shift);
        cout<<"Shift "<<shift<<": "<<decrypted<<endl;
    }

    return 0;
}