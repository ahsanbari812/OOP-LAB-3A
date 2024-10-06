#include <iostream>
#include <string>
using namespace std;

class Office {
    string Location;          
    int SeatingCapacity;     
    string* Furniture;        
    int FurnitureSize;     

public:
    Office(){
        Location="11 11";
        SeatingCapacity=0; 
        FurnitureSize=3;
        Furniture = new string[FurnitureSize];
        Furniture[0]="ll";
        Furniture[1]="11 11";
        Furniture[2]= " ";      

    }
   
    
  
    Office(string locate, int capacity, int furnitureSize, string furniture1, string furniture2, string furniture3) {
        Location=locate;
        SeatingCapacity=capacity;
        FurnitureSize = furnitureSize;
        Furniture = new string[FurnitureSize]; 
        Furniture[0] = furniture1;
        Furniture[1] = furniture2;
        Furniture[2] = furniture3;
    }
    
   
    ~Office() {
        delete[] Furniture; 
    }

    void displayDetails() {
        cout << "Location: " << Location << endl;
        cout << "Seating Capacity: " << SeatingCapacity << endl;
        cout << "Furniture: ";

        for (int i = 0; i < FurnitureSize; ++i) {
            cout << Furniture[i]<<endl;
        }
    }
};

int main() {

    Office* office1 = new Office("Sialkot", 600, 3, "Study", "Cabinets", "Chair");
    cout << "Office Details:" << endl;
    (*office1).displayDetails();
    cout << "-----------------------------------------" << endl << endl;


    delete office1;  
}