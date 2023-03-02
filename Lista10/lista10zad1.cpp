#include <iostream>
#include <fstream>
#include <cmath>

float Width, Height, iter, max_iter, xtemp, Px, Py;
float xZero, yZero, x, y, kolor, alfa;

int main() {

    Width = 800;
    Height = 800;
    alfa = 255;

    std::ofstream file("Mandelbrot.ppm");

    if (!file) {
        std::cout << "Nie można otworzyć pliku Mandelbrot.ppm do zapisu" << std::endl;
        return 0;
    }

    file << "P3" << std::endl;
    file << Width << " " << Height << std::endl;
    file << 255 << std::endl;

    for (Py = 1; Py <= Height; Py++) {
        for (Px = 1; Px <= Width; Px++) {

            x = 0.0;
            y = 0.0;

            xZero = (Px - Width / 4) * 6.0 / Width;
            yZero = (Py - Height / 2) * 6.0 / Height;

            iter = 0;
            max_iter = 1000;

            while (x*x + y*y < 4 && iter < max_iter) {

                xtemp = x*x - y*y + xZero;
                y = 2*x*y + yZero;
                x = xtemp;
                iter++;

            }

            kolor = std::round((alfa * (iter / max_iter) / 2));

            if (kolor >= 0 && kolor <= 120) {
            
                file << 255 << " ";
                file << 255 << " ";
                file << 125 << " ";
            
            }

            else {

                file << 0 << " ";
                file << 0 << " ";
                file << 0 << " ";

            }
        }

        file << std::endl;

    }

    file.close();
    std::cout << "Plik Mandelbrot.ppm zapisano pomyslnie." << std::endl;

    return 0;

}