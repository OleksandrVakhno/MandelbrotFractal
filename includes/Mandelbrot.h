//
// Created by Alex Vakhno on 2019-05-21.
//

#ifndef FRACTAL_IMG_MANDELBROT_H
#define FRACTAL_IMG_MANDELBROT_H

namespace fractal {
    class Mandelbrot {
    public:
        static const int MAX_ITERATIONS = 2000;

    public:
        Mandelbrot();

        virtual ~Mandelbrot();

        static int getIterations(double x, double y);

    };
}

#endif //FRACTAL_IMG_MANDELBROT_H
