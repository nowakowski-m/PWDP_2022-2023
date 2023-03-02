#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

void saveppm(std::string filename) {
    int width = 100;
    int height = 100;
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
            file << rand() % (max_color_value + 1) << " ";
            file << rand() % (max_color_value + 1) << " ";
            file << rand() % (max_color_value + 1) << " ";
        }

        file << std::endl;
    }

    file.close();
    std::cout << "Plik " << filename << " zapisano pomyslnie." << std::endl;
}

int main() {

    std::string filename = "random.ppm";
    saveppm(filename);
    return 0;

}
