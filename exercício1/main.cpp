#include <iostream>
#include <string>

using namespace std;

string recebe_marca_carro();
string recebe_modelo_carro();
int recebe_ano_carro();
float recebe_preco_carro();

int main(int argc, char *argv[]) {
    string marca;
    string modelo;
    int ano;
    float preco;

    marca = recebe_marca_carro();
    modelo = recebe_modelo_carro();
    ano = recebe_ano_carro();
    preco = recebe_preco_carro();

    cout << "Marca = " << marca << endl;
    cout << "Modelo = " << modelo << endl;
    cout << "Ano = " << ano << endl;
    cout << "Preco = " << preco << endl;

    return 0;
}

string recebe_marca_carro() {
    string marca_recebida;
    cout << "Informe a marca do carro: " << endl;
    cin >> marca_recebida;
    return marca_recebida;
}

string recebe_modelo_carro() {
    string modelo;
    cout << "Informe o modelo do carro: " << endl;
    cin >> modelo;
    return modelo;
}

int recebe_ano_carro() {
    int ano;
    cout << "Informe o ano do carro: " << endl;
    cin >> ano;
    return ano;
}

float recebe_preco_carro() {
    float preco;
    cout << "Informe o preco do carro: " << endl;
    cin >> preco;
    return preco;
}

