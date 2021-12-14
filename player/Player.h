//**************************************************************
//
//	Player.h
//	�v���C���[���䏈��
//
//--------------------------------------------------------------
//	����ҁF�ĎR꣑��Y
//--------------------------------------------------------------
//	�J������
//	2021/12/09	�v���C���[���䏈���̎����J�n
//
//**************************************************************
#pragma once
#ifndef __PLAYER_H__
#define __PLAYER_H__

// ---�}�N����`---

// ---�v���C���[�N���X---
class Player
{
public:
	Player();
	~Player();

	void Init();		// ������
	void Uninit();		// �I��
	void Update();		// �X�V
	void Draw();		// �`��
	float GetPos();		// �v���C���[���W�擾

	float m_pos;		// ���W(�ォ��3���̌^�ɕύX)
	float m_rot;		// ���W(�ォ��3���̌^�ɕύX)
	int m_Life;
	bool m_bDamage;		// �_���[�W����
	bool m_bLanding;	// ���n����

private:
	float m_size;		// �T�C�Y(�ォ��3���̌^�ɕύX)
	float m_speed;		// �ړ����x

};

#endif // !__PLAYER_H__

