// DlgN.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "kstemp.h"
#include "DlgN.h"


// DlgN �Ի���

IMPLEMENT_DYNAMIC(DlgN, CDialog)

DlgN::DlgN(CWnd* pParent /*=NULL*/)
	: CDialog(DlgN::IDD, pParent)
	, n_edit(_T(""))
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

	EnableAutomation();

}

DlgN::~DlgN()
{
}

void DlgN::OnFinalRelease()
{
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease�����ཫ�Զ�
	// ɾ���ö����ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

	CDialog::OnFinalRelease();
}

void DlgN::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, EDIT_NAME, n_edit);
}


BEGIN_MESSAGE_MAP(DlgN, CDialog)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(DlgN, CDialog)
END_DISPATCH_MAP()

// ע��: ������� IID_IDlgN ֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡��� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {34218BF5-87C2-404E-9159-55024AF94F16}
static const IID IID_IDlgN =
{ 0x34218BF5, 0x87C2, 0x404E, { 0x91, 0x59, 0x55, 0x2, 0x4A, 0xF9, 0x4F, 0x16 } };

BEGIN_INTERFACE_MAP(DlgN, CDialog)
	INTERFACE_PART(DlgN, IID_IDlgN, Dispatch)
END_INTERFACE_MAP()


// DlgN ��Ϣ�������
