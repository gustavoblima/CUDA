#include <iostream>
#include <fstream>

using namespace std;

//Images Processing C++

// Image PPM

int main() {
    //Cirar imagens
    ofstream image;
    //Change image path:
    image.open("C:\\Jex\\apollo.ppm");

    if (image.is_open()) {
        //lugar das infos do cabeçalho
        image << "P3" << endl;
        image << "250 250" << endl; //Tamanho da imagem
        image << "255" << endl; //set RGB max
    }

    image.close();

    return 0;

}