// String modification such that no 2 character are same,provided such permutation is possible

#include <iostream>
#include<string>
using namespace std;

int max(int freq[],int neglect){
    int m = 0,i,pos;
    for(i=0;i<26;i++){
        if(i == neglect) continue;
        if(freq[i]>m){
        m = freq[i];
        freq[i]--;
        pos = i;
        }
    }
    return pos;
}
string rearrangeString(string str)
{
    int freq[26],i;
    for(i=0;i<26;i++){
        freq[i] = 0;
    }
    for(i=0;i<str.length();i++){
        freq[str[i]-'a']++;
    }
    string temp = "";
    int prev,curr;
    for(i=0;i<str.length();i++){
        if(i==0){
            curr = max(freq,-1);
            prev = curr;
            temp += (curr + 'a');
        }else{
            curr = max(freq,prev);
            prev = curr;
            temp += (curr+'a');
        }
    }
    return temp;
    
}

int main() {
	string s = "abaaabbc";
	cout<<rearrangeString(s);
	return 0;
}

