
// ModalDialogView.h : interface of the CModalDialogView class
//

#pragma once


class CModalDialogView : public CView
{
protected: // create from serialization only
	CModalDialogView() noexcept;
	DECLARE_DYNCREATE(CModalDialogView)

// Attributes
public:
	CModalDialogDoc* GetDocument() const;
	CString m_str;
	int m_font;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CModalDialogView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in ModalDialogView.cpp
inline CModalDialogDoc* CModalDialogView::GetDocument() const
   { return reinterpret_cast<CModalDialogDoc*>(m_pDocument); }
#endif

