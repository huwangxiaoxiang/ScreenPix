
// 屏幕拾色器Dlg.h : 头文件
//

#pragma once


// C屏幕拾色器Dlg 对话框
class C屏幕拾色器Dlg : public CDialogEx
{
// 构造
public:
	C屏幕拾色器Dlg(CWnd* pParent = NULL);	// 标准构造函数
	HWND hwnd;

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	DEVMODE screen;//屏幕分辨率信息
	CRect *example=new CRect(CPoint(272,89), CPoint(356,119));

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	CString temp[16] = { L"0",L"1",L"2",L"3", L"4",L"5", L"6",L"7", L"8",L"9", L"A",L"B", L"C",L"D", L"E",L"F" };
	void MoveTo(int x, int y);
	int TransformWidth(int);
	int TransformHeight(int);
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);

protected:
	// 鼠标绝对坐标
	CString absoluteXY;
	// 鼠标相对坐标
	CString relativeXY;
	// 起点坐标
	CString originXY;
	// 该位置RGB颜色值
	CString colorRGB;
	// 16进制颜色值
	CString color16;
	// 定位起点坐标x
	int OriginX;
	// 定位起点坐标Y值
	int OriginY;
	// 进程ID
	DWORD processID;


	CString to16(int a);

public:
	afx_msg void OnStnClickedOriginexy();
	afx_msg void OnBnClickedButton2();
protected:
	CEdit OriXEdit;
	int orix=0;
	int oriy = 0;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
	// 带标题栏窗口信息
	CString titlteinfo;
	// 不带标题栏窗口信息
	CString ntitleinfo;
	// 带标题栏中心坐标
	CString title_center;
	// 不带标题栏中心坐标
	CString ntitle_center;
};
