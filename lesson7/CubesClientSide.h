//
// Created by biezhihua on 2017/7/22.
//

#ifndef INC_21CPLUSPLUS_CUBESCLIENTSIDE_H
#define INC_21CPLUSPLUS_CUBESCLIENTSIDE_H

#include "Cubes.h"

class CubesClientSide : public Cubes {

public:
    vector<float> *mCubePositions = nullptr;
    vector<float> *mCubeNormals = nullptr;
    vector<float> *mCubeTextureCoordinates = nullptr;

public:
    CubesClientSide(vector<float> *cubePositions, vector<float> *cubeNormals,
                    vector<float> *cubeTextureCoordinates, int generatedCubeFactor) {
//        vector<vector<float> *> buffers = getBuffers(cubePositions, cubeNormals,
//                                                     cubeTextureCoordinates, generatedCubeFactor);
        vector<float> *cubeNormalsBuffer = new vector<float>();
        for (int i = 0;
             i < (generatedCubeFactor * generatedCubeFactor * generatedCubeFactor); i++) {
            cubeNormalsBuffer->insert(cubeNormalsBuffer->end(), cubeNormals->begin(),
                                      cubeNormals->end());
        }

        vector<float> *cubeTextureCoordinatesBuffer = new vector<float>();
        for (int i = 0;
             i < (generatedCubeFactor * generatedCubeFactor * generatedCubeFactor); i++) {
            cubeTextureCoordinatesBuffer->insert(cubeTextureCoordinatesBuffer->end(),
                                                 cubeTextureCoordinates->begin(),
                                                 cubeTextureCoordinates->end());
        }
        CubesClientSide::mCubePositions = cubePositions;
        CubesClientSide::mCubeNormals = cubeNormalsBuffer;
        CubesClientSide::mCubeTextureCoordinates = cubeTextureCoordinatesBuffer;

//        CubesClientSide::mCubePositions = buffers.at(0);
//        CubesClientSide::mCubeNormals = buffers.at(1);
//        CubesClientSide::mCubeTextureCoordinates = buffers.at(2);
    }

    void renderer() override;

    void release() override;

};


#endif //INC_21CPLUSPLUS_CUBESCLIENTSIDE_H
