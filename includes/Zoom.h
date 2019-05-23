//
// Created by Alex Vakhno on 2019-05-21.
//

#ifndef FRACTAL_IMG_ZOOM_H
#define FRACTAL_IMG_ZOOM_H

namespace bmp {
    struct Zoom {
        int x{0};
        int y{0};
        double scale{0};
        Zoom(int x, int y, double scale): x(x), y(y), scale(scale){};
    };
}

#endif //FRACTAL_IMG_ZOOM_H
