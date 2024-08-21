// CalculationDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Calculation.h"
#include "CalculationDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculationDlg dialog

CCalculationDlg::CCalculationDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCalculationDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCalculationDlg)
	m_jia1 = 0.0;
	m_jia2 = 0.0;
	m_jia_result = 0.0;
	m_jian1 = 0.0;
	m_jian2 = 0.0;
	m_jian_result = 0.0;
	m_cheng1 = 0.0;
	m_cheng2 = 0.0;
	m_cheng_result = 0.0;
	m_chu1 = 0.0;
	m_chu2 = 0.0;
	m_chu_result = 0.0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCalculationDlg)
	DDX_Text(pDX, IDC_EDIT1, m_jia1);
	DDX_Text(pDX, IDC_EDIT2, m_jia2);
	DDX_Text(pDX, IDC_EDIT3, m_jia_result);
	DDX_Text(pDX, IDC_EDIT4, m_jian1);
	DDX_Text(pDX, IDC_EDIT5, m_jian2);
	DDX_Text(pDX, IDC_EDIT6, m_jian_result);
	DDX_Text(pDX, IDC_EDIT7, m_cheng1);
	DDX_Text(pDX, IDC_EDIT8, m_cheng2);
	DDX_Text(pDX, IDC_EDIT9, m_cheng_result);
	DDX_Text(pDX, IDC_EDIT10, m_chu1);
	DDX_Text(pDX, IDC_EDIT11, m_chu2);
	DDX_Text(pDX, IDC_EDIT12, m_chu_result);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCalculationDlg, CDialog)
	//{{AFX_MSG_MAP(CCalculationDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculationDlg message handlers

BOOL CCalculationDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCalculationDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalculationDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalculationDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCalculationDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	m_jia_result = m_jia1+m_jia2;	
	UpdateData(FALSE);

	UpdateData();
	m_jian_result = m_jian1-m_jian2;
    UpdateData(FALSE);

    UpdateData();
	m_cheng_result = m_cheng1*m_cheng2;
    UpdateData(FALSE);

    if(m_chu2)
	{UpdateData();
	 m_chu_result = m_chu1/m_chu2;
	 UpdateData(FALSE);
	}

}
