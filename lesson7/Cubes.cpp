//
// Created by biezhihua on 2017/7/21.
//

#include "Cubes.h"

int Cubes::POSITION_DATA_SIZE = 3;

int Cubes::NORMAL_DATA_SIZE = 3;

int Cubes::TEXTURE_COORDINATE_DATA_SIZE = 2;

vector<vector<float> *> Cubes::getBuffers(vector<float> *cubePositions, vector<float> *cubeNormals,
                                          vector<float> *cubeTextureCoordinates,
                                          int generatedCubeFactor) {

    vector<float> *cubeNormalsBuffer = new vector<float>();

    for (int i = 0; i < (generatedCubeFactor * generatedCubeFactor * generatedCubeFactor); i++) {
        cubeNormalsBuffer->insert(cubeNormalsBuffer->end(), cubeNormals->begin(),
                                  cubeNormals->end());
    }

    vector<vector<float> *> results;
    results.push_back(cubePositions);
    results.push_back(cubeNormalsBuffer);
    results.push_back(cubeTextureCoordinates);

    return results;
}

void Cubes::getInterleavedBuffer(vector<float> *cubePositions, vector<float> *cubeNormals,
                                 vector<float> *cubeTextureCoordinates, int generatedCubeFactor) {

    unsigned long cubeDataLength = cubePositions->size()
                                   + (cubeNormals->size() * generatedCubeFactor *
                                      generatedCubeFactor * generatedCubeFactor)
                                   + (cubeTextureCoordinates->size() * generatedCubeFactor *
                                      generatedCubeFactor * generatedCubeFactor);
    int cubePositionOffset = 0;
    int cubeNormalOffset = 0;
    int cubeTextureOffset = 0;
}

void Cubes::setLastRequestedCubeFactor(int lastRequestedCubeFactor) {
    Cubes::mLastRequestedCubeFactor = lastRequestedCubeFactor;
}

void Cubes::setActualCubeFactor(int actualCubeFactor) {
    Cubes::mActualCubeFactor = actualCubeFactor;
}

void Cubes::setUseVBOs(bool useVBOs) {
    Cubes::mUseVBOs = useVBOs;
}

void Cubes::setUseStride(bool useStride) {
    Cubes::mUseStride = useStride;
}

void Cubes::setPositionHandle(int positionHandle) {
    Cubes::mPositionHandle = positionHandle;
}

void Cubes::setNormalHandle(int normalHandle) {
    Cubes::mNormalHandle = normalHandle;
}

void Cubes::setTextureCoordinateHandle(int textureCoordinateHandle) {
    Cubes::mTextureCoordinateHandle = textureCoordinateHandle;
}



