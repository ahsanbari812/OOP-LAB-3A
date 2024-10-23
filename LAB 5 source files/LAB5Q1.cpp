#include<iostream>
using namespace std;

class Square{
    float sideLength;
    float area;

 public:
    static float allareas;

  Square(){
    sideLength=0;
    area=0;
  }
  Square(float sidelen){
    sideLength=sidelen;
  }

  float calcarea(){
    area= sideLength*sideLength;
    allareas=allareas+area;
    return area;
  }

  float getlength(){
    return sideLength;
  }

  float getarea(){
    return area;
  }

  void setarea(float area){
     this->area=area;
  }

  void setsidelength(float side){
     sideLength=side;
  }

};
float Square :: allareas=0; 


int main(){


    Square s1(3.20);
    Square s2(6);
    Square s3(14.3);
    
    s1.calcarea();
    cout<<"Area of square 1 of side length "<< s1.getlength() << " is " <<s1.getarea()<< " and total area "<< Square::allareas <<endl;
    s2.calcarea();
    cout<<"Area of square 2 of side length "<< s2.getlength() << " is " <<s2.getarea() <<" and total area "<< Square::allareas <<endl;
    s3.calcarea();
    cout<<"Area of square 3 of side length "<< s3.getlength() << " is " <<s3.getarea()<<" and total area "<< Square::allareas <<endl;
    cout << "Total of all areas: " << Square::allareas << endl;
    cout<<"------------------------------------------------------------------------"<<endl;

    
    cout<<"AREA CALCULATIONS (BY SETTER'S INFO)"<<endl;
    s1.setsidelength(14);
    s2.setsidelength(1.3);
    s3.setsidelength(14);

    s1.calcarea();
    cout<<"Area of square 1 of side length "<< s1.getlength() << " is " <<s1.getarea()<< " and total area "<< Square::allareas <<endl;
    s2.calcarea();
    cout<<"Area of square 2 of side length "<< s2.getlength() << " is " <<s2.getarea() <<" and total area "<< Square::allareas <<endl;
    s3.calcarea();
    cout<<"Area of square 3 of side length "<< s3.getlength() << " is " <<s3.getarea()<<" and total area "<< Square::allareas <<endl;
    cout << "Total of all areas: " << Square::allareas << endl;
}
