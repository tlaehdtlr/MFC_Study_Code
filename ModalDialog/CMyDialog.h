#pragma once
#include "afxdialogex.h"


// CMyDialog dialog

class CMyDialog : public CDialog
{
	DECLARE_DYNAMIC(CMyDialog)

public:
	CMyDialog(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CMyDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CComboBox m_combo;
	CString m_str;
	int m_font;

	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnBnClickedButton1();
//	afx_msg void OnBnClickedOk();
};
