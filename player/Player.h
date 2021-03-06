//**************************************************************
//
//	Player.h
//	プレイヤー制御処理
//
//--------------------------------------------------------------
//	製作者：柴山凜太郎
//--------------------------------------------------------------
//	開発履歴
//	2021/12/09	プレイヤー制御処理の実装開始
//
//**************************************************************
#pragma once
#ifndef __PLAYER_H__
#define __PLAYER_H__

// ---マクロ定義---

// ---プレイヤークラス---
class Player
{
public:
	Player();
	~Player();

	void Init();		// 初期化
	void Uninit();		// 終了
	void Update();		// 更新
	void Draw();		// 描画
	float GetPos();		// プレイヤー座標取得

	float m_pos;		// 座標(後から3軸の型に変更)
	float m_rot;		// 座標(後から3軸の型に変更)
	int m_Life;
	bool m_bDamage;		// ダメージ判定
	bool m_bLanding;	// 着地判定

private:
	float m_size;		// サイズ(後から3軸の型に変更)
	float m_speed;		// 移動速度

};

#endif // !__PLAYER_H__

