#pragma once

// CDlgCertification ダイアログ

class CDlgCertification : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgCertification)

private:
	int m_selectedIndex;
	std::vector<CefRefPtr<CefX509Certificate>> m_certificates;
	CefString m_host;

public:
	CDlgCertification(CWnd* pParent = nullptr); // 標準コンストラクター
	CDlgCertification(CefString host,
			  std::vector<CefRefPtr<CefX509Certificate>> certificates,
			  CWnd* pParent = nullptr);
	virtual ~CDlgCertification();
	int SelectedIndex();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum
	{
		IDD = IDD_DLG_CERTIFICATION
	};
#endif

private:
	CString GetSerialNumberAsHexString(const CefRefPtr<CefX509Certificate> certificate);
	CString GetTimeString(const CefTime& value);
	CString GetPrincipalString(const CefRefPtr<CefX509CertPrincipal> principal);

protected:
	virtual void DoDataExchange(CDataExchange* pDX); // DDX/DDV サポート
	BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCertificationCombo();
	afx_msg void OnBnClickedOk();

	CComboBox certificationComboBox;
};
