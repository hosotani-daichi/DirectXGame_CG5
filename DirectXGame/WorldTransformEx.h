#pragma once
#include "Kamataengine.h"

#include "C:\Users\k023g\OneDrive\デスクトップ\Class\2025_Class3\CG5\CG5_Project\External\KamataEngine\include\3d\WorldTransform.h"
class WorldTransformEx : public KamataEngine::WorldTransform {

public:
	//Affine変換行列の生成と定数バッファへの転送を行う
	void UpdateMatrix();

	//Affine変換行列の生成
	KamataEngine::Matrix4x4 MakeAffineMatrix();
};
