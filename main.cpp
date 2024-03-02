#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Carro {
    string marca;
    string modelo;
    int ano;
    float preco;
};

string recebe_marca();
string recebe_modelo();
int recebe_ano();
float recebe_preco();

int main() {
    Carro carro;

    carro.marca = recebe_marca();
    carro.modelo = recebe_modelo();
    carro.ano = recebe_ano();
    carro.preco = recebe_preco();

    cout << "\nCarro cadastrado com sucesso!\n";
    cout << "Marca: " << carro.marca << endl;
    cout << "Modelo: " << carro.modelo << endl;
    cout << "Ano: " << carro.ano << endl;
    cout << "Preço: R$ " << carro.preco << endl;

    return 0;
}

string recebe_marca() {
    string marca;
    cout << "Digite a marca do carro: ";
    cin >> marca;
    return marca;
}

string recebe_modelo() {
    string modelo;
    cout << "Digite o modelo do carro: ";
    cin >> modelo;
    return modelo;
}

int recebe_ano() {
    int ano=0;
    int auxiliar;
    while(ano==0){
    	
	cout << "Digite o ano do carro: ";
    cin >> auxiliar ;
    if (auxiliar < 1900 || auxiliar > 2024) {
        cout << "Ano invalido. Por favor, digite novamente: "<< endl;
    }else{
    	ano = auxiliar;
	}
}
    
    return ano;
}

float recebe_preco() {
    float preco=0;
    float auxiliar;
    while(preco==0){
	
    cout << "Digite o preco do carro: R$ ";
    cin >> auxiliar;
    if(auxiliar <= 0){
        cout << "Preco invalido. Por favor, digite novamente: "<<endl;
    }else{
    	preco = auxiliar;
	}
    }
    return preco;
}
