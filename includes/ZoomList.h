//
// Created by Alex Vakhno on 2019-05-21.
//

#ifndef FRACTAL_IMG_ZOOMLIST_H
#define FRACTAL_IMG_ZOOMLIST_H

#include "Zoom.h"
#include <vector>
#include <utility>

using namespace std;


namespace bmp {
    class ZoomList {
    private:
        double _xCenter{0};
        double _yCenter{0};
        double _scale{1.0};
        int _width{0};
        int _height{0};
        vector<Zoom> zooms;
    public:
        ZoomList(int width, int height);
        void add(const Zoom& zoom );
        pair<double, double> doZoom(int x, int y);

    };
}

#endif //FRACTAL_IMG_ZOOMLIST_H
