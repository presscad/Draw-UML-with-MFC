// DlgV.cpp : ʵ���ļ�

#include "stdafx.h"
#include "kstemp.h"
#include "DlgV.h"
#include <list>
#include "base.h"
using namespace std;


// DlgV �Ի���

IMPLEMENT_DYNAMIC(DlgV, CDialog)

DlgV::DlgV(CWnd* pParent /*=NULL*/)
	: CDialog(DlgV::IDD, pParent)
	, n_edit(_T(""))
	, v_type(_T(""))
	, v_p(_T(""))
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

	EnableAutomation();

}

DlgV::~DlgV()
{
}

void DlgV::OnFinalRelease()
{
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease�����ཫ�Զ�
	// ɾ���ö����ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

	CDialog::OnFinalRelease();
}

void DlgV::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, n_edit);
	DDX_CBString(pDX, COMBOV, v_type);
	//DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_CBString(pDX, COMBO, v_p);
}


BEGIN_MESSAGE_MAP(DlgV, CDialog)
	ON_CBN_SELCHANGE(COMBOV, &DlgV::OnCbnSelchangeCombov)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(DlgV, CDialog)
END_DISPATCH_MAP()

// ע��: ������� IID_IDlgV ֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡��� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {AE9A55F2-DEE1-4566-AE95-37C2B47794A5}
static const IID IID_IDlgV =
{ 0xAE9A55F2, 0xDEE1, 0x4566, { 0xAE, 0x95, 0x37, 0xC2, 0xB4, 0x77, 0x94, 0xA5 } };

BEGIN_INTERFACE_MAP(DlgV, CDialog)
	INTERFACE_PART(DlgV, IID_IDlgV, Dispatch)
END_INTERFACE_MAP()


// DlgV ��Ϣ�������
DlgV::DlgV(CkstempDoc* p)
{
	pDoc=p;
	//setList();
}
/*void DlgV::setList()
{
		list<base*>::iterator it;	
		for(it=pDoc->base.begin();it!=pDoc->base.end();it++)//Ѱ��˫��ͼԪ
			if((*it)->dbClk!=0) break;//Ѱ��˫��λ��
		CRect mRect;
		m_list.GetWindowRect(&mRect);     //��ȡ�ؼ���������
		int kuan = mRect.Width();
		m_list.InsertColumn(0,_T("��������"),LVCFMT_LEFT,kuan/4,-1);
		//m_list.InsertColumn(1,_T("������"),LVCFMT_CENTER,kuan/4,-1);

		DWORD dwStyle = m_list.GetExtendedStyle(); //��ȡ��ǰ��չ��ʽ
		dwStyle |= LVS_EX_FULLROWSELECT; //ѡ��ĳ��ʹ���и�����report���ʱ��
		dwStyle |= LVS_EX_GRIDLINES; //�����ߣ�report���ʱ��
		dwStyle |= LVS_EX_CHECKBOXES; //itemǰ����checkbox�ؼ�
		m_list.SetExtendedStyle(dwStyle); //������չ���
}*/
void DlgV::OnCbnSelchangeCombov()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
