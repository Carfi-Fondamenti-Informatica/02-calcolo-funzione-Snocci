#include <iostream>
using namespace std;

int main() {
   float x, y, z, a, b;
    cin>> a >> b >> x >> y;
if(x<0 and y>0) {
    z=a*x-b*y;
}
else if(x>=0 and y<=0) {
    z=a*x*x-b*y;
}
else {
    z=a*x-b*(y*y);
}
    cout<< z<< endl;
   return 0;
}
