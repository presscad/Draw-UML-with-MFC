// kstempView.h : CkstempView ��Ľӿ�
//


#pragma once


class CkstempView : public CView
{
	int x,y,cx,cy,select,ctrl,lb;//select���ж���Ҫ���໹�ǰ����ǽӿڵȣ�ctrl��ʾ��Ϊ lb������ʵ�ְ��²��ƶ��ı�־λ
protected: // �������л�����
	CkstempView();
	DECLARE_DYNCREATE(CkstempView)

// ����
public:
	CkstempDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CkstempView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClass();
	afx_msg void OnInterface();
	afx_msg void OnPackage();
	afx_msg void OnRelation();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnGuanLian();
	afx_msg void OnJiCheng();
	afx_msg void OnShiXian();
	afx_msg void OnZuHe();
	afx_msg void OnJuHe();
	afx_msg void Onleft();
	afx_msg void On32785();
	afx_msg void On32788();
	afx_msg void On32789();
	afx_msg void On32786();
	afx_msg void On32787();
};

#ifndef _DEBUG  // kstempView.cpp �еĵ��԰汾
inline CkstempDoc* CkstempView::GetDocument() const
   { return reinterpret_cast<CkstempDoc*>(m_pDocument); }
#endif

