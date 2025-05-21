#pragma once

#include <d3d12.h>
#include <d3dcompiler.h>
#include <dxcapi.h>
#include <string>

class Shader {
public:
	// シェーダーファイルを読み込み、コンパイル済みのデータを生成する
	void Load(const std::wstring& filePath, const std::wstring& shaderModel);
	void LoadDxc(const std::wstring& filePath, const std::wstring& shaderModel);

	// 生成したコンパイル済みデータを取得する
	ID3DBlob* GetBlob();
	IDxcBlob* GetDxcBlob();

	// コンストラクト
	Shader();
	// デストラクタ
	~Shader();

private:
	ID3DBlob* blob_ = nullptr; // コンストラクトで初期化しなくていい
	IDxcBlob* dxcBlob_ = nullptr;
};
