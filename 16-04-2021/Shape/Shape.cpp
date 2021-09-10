#include <iostream> 
using namespace std;
 
class Shape {
   
      int width, height;
      
   public:
      Shape(){
         width = 0;
         height = 0;
      }

      Shape(double pi){
         pi = 3.14;
      }

      Shape(int a, int b){
         width = a;
         height = b;
      }

      void setWidth(int w){
          this->width =w;
      }

       void setHeight(int h){
          this->height =h;
      }

      int getWidth(){
          return this->width;
      }

      int getHeight(){
          return this->height;
      }

      virtual double area() {
         cout << "Base class area :" <<endl;

         return 0;
      }
};

class Rectangle: public Shape {

   public:
      Rectangle(int w,int h):Shape(w, h) { }
      
      double area () { 
         cout << "Rectangle class area :" <<endl;
         return (getWidth() * getHeight()); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int w, int h):Shape(w, h) { }
      
      double area () { 
         cout << "Triangle class area :" <<endl;
         return (getWidth() * getHeight() / 2); 
      }
};


int main() {

   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
   
   shape = &rec;;
   cout<<"Area: "<<shape->area()<<"\n";

   shape = &tri;
   cout<<"Area: "<<shape->area()<<"\n";
   
   return 0;
}