#include<bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};
Point mid_point(const Point &a, const Point &b) {
    Point c;
    c.x=(a.x+b.x)/2;
    c.y=(a.y+b.y)/2;
    return c;
}
void print(Point p) {
    cout << p.x << " " << p.y;
}
int main()
{
   Point a,b;
   a.x = 24; b.x=5;
   a.y = 12; b.y=2;
   Point c= mid_point(a,b);
   print(c);
}
