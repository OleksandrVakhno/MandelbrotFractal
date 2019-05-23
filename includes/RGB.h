//
// Created by Alex Vakhno on 2019-05-22.
//

#ifndef FRACTAL_IMG_RGB_H
#define FRACTAL_IMG_RGB_H

namespace bmp {
    struct RGB {
        double r;
        double g;
        double b;
        RGB(double r, double g, double b): r(r), b(b), g(g){};
    };

    RGB operator-(const RGB& first, const RGB& second);

}





#endif //FRACTAL_IMG_RGB_H
