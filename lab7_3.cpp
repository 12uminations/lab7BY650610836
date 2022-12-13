#include<iostream>

using namespace std;
int adiff(int a,int b){
    int d,c;
    c = a-b;
    if(c>=0){
      d=c;
    }
    else{
      d=-c;
    }
    if(d%360==0){
      return 0;
    }
    else if(a<90 and b>180){
      return 360-d;
    }
    else if(d>360){
        return d%360;
    }
    else{
      return d;
    }

}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
