//
// Created by biezhihua on 2017/7/21.
//

#ifndef OPENGLLESSON_CUBES_H
#define OPENGLLESSON_CUBES_H

#include <vector>

using namespace std;

class Cubes {

public:

    vector<vector<float> *> getBuffers(vector<float> *cubePositions,
                                       vector<float> *cubeNormals,
                                       vector<float> *cubeTextureCoordinates,
                                       int generatedCubeFactor);

    void getInterleavedBuffer(vector<float> *cubePositions,
                              vector<float> *cubeNormals,
                              vector<float> *cubeTextureCoordinates,
                              int generatedCubeFactor);

    virtual void renderer()= 0;

    virtual void release()= 0;
};


#endif //OPENGLLESSON_CUBES_H
