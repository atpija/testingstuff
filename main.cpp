#include <iostream>
#include <list>
#include <fstream>

//Classroom layout
//  (0) (1) (2) (3) (4)
//  (5) (6) (7) (8) (9)

using namespace std;

char names[20];


list <int> seats = {0,1,2,3,4,5,6,7,8,9};

//int students = 6;


int main() {

    int o = 0;
    int p = 5;

    int counter = 0;

    ifstream MyReadFile;
    MyReadFile.open("test.csv");
    
    while(MyReadFile.getline(names,20)){

        //cout << names << endl;

        counter++;

    }
    MyReadFile.close();

    ofstream NewFile("output.csv");


    if(counter > 6){
        cout << "to many students assigned to classroom";
        return 1;
    }
    else{

        for(int i = 1; i <= counter; i++){
                        
            if(o <= 4){
                cout << "student"<<i << " row 0 seat "<< o << endl;
                NewFile << "student"<<i << " row 0 seat "<< o << endl;
                o = o + 2;
            }
            else{
                cout << "student"<<i << " row 1 seat "<< p << endl;
                NewFile << "student"<<i << " row 1 seat "<< p << endl;
                p = p +2;
            }
            
            
        }

        NewFile.close();

        return 0;
    }


}