#pragma once


// DlgN �Ի���

class DlgN : public CDialog
{
	DECLARE_DYNAMIC(DlgN)

public:
	DlgN(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DlgN();

	virtual void OnFinalRelease();

// �Ի�������
	enum { IDD = IDD_N };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
public:
	CString n_edit;
};
