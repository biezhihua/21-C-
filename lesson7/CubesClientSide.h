//
// Created by biezhihua on 2017/7/22.
//

#ifndef INC_21CPLUSPLUS_CUBESCLIENTSIDE_H
#define INC_21CPLUSPLUS_CUBESCLIENTSIDE_H


#include "Cubes.h"

class CubesClientSide : public Cubes {

private:
    vector<float> *mCubePositions = nullptr;
    vector<float> *mCubeNormals = nullptr;
    vector<float> *mCubeTextureCoordinates = nullptr;

public:
    CubesClientSide(vector<float> *cubePositions, vector<float> *cubeNormals, vector<float> *cubeTextureCoordinates, int generatedCubeFactor) {
        vector<vector<float> *> buffers = getBuffers(cubePositions, cubeNormals, cubeTextureCoordinates, generatedCubeFactor);
        mCubePositions = buffers.at(0);
        mCubeNormals = buffers.at(1);
        mCubeTextureCoordinates = buffers.at(2);
    }

    vector<float> *getCubePositions() {
        return mCubePositions;
    }

    vector<float> *getCubeNormals() {
        return mCubeNormals;
    }

    vector<float> *getCubeTextureCoordinates() {
        return mCubeTextureCoordinates;
    }


    void renderer() override;

    void release() override;

};


#endif //INC_21CPLUSPLUS_CUBESCLIENTSIDE_H
