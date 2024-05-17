#include<bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};
Point cong(Point &a){
    Point b;
    b.x=a.x*2;
    b.y=a.y*2;
    return b;
}
void print(Point p) {
    cout << p.x << " " << p.y;
}
int main()
{
   Point point;
   point.x = 24;
   point.y = 5;
   Point p =cong(point);
    print(p);
}
