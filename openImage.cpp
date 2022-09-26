#include <iostream>
#include <fstream>

using namespace std;

//Images Processing C++

// Image PPM

int main() {
    //Criar imagens
    ofstream image;
    //Nesta opcao troca o caminho da imagem:
    image.open("PPM_Images.ppm");

    if (image.is_open()) {
        //lugar das infos do cabeçalho
        image << "P3" << endl;
        image << "250 250" << endl; //Tamanho da imagem
        image << "255" << endl; //set RGB max
    }

    image.close();

    return 0;

}