#include <iostream>

using namespace std;
class shape
{protected:
    float dim1;
    float dim2;
    public:
    shape()
    {
        dim1=dim2=0;
    }
    shape(float l)
    {
        dim1=dim2=l;
    }
    shape(float l,float m)
    {
        dim1=l;
        dim2=m;
    }

    float getdim1()
    {
        return dim1;
    }

    float getdim2()
    {
        return dim2;
    }
     virtual float calarea()=0;


};
class rectangel:public shape
{
public:

    rectangel()
    {

    }
    rectangel(float d1,float d2):shape(d1,d2)
    {

    }
      void setd1d2(float y,float x)
    {
        dim1=y;
        dim2=x;

    }
    float calarea()
    {
        return getdim1()*getdim2();
    }

};

class squre:public shape
{ public:
   squre()
    {

    }
    squre(float dim):shape(dim)
    {

    }
     void setd1d2(float y)
    {
        dim1=y;
        dim2=y;

    }
    float calarea()
    {
        return getdim1()*getdim2();
    }
    };
 class circle:public shape
 {
 public:
    circle()
    {

    }
    circle(float r):shape(r)
    {

    }
     void setd1d2(float y)
    {
        dim1=y;
        dim2=y;

    }

    float calarea()
    {
        return 3.14*getdim1()*getdim2();
    }

 };
 class trangle:public shape
 {
     public:
      trangle()
      {

      }
      trangle(float d1,float d2):shape(d1,d2)
      {

      }
        void setd1d2(float y,float x)
    {
        dim1=y;
        dim2=x;

    }
       float calarea()
    {
        return 0.5*getdim1()*getdim2();
    }


 };

float sumofarea(shape*sh1,shape*sh2,shape*sh3,shape*sh4)
{
    return sh1->calarea()+ sh2->calarea()+sh3->calarea()+sh4->calarea();
}











int main()
{



 rectangel *rect=new rectangel(4,3);
squre *sq=new squre(4);
circle*ci =new circle(10);
trangle *ti=new trangle(2,3);
cout<<sumofarea(rect,sq,ti,ci)<<endl;


squre SQ;
SQ.setd1d2(5);

cout<<SQ.calarea()<<endl;

circle cc;
cc.setd1d2(10);
cout<<cc.calarea()<<endl;
trangle tt;
tt.setd1d2(3,7);
cout<<tt.calarea();


























 /*
     rectangel r;
 r.setd1d2(3,2);
 cout<<r.calarea()<<endl;

    squre s;
 s.setd1d2(3);
 cout<<s.calarea();







rectangel *rect=new rectangel(4,3);
squre *sq=new squre(4);
circle*ci =new circle(10);
trangle *ti=new trangle(2,3);
cout<<sumofarea(rect,sq,ti,ci);







cout<<rect.calarea()<<endl;
squre sq(4);
cout<<sq.calarea()<<endl;
circle ci(10);
cout<<ci.calarea()<<endl;
trangle t1(2,3);
cout<<t1.calarea()<<endl;*/
    return 0;
}
