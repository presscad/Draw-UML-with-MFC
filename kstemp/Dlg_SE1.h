#pragma once


// Dlg_SE1 �Ի���

class Dlg_SE1 : public CDialog
{
	DECLARE_DYNAMIC(Dlg_SE1)

public:
	Dlg_SE1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Dlg_SE1();

// �Ի�������
	enum { IDD = IDD_SE1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString n_edit;
};
