
// MessageReflectionView.h : interface of the CMessageReflectionView class
//

#pragma once
#include "CMyListBox.h"

class CMessageReflectionView : public CFormView
{
protected: // create from serialization only
	CMessageReflectionView() noexcept;
	DECLARE_DYNCREATE(CMessageReflectionView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MESSAGEREFLECTION_FORM };
#endif

// Attributes
public:
	CMessageReflectionDoc* GetDocument() const;

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
	virtual ~CMessageReflectionView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	CMyListBox m_list;
};

#ifndef _DEBUG  // debug version in MessageReflectionView.cpp
inline CMessageReflectionDoc* CMessageReflectionView::GetDocument() const
   { return reinterpret_cast<CMessageReflectionDoc*>(m_pDocument); }
#endif

