#ifndef BASE_H
#define BASE_H
#include<iostream>
#include<list>
using namespace std;

//��----1
//�ӿ�--2
//��----3
//ע��--4

class base
{
protected:
	int cal; // state �ж��Ƿ�ѡ�� connected�ж��Ƿ����  calУ׼
	
public:
	list<base*> lines;//��class��ص���
	int x1,x2,y1,y2;
	int dbClk;
	int ctrl,choose,state,connect1,connect2,type;
	
	
	base(int a,int b,int c,int e);
	virtual int onpressLB(int x,int y)=0;
	int onrelease();
	virtual void onmove(int cx,int cy)=0;
	virtual void ondraw(CDC *pDC)=0;
	virtual int DblClk(CPoint point)=0;
	int getx1();
	int gety1();
	int getx2();
	int gety2();
	virtual void setName(CString str)=0;
	virtual void setV(CString str)=0;
	virtual void setF(CString str)=0;
	virtual void deleteline(base* b)=0;
	virtual void addline(base* b)=0;
	virtual void setend(base* b)=0;
	virtual void setstart(base* b)=0;
//	virtual list<base*> getlines()=0;
	virtual base* getend()=0;
	virtual base* getstart()=0;
	//virtual void output(ostream &out){};   ���ʵ��
};

#endif 