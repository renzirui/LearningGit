#include <iostream>
#include <math.h>
using namespace std;
class Point
{
   public:
      double x;  
      double y; 
     
};
class Triange
{
   public:
      Point p1;
      Point p2;
      Point p3;
    Triange(Point p1,Point p2,Point p3){
        this->p1=p1;
        this->p2=p2;
        this->p3=p3;
    }
    //边长计算
    double getDistance1(){
        double d1 = sqrt(pow(p2.x-p1.x, 2) + pow(p2.y-p1.y, 2));
        return d1;
    }
    double getDistance2(){
        double d2 = sqrt(pow(p3.x-p2.x, 2) + pow(p3.y-p2.y, 2));
        return d2;
    }
    double getDistance3(){
        double d3 = sqrt(pow(p3.x-p1.x, 2) + pow(p3.y-p1.y, 2));
        return d3;
    }
};


//你好,gyq
int main( )
{
    Point replacement(Point p,int x,int y);
    void ap(Point p1,Point p2,Point p3);
    Point p1;
    Point p2;
    Point p3;
    cout<<"请输入p1的坐标"<<endl;
    cin>>p1.x>>p1.y;
    cout<<"请输入p2的坐标"<<endl;
    cin>>p2.x>>p2.y;
    cout<<"请输入p3的坐标"<<endl;
    cin>>p3.x>>p3.y;
    ap(p1,p2,p3);
    cout<<"是否想替换某一顶点？否（0），是（1,2,3）"<<endl;
    int f=0;
    cin>>f;
    if (f=1)
    {
        cout<<"请输入p1新顶点（x，y）"<<endl;
        cin>>p1.x>>p1.y;
        replacement(p1,p1.x,p1.y);
        ap(p1,p2,p3);
    }else if(f=2)
    {
        cout<<"请输入p2新顶点（x，y）"<<endl;
        cin>>p2.x>>p2.y;
        replacement(p2,p2.x,p2.y);
        ap(p1,p2,p3);
    }else if (f=3)
    {
        cout<<"请输入p3新顶点（x，y）"<<endl;
        cin>>p3.x>>p3.y;
        replacement(p3,p3.x,p3.y);
        ap(p1,p2,p3);
    }
    
	
   return 0;
}
Point replacement(Point p,int x,int y){
    p.x=x;
    p.y=y;
    return p;
}
//面积、周长计算方法
void ap(Point p1,Point p2,Point p3){
    
   double area , perimeter= 0.0;     // 用于存储面积、周长
   Triange *t1=new Triange(p1,p2,p3);
   double a=t1->getDistance1();
   double b=t1->getDistance2();
   double c=t1->getDistance3();
 
   //判断三条边是否满足三角形三边关系
   if(a+b>c && b+c>a && a+c>b)                          
	{
    //海伦公式计算三角形面积
	double s=1.0/2*(a+b+c);                     
	area=sqrt(s*(s-a)*(s-b)*(s-c));
    //三角形周长            
    perimeter=a+b+c;
	cout<<"三角形面积"<<area<<endl;
    cout<<"三角形周长"<<perimeter<<endl;
    }else{
        cout<<"无法构成三角形"<<endl;
    } 
    
}
