#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
    
int max_frames = 400;
int rand_color = 0;

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
            for (int k = 0; k < ((rand() % 3) + 2); k++) {
                file << rand_color / 8 << " ";
                file << rand_color / 5 << " ";
                file << rand_color / 2 << " ";
                rand_color += 1;
                if (rand_color == max_color_value)
                    rand_color = 0;
            }
        }
    }

        file << std::endl;

    file.close();
    std::cout << "Plik " << filename << " zapisano pomyslnie." << std::endl;
}

int main() {

    int frame = 1;

    for (frame; frame <= max_frames; frame++) {
        
        std::string filename = ("frame_" + std::to_string(frame) + ".ppm");
        saveppm(filename);

    }

    return 0;

}
