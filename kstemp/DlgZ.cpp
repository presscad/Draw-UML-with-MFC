// DlgZ.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "kstemp.h"
#include "DlgZ.h"


// DlgZ �Ի���

IMPLEMENT_DYNAMIC(DlgZ, CDialog)

DlgZ::DlgZ(CWnd* pParent /*=NULL*/)
	: CDialog(DlgZ::IDD, pParent)
	, n_edit(_T(""))
{

}

DlgZ::~DlgZ()
{
}

void DlgZ::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, n_edit);
}


BEGIN_MESSAGE_MAP(DlgZ, CDialog)
END_MESSAGE_MAP()


// DlgZ ��Ϣ�������
