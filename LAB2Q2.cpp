#include<iostream>
using namespace std;

class student{
private:
int rollNo; //private data member
public:
int getrollNo(){
   return rollNo;
}
void setrollNo(int r){
    rollNo=r;
    }

};
    int main(){
        student Ahsan;
        Ahsan.setrollNo(612); 
        cout <<"roll number of ahsan is: "<< Ahsan.getrollNo();
    } 