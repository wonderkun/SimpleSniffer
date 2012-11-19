// SimpleSnifferView.cpp : implementation of the CSimpleSnifferView class
//

#include "stdafx.h"
#include "SimpleSniffer.h"

#include "SimpleSnifferDoc.h"
#include "SimpleSnifferView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSimpleSnifferView

IMPLEMENT_DYNCREATE(CSimpleSnifferView, CFormView)

BEGIN_MESSAGE_MAP(CSimpleSnifferView, CFormView)
	//{{AFX_MSG_MAP(CSimpleSnifferView)
	ON_BN_CLICKED(IDC_START, OnStart)
	ON_BN_CLICKED(IDC_STOP, OnStop)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSimpleSnifferView construction/destruction

CSimpleSnifferView::CSimpleSnifferView()
	: CFormView(CSimpleSnifferView::IDD)
{
	//{{AFX_DATA_INIT(CSimpleSnifferView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CSimpleSnifferView::~CSimpleSnifferView()
{
}

void CSimpleSnifferView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSimpleSnifferView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BOOL CSimpleSnifferView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CSimpleSnifferView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}

/////////////////////////////////////////////////////////////////////////////
// CSimpleSnifferView printing

BOOL CSimpleSnifferView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSimpleSnifferView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSimpleSnifferView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CSimpleSnifferView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CSimpleSnifferView diagnostics

#ifdef _DEBUG
void CSimpleSnifferView::AssertValid() const
{
	CFormView::AssertValid();
}

void CSimpleSnifferView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CSimpleSnifferDoc* CSimpleSnifferView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSimpleSnifferDoc)));
	return (CSimpleSnifferDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSimpleSnifferView message handlers

void CSimpleSnifferView::OnStart() 
{
	// TODO: Add your control notification handler code here
	
}

void CSimpleSnifferView::OnStop() 
{
	// TODO: Add your control notification handler code here
	
}