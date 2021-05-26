//-------------------------
#include"DxLib.h"



//変数の定義
//------------------------

//WinMain関数
//-----------------------
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{
	//システム処理
	//----------------------
	SetWindowText("sample");
	SetGraphMode(640, 480, 0);
	SetMainWindowText("2016194_柴田伊織");
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	//_dbgSetUp(640, 480, 255);

	//変数の初期化
	//-----------------

	//ゲームループ
	//-------------------
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		//_dbgStartDraw();
		//ゲームのメイン処理
		//---------------------

		//描画処理
		//-----------------------
		SetDrawScreen(DX_SCREEN_BACK);		//描画する画面を裏の画面に設定
		ClearDrawScreen();					//描画する画面の内容を消去する

		//_dbgAddDraw();

		ScreenFlip();						//裏の画面を表の画面の瞬間コピー
	}


	//システム終了処理
	//----------------------
	DxLib_End();			//DXライブラリの終了処理
	return 0;				//ゲームの終了
}