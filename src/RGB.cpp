//
// Created by Alex Vakhno on 2019-05-22.
//
#include "RGB.h"


namespace bmp{

    
    RGB operator-(const RGB& first, const RGB& second){
        return (RGB(first.r - second.r, first.g - second.g, first.b -second.b ));
    }
}
