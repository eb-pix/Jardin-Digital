//
// Created by malau on 19/02/2026.
//

#ifndef PROYECTO_TRONCO_H
#define PROYECTO_TRONCO_H

class Tronco {
private:
    float alto, ancho;
    int colorR, colorG, colorB;
public:
    Tronco(float alto, float ancho, int r, int g, int b)
        : alto(alto), ancho(ancho), colorR(r), colorG(g), colorB(b) {}
    float getAlto() { return alto; }
    float getAncho() { return ancho; }
    void dibujar() {
    }
};
#endif