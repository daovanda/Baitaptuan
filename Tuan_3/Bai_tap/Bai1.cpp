#include<bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};
void print(Point p) {
    cout << p.x << " " << p.y;
}

int main()
{
    Point point;
   point.x = 24;
   point.y = 5;
   print(point);
}
