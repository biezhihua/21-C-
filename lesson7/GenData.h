//
// Created by biezhihua on 2017/7/22.
//

#ifndef INC_21CPLUSPLUS_GENDATARUNNABLE_H
#define INC_21CPLUSPLUS_GENDATARUNNABLE_H

#include <iostream>
#include <vector>

using namespace std;

class GenData {

private:
    vector<float> *generateCubeData(float *point1, float *point2, float *point3, float *point4, float *point5, float *point6, float *point7, float *point8, int elementsPerPoint);

public:

    // X, Y, Z
    // The normal is used in light calculations and is a vector which points
    // orthogonal to the plane of the surface. For a cube model, the normals
    // should be orthogonal to the points of each face.
    static vector<float> CUBE_NORMAL_DATA;

    // S, T (or X, Y)
    // Texture coordinate data.
    // Because images have a Y axis pointing downward (values increase as you move down the image) while
    // OpenGL has a Y axis pointing upward, we adjust for that here by flipping the Y axis.
    // What's more is that the texture coordinates are the same for every face.
    static vector<float> CUBE_TEXTURE_COORDINATE_DATA;

    vector<float> *generatorCubeData(int requestedCubeFactor, bool toggleVbos, bool toggleStride);

};


#endif //INC_21CPLUSPLUS_GENDATARUNNABLE_H
