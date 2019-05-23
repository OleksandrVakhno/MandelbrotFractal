#include <iostream>
#include <memory>
#include "Fractal.h"


using namespace std;
using namespace bmp;
using namespace fractal;

int main() {


    const int WIDTH = 800;
    const int HEIGHT = 600;

    Fractal fractal(WIDTH, HEIGHT);

    fractal.addZoom(Zoom(295, 202, 0.1));
    fractal.addZoom(Zoom(312, 304, 0.1));

    fractal.addColorRange(0.0, RGB(0, 0, 255));
    fractal.addColorRange(0.5, RGB(255, 99, 71));
    fractal.addColorRange(0.8, RGB(255, 215, 0));
    fractal.addColorRange(1, RGB(255,255,255));

    fractal.draw("test.bmp");

    fractal.calculateRangePixelTotals();

    cout<<"Finished"<<endl;




    return 0;
}