#pragma once
#include "afxwin.h"
#include "base.h"
#include "kstempDoc.h"

// DlgV �Ի���

class DlgV : public CDialog
{
	DECLARE_DYNAMIC(DlgV)
	CkstempDoc* pDoc;
public:
	DlgV(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DlgV();
	DlgV(CkstempDoc* p);
	//void setList();

	virtual void OnFinalRelease();

// �Ի�������
	enum { IDD = IDD_V };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
public:
	CString n_edit;
	CString v_type;
	//CListCtrl m_list;
	afx_msg void OnCbnSelchangeCombov();
	CString v_p;
};
