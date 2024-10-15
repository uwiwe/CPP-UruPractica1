#include<iostream>
#include<fstream>

using namespace std;

struct User {
    string name;
    int id;
    string email;
};

int main(){

    User user;
    int x = 0;

    ofstream output("./data/data.txt", ios::app); 
    
    if (!output.is_open()) {
        cout << "No se puede abrir ni crear el archivo" << endl;
        return 0;
    }

    output.close();
    return 0;
}
