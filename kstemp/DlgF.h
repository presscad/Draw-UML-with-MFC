#pragma once


// DlgF �Ի���

class DlgF : public CDialog
{
	DECLARE_DYNAMIC(DlgF)

public:
	DlgF(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DlgF();

	virtual void OnFinalRelease();

// �Ի�������
	enum { IDD = IDD_F };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
public:
	CString n_edit;
	afx_msg void OnCbnSelchangeCombo();
	CString f_type;
	afx_msg void OnLbnSelchangeList1();
	CString f_p;
};
