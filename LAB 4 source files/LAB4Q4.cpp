#include <iostream>
#include <string>
using namespace std;

class Office {
    string Location;
    int SeatingCapacity;
    string Furniture[3];

public:
    
    Office(){
        Location="11 11";
        SeatingCapacity=0; 
        Furniture[0]="ll";
        Furniture[1]="11 11";
        Furniture[2]= " ";      

    }
    
    Office(string locate, int Capacity, string furniture1, string furniture2, string furniture3){
        
        Location=locate;
        SeatingCapacity=Capacity;
        Furniture[0]=furniture1;
        Furniture[1]=furniture2;
        Furniture[2]=furniture3;

}
    void displayDetails() {
        cout << "Location: " << Location << endl;
        cout << "Seating Capacity: " << SeatingCapacity << endl;
        cout << "Furniture: " << Furniture[0] << ", " << Furniture[1] << ", " << Furniture[2] << endl;
    }
};

int main() {

    Office office1;
    cout << "Office 1 Details:" << endl;
    office1.displayDetails();
    cout << "-----------------------------------------" << endl<<endl;

    
    Office office2("Lahore", 600, "Study", "Cabinets", "Chair");
    cout << "Office 2 Details:" << endl;
    office2.displayDetails();
    cout << "-----------------------------------------" << endl<<endl;

   
    Office office3("Karachi", 1000, "Desk", "Shelves", "Reception counter");
    cout << "Office 3 Details:" << endl;
    office3.displayDetails();
    cout << "-----------------------------------------" << endl<<endl;

    Office office4("Faislabad", 400, "Meeting tables", "Sofa", "Revolving chair");
    cout << "Office 4 Details:" << endl;
    office4.displayDetails();

    return 0;
}
