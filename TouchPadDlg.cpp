// TouchPadDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "TouchPadDlg.h"
#include "afxdialogex.h"


// TouchPadDlg 对话框

IMPLEMENT_DYNAMIC(TouchPadDlg, CDialog)

TouchPadDlg::TouchPadDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

TouchPadDlg::~TouchPadDlg()
{
}

void TouchPadDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TouchPadDlg, CDialog)
	ON_BN_CLICKED(IDOK, &TouchPadDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// TouchPadDlg 消息处理程序


void TouchPadDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnOK();
	isRunning = !isRunning;
}