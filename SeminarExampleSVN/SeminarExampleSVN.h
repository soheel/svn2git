
// SeminarExampleSVN.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CSeminarExampleSVNApp:
// �� Ŭ������ ������ ���ؼ��� SeminarExampleSVN.cpp�� �����Ͻʽÿ�.
//

class CSeminarExampleSVNApp : public CWinAppEx
{
public:
	CSeminarExampleSVNApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CSeminarExampleSVNApp theApp;