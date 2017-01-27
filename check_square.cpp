//  Check if given four points form a square

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int ax,ay,bx,by,cx,cy,dx,dy,i;
         cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
         double ab = sqrt(pow(bx-ax,2)+pow(by-ay,2));
         double ac = sqrt(pow(cx-ax,2)+pow(cy-ay,2));
         double ad = sqrt(pow(dx-ax,2)+pow(dy-ay,2));
         double db = sqrt(pow(bx-dx,2)+pow(by-dy,2));
         double dc = sqrt(pow(dx-cx,2)+pow(dy-cy,2));
         double bc = sqrt(pow(bx-cx,2)+pow(by-cy,2));
         vector<double> sides;
         sides.push_back(ab);
         sides.push_back(ac);
         sides.push_back(ad);
         sides.push_back(db);
         sides.push_back(dc);
         sides.push_back(bc);
         sort(sides.begin(),sides.begin()+6);
         if((sides[0]==sides[1])&&(sides[0]==sides[2])&&(sides[0]==sides[3]))
         {
             if(sides[4]==sides[5])
             cout<<"1\n";
             else
             cout<<"0\n";
         }else
         cout<<"0\n";
     }
	return 0;
}
