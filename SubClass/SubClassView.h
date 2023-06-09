
// SubClassView.h : interface of the CSubClassView class
//

#pragma once
#include "CMyEdit.h"

class CSubClassView : public CFormView
{
protected: // create from serialization only
	CSubClassView() noexcept;
	DECLARE_DYNCREATE(CSubClassView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_SUBCLASS_FORM };
#endif

// Attributes
public:
	CSubClassDoc* GetDocument() const;
	CMyEdit m_edit2;
// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CSubClassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CMyEdit m_edit1;
};

#ifndef _DEBUG  // debug version in SubClassView.cpp
inline CSubClassDoc* CSubClassView::GetDocument() const
   { return reinterpret_cast<CSubClassDoc*>(m_pDocument); }
#endif

