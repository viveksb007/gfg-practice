#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long ll;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        ll n,temp;
        cin>>n;
        temp = n;
        vector<int> digits;
        while(n){
            digits.push_back(n%10);
            n /= 10;
        }
        reverse(digits.begin(),digits.begin()+digits.size());
        int i,index = -1;
        for(i=digits.size()-1;i>0;i--){
            if(digits[i-1] > digits[i]){
                index = i-1;
                digits[i-1]--;
            }
        }
        if(index  == -1){
            cout<<temp<<endl;
        }else{
            for(i = index+1;i<digits.size();i++){
                digits[i] = 9;
            }
            ll sum = 0;
            for(i=0;i<digits.size();i++){
                sum += (digits[i]*pow(10,digits.size()-1-i));
            }
            cout<<sum<<endl;
        }
    }
	return 0;
}
