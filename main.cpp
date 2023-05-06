#include <stdio.h>
#include <stdint.h>
#include <math.h>
using namespace std;
class Point{
    private:
        int8_t x;
        int8_t y;
    public:
        int8_t get_X();
        int8_t get_Y();
        void Set_Point(int8_t x = 0, int8_t y = 0);
};

void Point::Set_Point(int8_t x, int8_t y){
    this->x = x;
    this->y = y;
}


int8_t Point::get_X(){
    return this->x;
}

int8_t Point::get_Y(){
    return this->y;
}

class Distance{
    private:
        Point A;
        Point B;
    public:
        Distance(Point A, Point B);
        void Get_Distance(Point A, Point B);
};

Distance::Distance(Point A, Point B){
    this->A = A;
    this->B = B;
}
void Distance::Get_Distance(Point A, Point B){
     double result = (A.get_X() - B.get_X())*(A.get_X() - B.get_X()) + (A.get_Y() - B.get_Y())*(A.get_Y() - B.get_Y());
     printf("The Distance between two point is %lf\n",sqrt(result)) ;
    
}
class Area{
    private:
        Point A;
        Point B;
        Point C;
    public:
        Area(Point A, Point B, Point C);
        void Get_Area(Point A, Point B, Point C);
};
Area::Area(Point A, Point B, Point C){
    this->A = A;
    this->B = B;
    this->C = C;
}
void Area::Get_Area(Point A, Point B, Point C){
    //S = 1/2 * |(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))|
    double result = 0.5 * abs(A.get_X()*(B.get_Y()-C.get_Y()) + B.get_X()*(C.get_Y()-A.get_Y()) + C.get_X()*(A.get_Y()-B.get_Y()));
    printf("The Area of Triangle is %lf\n",result);
}
int main(int argc, char const *argv[])
{
    Point A,B,C;
    A.Set_Point(1,3);
    B.Set_Point(2,5); 
    C.Set_Point(7,8); 
    Distance Distance_Point(A,B);
    Distance_Point.Get_Distance(A,B);
    Area Area_Point(A,B,C);
    Area_Point.Get_Area(A,B,C);
    return 0;
}
