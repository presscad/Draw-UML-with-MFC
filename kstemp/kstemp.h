// kstemp.h : kstemp Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CkstempApp:
// �йش����ʵ�֣������ kstemp.cpp
//

class CkstempApp : public CWinApp
{
public:
	CkstempApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CkstempApp theApp;