/* 
 *
 * 
 * VideoEye
 *
 */



#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CVideoEyeApp:
// 有关此类的实现，请参阅 VideoEye.cpp
//

class CVideoEyeApp : public CWinApp
{
public:
	CVideoEyeApp();

// 重写
public:
	virtual BOOL InitInstance();
	//加载语言配置
	void LoadLaguage();
// 实现

	DECLARE_MESSAGE_MAP()
};

extern CVideoEyeApp theApp;
