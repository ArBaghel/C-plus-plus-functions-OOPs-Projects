# include <iostream>
using namespace std;
class Rectangle{
    private:
        double length;
        double breadth;
    public:
    Rectangle(double l,double b){
        length=l;
        breadth=b;
    }
    double CalculateArea(){
        return length*breadth;
    }


};

//void Rectangle :: CalculateArea(double l, double b){
  //  length=l;
    //breadth=b;
}
int main(){
    Rectangle obj1(10,20);
    Rectangle obj2(13,8);
     cout<<"area of rectangle 1"<<obj1.CalculateArea()<<endl;
     cout<<"area of ractangle 2"<<obj2.CalculateArea()<<endl;
     return 0;
}