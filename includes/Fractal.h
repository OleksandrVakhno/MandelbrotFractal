//
// Created by Alex Vakhno on 2019-05-22.
//

#ifndef FRACTAL_IMG_FRACTAL_H
#define FRACTAL_IMG_FRACTAL_H

#include <vector>
#include "Zoom.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "Mandelbrot.h"
#include "RGB.h"



using namespace std;
using namespace bmp;

namespace fractal {
    class Fractal {
    private:
        const int _width;
        const int _height;
        int _total{0};

        vector<int> _range;
        vector<RGB> _colors;
        vector<int> _rangeTotals;

        bool _gotFirstRange{false};


        unique_ptr<Bitmap> _bitmap;
        unique_ptr<ZoomList> _zoomlist;

        unique_ptr<int[]> _histogram;
        unique_ptr<int[]> _fractal;
    private:
        void calculateIterations();

        void  calculateTotalIterations();

        void writeBitmap(string& name);

        int getRange(int iterations) const;

    public:

        Fractal(int width, int height);

        virtual ~Fractal();

        void addZoom(const Zoom &zoom);

        void addColorRange(double end, const RGB& rgb);

        void calculateRangePixelTotals();

        void draw(string name);


    };
}

#endif //FRACTAL_IMG_FRACTAL_H
