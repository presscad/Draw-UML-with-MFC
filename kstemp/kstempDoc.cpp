// kstempDoc.cpp : CkstempDoc ���ʵ��
//

#include "stdafx.h"
#include "kstemp.h"

#include "kstempDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CkstempDoc

IMPLEMENT_DYNCREATE(CkstempDoc, CDocument)

BEGIN_MESSAGE_MAP(CkstempDoc, CDocument)
END_MESSAGE_MAP()


// CkstempDoc ����/����

CkstempDoc::CkstempDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CkstempDoc::~CkstempDoc()
{
}

BOOL CkstempDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CkstempDoc ���л�

void CkstempDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CkstempDoc ���

#ifdef _DEBUG
void CkstempDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CkstempDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CkstempDoc ����
