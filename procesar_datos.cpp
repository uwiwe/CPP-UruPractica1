#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string name, id, email;
    ifstream input("./data/data.txt");
    
    if (!input.is_open()) {
        cout << "No se puede abrir el archivo" << endl;
        return 0;
    }

    while (input >> name >> id >> email) {
        cout << "Mi nombre es " << name << ", numero de cedula: " << id 
             << ", mi correo es: " << email << "." << endl;
    }

    input.close();
    return 0;
}
