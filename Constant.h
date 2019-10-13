/*!
 * @file Constant.h
 * @brief �O���[�o���ȕϐ����X�g
 * �S�̂ɋ��ʂ���萔�͂��̃t�@�C���ɋL�q����
 *
 * �ȉ��ɉ����邱�ƂŃ��{�b�g��؂�ւ���
 * using namespace CitAccelite
 * using namespace CitDynamo (������)
 * using namespace CitXega (������)
 *
 * @date 2013.12.31
 * @author Yasuo Hayashibara
 */

#pragma once

#define CIT_DYNAMO

namespace Const {

// �V�X�e��
const int ROBOT_TYPE_HR42	= 42;			//! Dynamo
const int ROBOT_TYPE_HR46	= 46;			//! Accelite

// ����
const float ST				= 0.020f;		//! �T���v�����O�^�C�� (s)

const int OFF				= 0;
const int ON				= 1;

const int NEUTRAL			= 0;
const int FOWARD			= 1;
const int BACKWARD			= 2;
const int RIGHT 			= 3;
const int LEFT				= 4;

const float GRAVITY			= 9.8f;			//! �d�͉����x(m/s^2)

// Accelite�̌ŗL�̒萔
#ifdef CIT_DYNAMO

/*
 * @class Accelite�̒萔���L�q����
 */
const int SERVO_NUM = 18;	//! �T�[�{�̌� (Accelite)
enum {								//! �T�[�{�̔ԍ�
	FOOT_ROLL_L 	= 	0,			//! ������̃��[����
	KNEE_L1 		= 	1,			//! �����G���s�b�`���i���s�����N�j
	KNEE_L2 		= 	2,			//! �����G��s�b�`���i���s�����N�j
	LEG_PITCH_L 	= 	3,			//! ���҂̃s�b�`���i�V���A�������N�C�҂̃s�b�`���ƍ��킹�đ���̌�����ύX�j
	LEG_ROLL_L	 	= 	4,			//! ���҂̃��[����
	LEG_YAW_L 		= 	5,			//! ���҂̃��[��
	FOOT_ROLL_R 	= 	6,			//! �E����̃��[����
	KNEE_R1		 	= 	7,			//! �E���G���s�b�`���i���s�����N�j
	KNEE_R2 		= 	8,			//! �E���G��s�b�`���i���s�����N�j
	LEG_PITCH_R 	= 	9,			//! �E�҂̃s�b�`���i�V���A�������N�C�҂̃s�b�`���ƍ��킹�đ���̌�����ύX�j
	LEG_ROLL_R	 	= 	10,			//! �E�҂̃��[����
	LEG_YAW_R 		= 	11,			//! �E�҂̃��[��
	ARM_PITCH_L		= 	14,			//! ���r�̃s�b�`��
	ARM_ROLL_L		= 	15,			//! ���r�̃��[����
	ARM_PITCH_R		= 	18,			//! �E�r�̃s�b�`��
	ARM_ROLL_R		= 	19,			//! �E�r�̃��[����
	HEAD_YAW		= 	22,			//! ��̃��[��
	HEAD_PITCH		= 	23,			//! ��̃s�b�`���iAccelite�͖����j
	SERVO_MAX_ID
};

const int SERVO_NO[SERVO_NUM] =			//! �T�[�{�̔ԍ���
{
	FOOT_ROLL_L ,
	KNEE_L1     ,
	KNEE_L2     ,
	LEG_PITCH_L ,
	LEG_ROLL_L  ,
	LEG_YAW_L   ,
	FOOT_ROLL_R ,
	KNEE_R1     ,
	KNEE_R2     ,
	LEG_PITCH_R ,
	LEG_ROLL_R  ,
	LEG_YAW_R   ,
	ARM_PITCH_L ,
	ARM_ROLL_L  ,
	ARM_PITCH_R ,
	ARM_ROLL_R  ,
	HEAD_YAW    ,
	HEAD_PITCH  ,
};

// �����N
enum {			// �����N�̔ԍ�
	CAM	,		//! �J�����̃����N�i���������߂邽�߁j
	HT	,		//! ���̃`���g������J���� (Accelite�͌Œ�)
	HP	,		//! ���̃p��������`���g��
	SH	,		//! �����S���瓪�̃p����
	CS	,		//! �����猨���S
	CC	,		//! ���i��_�j
	RY	,		//! �E�҃��[������E�҃��[����
	RR1	,		//! �E�҃��[��������E�҃s�b�`��
	RP1	,		//! �E�҃s�b�`������E�G��s�b�`��
	RP2	,		//! �E�G��s�b�`������E�G���s�b�`��
	RP3	,		//1 �E�G���s�b�`������E����s�b�`��
	RP4	,		//! �E����s�b�`������E���񃍁[����
	RR2	,		//! �E���񃍁[��������E����
	RF  ,		//! ������
	LY	,		//! ���҃��[�����獶�҃��[����
	LR1	,		//! ���҃��[�������獶�҃s�b�`��
	LP1	,		//! ���҃s�b�`�����獶�G��s�b�`��
	LP2	,		//! ���G��s�b�`�����獶�G���s�b�`��
	LP3	,		//! ���G���s�b�`�����獶����s�b�`��
	LP4	,		//! ������s�b�`�����獶���񃍁[����
	LR2	,		//! �����񃍁[�������獶����
	LF  ,       //! ������
	RSP ,		//! �E���s�b�`�����烍�[����
	RSR	,		//! �E�����[��������E�r��[
	RH  ,       //! �E�r��[
	LSP ,		//! �E���s�b�`�����烍�[����
	LSR	,		//! �E�����[��������E�r��[
	LH  ,       //! ���r��[
	LINK_NUM	//! �����N�̐�	
};

const float HIP_WIDTH	= 0.088f;	//! �҂̕� (m)
const float L01			= 0.032f;	//! ���񂩂瑫��܂ł̒��� (m)
const float L1			= 0.098f;	//! ���񂩂�G�܂ł̒��� (m)
const float L12			= 0.023f;	//! �G�Ԃ̋��� (m)
const float L2			= 0.098f;	//! �G����҂܂ł̒��� (m)
const float L23			= 0.0f;		//! �G����҂܂ł̒��� (m)
const float L3			= 0.043f;	//! ���܂ł̒��� (m)

const float Z3_LIMIT_H  = L01 + L1 + L12 + L2 + L23 + L3 ;
									//! ���̍����̍ő�l (m)
const float Z3_LIMIT_L	= 0.120f;	//! ���̍����̍ŏ��l (m)

// �����N
struct link_para_T {				//! �����N�p�����[�^�̍\����
	float p[3];
	float a[3];
};

const struct link_para_T LINK_PARA[LINK_NUM] = {
//	{{  �O��,   ���E,   �㉺},{�O�㎲,���E��,�㉺��}} (mm)
//	�� -> ��
	{{300.0f,   0.0f,   0.0f},{  0.0f,  0.0f,  0.0f}},	// CAM : �J�����̃����N�i���������߂邽�߁j
	{{  0.0f,   0.0f,   0.0f},{  0.0f,  0.0f,  0.0f}},	// HT  : ���̃`���g������J���� (Accelite�͌Œ�)
	{{ 49.4f,   0.0f,  41.6f},{  0.0f,  1.0f,  0.0f}},	// HP  : ���̃p��������`���g��
	{{-10.0f,   0.0f,  29.7f},{  0.0f,  0.0f,  1.0f}},	// SH  : �����S���瓪�̃p����
	{{  0.0f,   0.0f, 126.5f},{  0.0f,  0.0f,  0.0f}},	// CS  : �����猨���S
	{{  0.0f,   0.0f,   0.0f},{  0.0f,  0.0f,  0.0f}},	// CC  : ���i��_�j
//	�� -> �E����
	{{  0.0f, -44.0f,   0.0f},{  0.0f,  0.0f,  1.0f}},	// RY  : �E�҃��[������E�҃��[����
	{{  0.0f,   0.0f, -42.8f},{  1.0f,  0.0f,  0.0f}},	// RR1 : �E�҃��[��������E�҃s�b�`��
	{{ 15.0f,   0.0f,   0.0f},{  0.0f,  1.0f,  0.0f}},	// RP1 : �E�҃s�b�`������E�G��s�b�`��
	{{  0.0f,   0.0f,-105.0f},{  0.0f,  1.0f,  0.0f}},	// RP2 : �E�G��s�b�`������E�G���s�b�`��
	{{  0.0f,   0.0f, -41.0f},{  0.0f,  1.0f,  0.0f}},	// RP3 : �E�G���s�b�`������E����s�b�`��
	{{  0.0f,   0.0f,-105.0f},{  0.0f,  1.0f,  0.0f}},	// RP4 : �E����s�b�`������E���񃍁[����
	{{  0.0f,   0.0f,   0.0f},{  1.0f,  0.0f,  0.0f}},	// RR2 : �E���񃍁[��������E����
	{{  0.0f,   0.0f, -43.5f},{  0.0f,  0.0f,  0.0f}},	// RF  : �E����
//	�� -> ������
	{{  0.0f,  44.0f,   0.0f},{  0.0f,  0.0f,  1.0f}},	// LY  : ���҃��[�����獶�҃��[����
	{{  0.0f,   0.0f, -42.8f},{  1.0f,  0.0f,  0.0f}},	// LR1 : ���҃��[�������獶�҃s�b�`��
	{{ 15.0f,   0.0f,   0.0f},{  0.0f,  1.0f,  0.0f}},	// LP1 : ���҃s�b�`�����獶�G��s�b�`��
	{{  0.0f,   0.0f,-105.0f},{  0.0f,  1.0f,  0.0f}},	// LP2 : ���G��s�b�`�����獶�G���s�b�`��
	{{  0.0f,   0.0f, -41.0f},{  0.0f,  1.0f,  0.0f}},	// LP3 : ���G���s�b�`�����獶����s�b�`��
	{{  0.0f,   0.0f,-105.0f},{  0.0f,  1.0f,  0.0f}},	// LP4 : ������s�b�`�����獶���񃍁[����
	{{  0.0f,   0.0f,   0.0f},{  1.0f,  0.0f,  0.0f}},	// LR2 : �����񃍁[�������獶����
	{{  0.0f,   0.0f, -43.5f},{  0.0f,  0.0f,  0.0f}},	// LF  : ������
//	�����S -> �E���
	{{  0.0f, -61.0f,   0.0f},{  0.0f,  1.0f,  0.0f}},	// RSP : �E���s�b�`�����烍�[����
	{{  0.0f, -17.9f, -41.8f},{  1.0f,  0.0f,  0.0f}},	// RSR : �E�����[��������E�r��[
	{{  0.0f, -30.0f,-247.6f},{  0.0f,  0.0f,  0.0f}},	// RH  : �E�r��[
//	�����S -> �����
	{{  0.0f,  61.0f,   0.0f},{  0.0f,  1.0f,  0.0f}},	// LSP : �����s�b�`�����烍�[����
	{{  0.0f,  17.9f, -41.8f},{  1.0f,  0.0f,  0.0f}},	// LSR : �������[�������獶�r��[
	{{  0.0f,  30.0f,-247.6f},{  0.0f,  0.0f,  0.0f}},	// LH  : ���r��[
};

// �����N�̐ڑ�

struct link_connect_T {
	int sister;
	int child;
	int mother;
};

const int NON = -1;

static const struct link_connect_T LINK_CONNECT[LINK_NUM] =
{
	{ NON, NON, HT  },	// CAM : �J�����̃����N�i���������߂邽�߁j
	{ NON, CAM, HP  },	// HT  : ���̃`���g������J���� (Accelite�͌Œ�)
	{ NON, HT , SH  },	// HP  : ���̃p��������`���g��
	{ NON, HP , CS  },	// SH  : �����S���瓪�̃p����
	{ NON, SH , CC  },	// CS  : �����猨���S
	{ RY , CS , NON },	// CC  : �����猨���S
//	�� -> �E����
	{ LY , RR1, CC  },	// RY  : �E�҃��[������E�҃��[����
	{ NON, RP1, RY  },	// RR1 : �E�҃��[��������E�҃s�b�`��
	{ NON, RP2, RR1 },	// RP1 : �E�҃s�b�`������E�G��s�b�`��
	{ NON, RP3, RP1 },	// RP2 : �E�G��s�b�`������E�G���s�b�`��
	{ NON, RP4, RP2 },	// RP3 : �E�G���s�b�`������E����s�b�`��
	{ NON, RR2, RP3 },	// RP4 : �E����s�b�`������E���񃍁[����
	{ NON, RF , RP4 },	// RR2 : �E���񃍁[��������E����
	{ NON, NON, RR2 },	// RF  : �E����
//	�� -> ������
	{ RSP, LR1, CC  },	// LY  : ���҃��[�����獶�҃��[����
	{ NON, LP1, LY  },	// LR1 : ���҃��[�������獶�҃s�b�`��
	{ NON, LP2, LR1 },	// LP1 : ���҃s�b�`�����獶�G��s�b�`��
	{ NON, LP3, LP1 },	// LP2 : ���G��s�b�`�����獶�G���s�b�`��
	{ NON, LP4, LP2 },	// LP3 : ���G���s�b�`�����獶����s�b�`��
	{ NON, LR2, LP3 },	// LP4 : ������s�b�`�����獶���񃍁[����
	{ NON, LF , LP4 },	// LR2 : �����񃍁[�������獶����
	{ NON, NON, LR2 },	// LF  : ������
//	�����S -> �E���
	{ LSP, RSR, CS  },	// RSP : �E���s�b�`�����烍�[����
	{ NON, RH , RSP },	// RSR : �E�����[��������E�r��[
	{ NON, NON, RSR },	// RH  : �E�r��[
//	�����S -> �����
	{ NON, LSR, CS  },	// LSP : �E���s�b�`�����烍�[����
	{ NON, LH , LSP },	// LSR : �E�����[��������E�r��[
	{ NON, NON, LSR },	// LH  : �E�r��[
};

#endif

}
