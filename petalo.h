//
// Created by malau on 19/02/2026.
//

#ifndef PROYECTO_PETALO_H
#define PROYECTO_PETALO_H

class Petalo {
private:
    float radio;
    int colorR, colorG, colorB;
public:
    Petalo(float radio, int r, int g, int b) {
        this->radio = radio;
        this->colorR = r;
        this->colorG = g;
        this->colorB = b;
    }

    float getRadio() { return radio; }
    int getR() { return colorR; }
    int getG() { return colorG; }
    int getB() { return colorB; }
    void dibujar() {
    }
};
#endif

