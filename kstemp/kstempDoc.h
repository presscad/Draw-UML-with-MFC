// kstempDoc.h : CkstempDoc ��Ľӿ�
//
#include<list>
using namespace std;
#include"Class.h"
#include"arrow.h"
#include<iostream>
using namespace std;

#pragma once


class CkstempDoc : public CDocument
{
protected: // �������л�����
	CkstempDoc();
	DECLARE_DYNCREATE(CkstempDoc)

// ����
public:
	list<base*>base;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CkstempDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


