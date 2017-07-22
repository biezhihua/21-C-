//
// Created by biezhihua on 2017/7/21.
//

#include "Cubes.h"

vector<vector<float> *> Cubes::getBuffers(vector<float> *cubePositions, vector<float> *cubeNormals, vector<float> *cubeTextureCoordinates, int generatedCubeFactor) {

    vector<float> *cubeNormalsBuffer = new vector<float>();

    for (int i = 0; i < (generatedCubeFactor * generatedCubeFactor * generatedCubeFactor); i++) {
        cubeNormalsBuffer->insert(cubeNormalsBuffer->end(), cubeNormals->begin(), cubeNormals->end());
    }

    vector<vector<float> *> results;
    results.push_back(cubePositions);
    results.push_back(cubeNormalsBuffer);
    results.push_back(cubeTextureCoordinates);

    return results;
}

void Cubes::getInterleavedBuffer(vector<float> *cubePositions, vector<float> *cubeNormals, vector<float> *cubeTextureCoordinates, int generatedCubeFactor) {

    unsigned long cubeDataLength = cubePositions->size()
                                   + (cubeNormals->size() * generatedCubeFactor * generatedCubeFactor * generatedCubeFactor)
                                   + (cubeTextureCoordinates->size() * generatedCubeFactor * generatedCubeFactor * generatedCubeFactor);
    int cubePositionOffset = 0;
    int cubeNormalOffset = 0;
    int cubeTextureOffset = 0;

}



