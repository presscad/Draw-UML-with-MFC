#pragma once


// DlgZ �Ի���

class DlgZ : public CDialog
{
	DECLARE_DYNAMIC(DlgZ)

public:
	DlgZ(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DlgZ();

// �Ի�������
	enum { IDD = IDD_Z };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString n_edit;
};
