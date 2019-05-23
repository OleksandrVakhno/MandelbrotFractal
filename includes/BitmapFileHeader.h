//
// Created by Alex Vakhno on 2019-05-20.
//

#ifndef FRACTAL_IMG_BITMAPFILEHEADER_H
#define FRACTAL_IMG_BITMAPFILEHEADER_H


#pragma pack(2)

namespace bmp {


    struct BitmapFileHeader {
        char header[2]{'B', 'M'};
        int32_t fileSize;
        int32_t reserved{0};
        int32_t dataOffset;
    };
}

#endif //FRACTAL_IMG_BITMAPFILEHEADER_H
