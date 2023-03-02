#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

void saveppm(std::string filename) {
    int width = 400;
    int height = 400;
    int max_color_value = 255;
    std::ofstream file(filename);

    if (!file) {
        std::cout << "Nie można otworzyć pliku " << filename << " do zapisu" << std::endl;
        return;
    }

    file << "P3" << std::endl;
    file << width << " " << height << std::endl;
    file << max_color_value << std::endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            int rand_color = rand() % (max_color_value + 1);
            for (int k = 0; k < ((rand() % 200) + 100); k++) {
                file << rand_color / 8 << " ";
                file << rand_color / 4 << " ";
                file << rand_color / 2 << " ";
            }
        }

        file << std::endl;
    }

    file.close();
    std::cout << "Plik " << filename << " zapisano pomyslnie." << std::endl;
}

int main() {

    std::string filename = "procedural.ppm";
    saveppm(filename);
    return 0;

}
