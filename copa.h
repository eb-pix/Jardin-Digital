//
// Created by malau on 19/02/2026.
//

#ifndef PROYECTO_COPA_H
#define PROYECTO_COPA_H

class Copa {
private:
    float radio;
    int colorR, colorG, colorB;
public:
    Copa(float radio, int r, int g, int b)
        : radio(radio), colorR(r), colorG(g), colorB(b) {}
    float getRadio() { return radio; }
    void dibujar() {
    }
};
#endif