//-------------------------
#include"DxLib.h"



//�ϐ��̒�`
//------------------------

//WinMain�֐�
//-----------------------
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{
	//�V�X�e������
	//----------------------
	SetWindowText("sample");
	SetGraphMode(640, 480, 0);
	SetMainWindowText("2016194_�ēc�ɐD");
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	//_dbgSetUp(640, 480, 255);

	//�ϐ��̏�����
	//-----------------

	//�Q�[�����[�v
	//-------------------
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		//_dbgStartDraw();
		//�Q�[���̃��C������
		//---------------------

		//�`�揈��
		//-----------------------
		SetDrawScreen(DX_SCREEN_BACK);		//�`�悷���ʂ𗠂̉�ʂɐݒ�
		ClearDrawScreen();					//�`�悷���ʂ̓��e����������

		//_dbgAddDraw();

		ScreenFlip();						//���̉�ʂ�\�̉�ʂ̏u�ԃR�s�[
	}


	//�V�X�e���I������
	//----------------------
	DxLib_End();			//DX���C�u�����̏I������
	return 0;				//�Q�[���̏I��
}