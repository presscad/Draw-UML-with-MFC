// DlgF.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "kstemp.h"
#include "DlgF.h"


// DlgF �Ի���

IMPLEMENT_DYNAMIC(DlgF, CDialog)

DlgF::DlgF(CWnd* pParent /*=NULL*/)
	: CDialog(DlgF::IDD, pParent)
	, n_edit(_T(""))
	, f_type(_T(""))
	, f_p(_T(""))
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

	EnableAutomation();

}

DlgF::~DlgF()
{
}

void DlgF::OnFinalRelease()
{
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease�����ཫ�Զ�
	// ɾ���ö����ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

	CDialog::OnFinalRelease();
}

void DlgF::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, n_edit);
	DDX_CBString(pDX, COMBOF, f_type);
	DDX_CBString(pDX, COMBO, f_p);
}


BEGIN_MESSAGE_MAP(DlgF, CDialog)
	ON_CBN_SELCHANGE(COMBO, &DlgF::OnCbnSelchangeCombo)
	ON_LBN_SELCHANGE(IDC_LIST1, &DlgF::OnLbnSelchangeList1)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(DlgF, CDialog)
END_DISPATCH_MAP()

// ע��: ������� IID_IDlgF ֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡��� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {1FA7C89C-5D34-4740-8042-51D9705F83A0}
static const IID IID_IDlgF =
{ 0x1FA7C89C, 0x5D34, 0x4740, { 0x80, 0x42, 0x51, 0xD9, 0x70, 0x5F, 0x83, 0xA0 } };

BEGIN_INTERFACE_MAP(DlgF, CDialog)
	INTERFACE_PART(DlgF, IID_IDlgF, Dispatch)
END_INTERFACE_MAP()


// DlgF ��Ϣ�������

void DlgF::OnCbnSelchangeCombo()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}

void DlgF::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
