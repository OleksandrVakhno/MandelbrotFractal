//
// Created by Alex Vakhno on 2019-05-20.
//

#ifndef FRACTAL_IMG_BITMAP_H
#define FRACTAL_IMG_BITMAP_H

#include <string>

using namespace std;

namespace bmp {


    class Bitmap {
    private:
        int _width{0};
        int _height{0};
        unique_ptr<uint8_t[]> _pPixels{nullptr};
    public:
        Bitmap(int width, int height);
        void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
        bool write(string filename);
        virtual ~Bitmap();

    };
}

#endif //FRACTAL_IMG_BITMAP_H
