#include <iostream>

using namespace std;

// Base class
class PlaneFigure {
    public:
        void setWidth(int w) {
            width = w;
      }
        void setHeight(int h) {
            height = h;
      }
        void setBase(int b){
            base = b;
      }
        void setSide(int s){
            side = s;
      }

   protected:
      int width;
      int height;
      int base;
      int side;
};

// Derived classes
class Rectangle: public PlaneFigure {
   public:
      int getArea() {
         return (width * height);
      }
};
class Square: public PlaneFigure {
   public:
      int getArea() {
         return (side * side);
      }
};
class Parallelogram: public PlaneFigure {
   public:
      int getArea() {
         return (base * height);
      }
};

int main(void) {
    int choice;
    cout<<"1)Rectangle\n2)Square\n3)Parallelogram\n4)Exit\n";
    do {
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"\nAREA OF RECTANGLE"<<endl;
                int len, wid;
                cout<<"Length: ";
                cin>>len;
                cout<<"Width: ";
                cin>>wid;
                Rectangle Rect;
                Rect.setWidth(wid);
                Rect.setHeight(len);
                cout << "Area of Rectangle is "<<Rect.getArea()<<"(unit square)"<<endl;
            break;
            }
            case 2:{
                cout<<"\nAREA OF SQUARE"<<endl;
                int si;
                cout<<"Side: ";
                cin>>si;
                Square sqr;
                sqr.setSide(si);
                cout << "Area of Square is " << sqr.getArea()<<"(unit square)" << endl;
            break;
            }
            case 3:{
                cout<<"\nAREA OF PARALLELOGRAM"<<endl;
                int ba, he;
                cout<<"Base: ";
                cin>>ba;
                cout<<"Height: ";
                cin>>he;
                Parallelogram para;
                para.setBase(ba);
                para.setHeight(he);
                cout << "Area of Parallelogram is " << para.getArea()<<"(unit square)" << endl;
            break;
            case 4:{
                cout<<"Exit.";
                break;
            }
            }
            default:{
                cout<<"Invalid choice!\n";
            }
        }
    }while(choice != 4);
    return 0;
}
