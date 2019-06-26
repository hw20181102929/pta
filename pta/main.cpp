#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class point{
private:
    int x;
    int y;
public:
    friend double distance(point &c,point &d);
    friend istream & operator>>(istream & input,point & c);
};
istream & operator>>(istream & input,point& c){
    input>>c.x>>c.y;
    return input;
}
double distance(point &c,point &d){
    double h=0;
    h=pow(c.x-d.x,2)+pow(c.y-d.y,2);
    h=sqrt(h);
    return h;
}

int main()
{
    point a;point b;
    cin>>a>>b;
    double h;
    h=distance(a,b);
    printf("%.2f",h);
    return 0;
}
