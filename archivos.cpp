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

    cout << "Cuantos usuarios desea registrar?" << endl;
    cin >> x;
    
    for (int i = 1; i <= x; ++i) {
        cout << "Usuario numero " << i << endl;
        cout << "Ingrese el nombre: " << endl;
        cin >> user.name;
        cout << "Ingrese la cedula: " << endl;
        cin >> user.id;
        cout << "Ingrese el correo electronico: " << endl;
        cin >> user.email;

        output << user.name << "\t" << user.id << "\t" << user.email << endl;
    }

    output.close();
    return 0;
}
