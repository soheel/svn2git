
// SeminarExampleSVNDlg.h : ��� ����
//

#pragma once


// CSeminarExampleSVNDlg ��ȭ ����
class CSeminarExampleSVNDlg : public CDialog
{
// �����Դϴ�.
public:
	CSeminarExampleSVNDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_SEMINAREXAMPLESVN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
