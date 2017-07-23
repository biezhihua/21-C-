//
// Created by biezhihua on 2017/7/21.
//

#ifndef OPENGLLESSON_CUBES_H
#define OPENGLLESSON_CUBES_H

#include <vector>

using namespace std;

class Cubes {

protected:

    /**
     * This will be used to pass in model position information.
     */
    int mPositionHandle = 0;

    /**
     * This will be used to pass in model normal information.
     */
    int mNormalHandle = 0;

    /**
     * This will be used to pass in model texture coordinate information.
     */
    int mTextureCoordinateHandle = 0;

    int mLastRequestedCubeFactor = 0;

    int mActualCubeFactor = 0;

    bool mUseVBOs = true;

    bool mUseStride = true;

public:
    void setPositionHandle(int positionHandle);

    void setNormalHandle(int normalHandle);

    void setTextureCoordinateHandle(int textureCoordinateHandle);

    void setLastRequestedCubeFactor(int lastRequestedCubeFactor);

    void setActualCubeFactor(int actualCubeFactor);

    void setUseVBOs(bool useVBOs);

    void setUseStride(bool useStride);

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

    /**
     * Size of the position data in elements.
     */
    static int POSITION_DATA_SIZE;

    /**
     *  Size of the normal data in elements.
     */
    static int NORMAL_DATA_SIZE;

    /**
     * Size of the texture coordinate data in elements.
     */
    static int TEXTURE_COORDINATE_DATA_SIZE;
};


#endif //OPENGLLESSON_CUBES_H
