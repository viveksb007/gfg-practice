//  Is Binary Number Multiple of 3  (Solved using DFA based division)

#include<iostream>
#include<string>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         string inp;
         int state = 0;
         cin>>inp;
         for(int i=0;i<inp.length();i++){
             if(state == 0){
                 if(inp[i] == '0'){
                     state = 0;
                 }else{
                     state = 1;
                 }
             }else if(state == 1){
                 if(inp[i] == '0'){
                     state = 2;
                 }else{
                     state = 0;
                 }
             }else{
              if(inp[i] == '0'){
                     state = 1;
                 }else{
                     state = 2;
                 }   
             }
         }
         if(state == 0)
         cout<<"1\n";
         else
         cout<<"0\n";
         
     }
	return 0;
}
