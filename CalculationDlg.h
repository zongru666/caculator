// CalculationDlg.h : header file
//

#if !defined(AFX_CALCULATIONDLG_H__4067AD91_9931_462C_A628_7E0FE1C2BE2D__INCLUDED_)
#define AFX_CALCULATIONDLG_H__4067AD91_9931_462C_A628_7E0FE1C2BE2D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCalculationDlg dialog

class CCalculationDlg : public CDialog
{
// Construction
public:
	CCalculationDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCalculationDlg)
	enum { IDD = IDD_CALCULATION_DIALOG };
	double	m_jia1;
	double	m_jia2;
	double	m_jia_result;
	double	m_jian1;
	double	m_jian2;
	double	m_jian_result;
	double	m_cheng1;
	double	m_cheng2;
	double	m_cheng_result;
	double	m_chu1;
	double	m_chu2;
	double	m_chu_result;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalculationDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCalculationDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCULATIONDLG_H__4067AD91_9931_462C_A628_7E0FE1C2BE2D__INCLUDED_)
