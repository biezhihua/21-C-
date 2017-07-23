//
// Created by biezhihua on 2017/7/22.
//


#include "CubesClientSide.h"

void CubesClientSide::renderer() {

//    // Pass in the position information
//    glEnableVertexAttribArray(mPositionHandle);
//    glVertexAttribPointer(mPositionHandle, Cubes::POSITION_DATA_SIZE, GL_FLOAT, GL_FALSE, 0,
//                          mCubePositions);
//
//    // Pass in the normal information
//    glEnableVertexAttribArray(mNormalHandle);
//    glVertexAttribPointer(mNormalHandle, Cubes::NORMAL_DATA_SIZE, GL_FLOAT, GL_FALSE, 0,
//                          mCubeNormals);
//
//    // Pass in the texture information
//    glEnableVertexAttribArray(mTextureCoordinateHandle);
//    glVertexAttribPointer(mTextureCoordinateHandle, TEXTURE_COORDINATE_DATA_SIZE, GL_FLOAT,
//                          GL_FALSE,
//                          0, mCubeTextureCoordinates);
//
//    // Draw the mCubes.
//    glDrawArrays(GL_TRIANGLES, 0, mActualCubeFactor * mActualCubeFactor * mActualCubeFactor * 36);
}

void CubesClientSide::release() {
    if (mCubeTextureCoordinates != nullptr) {
        mCubeTextureCoordinates->clear();
        vector<float >().swap(*mCubeTextureCoordinates);
        mCubeTextureCoordinates = nullptr;
    }
}
