#ifndef _USGFW2_01_H_
#define _USGFW2_01_H_

typedef struct tagUSGFWBITMAPPARAMS
{
	ULONG dwFlags;
	HDC hdc;
	RECT rcSrc;
	RECT rcDest;
	FLOAT fAlpha;
	COLORREF clrSrcKey;
} USGFWBITMAPPARAMS, *PUSGFWBITMAPPARAMS;

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

// {D1EC7724-B5DC-4c19-B510-4FF303EA8DAC}
DEFINE_GUID(IID_CCtrlScanConverter, 
	0xd1ec7724, 0xb5dc, 0x4c19, 0xb5, 0x10, 0x4f, 0xf3, 0x3, 0xea, 0x8d, 0xac);

// {8C82ABED-3312-48c0-AED9-B4EA3414FE07}
DEFINE_GUID(IID_CCtrlStreamState, 
	0x8c82abed, 0x3312, 0x48c0, 0xae, 0xd9, 0xb4, 0xea, 0x34, 0x14, 0xfe, 0x7);

// {EEE1A031-7244-4c00-B05F-3F24AED4DA72}
DEFINE_GUID(IID_CCtrlCineState, 
	0xeee1a031, 0x7244, 0x4c00, 0xb0, 0x5f, 0x3f, 0x24, 0xae, 0xd4, 0xda, 0x72);

// {85F93B34-EF9B-496a-B2E1-0E8DAEA69EE2}
DEFINE_GUID(IID_CUsgControl, 
	0x85f93b34, 0xef9b, 0x496a, 0xb2, 0xe1, 0xe, 0x8d, 0xae, 0xa6, 0x9e, 0xe2);

// {CE76D285-17D9-41a3-8D5E-E0D4C91100DF}
DEFINE_GUID(IID_CUsgDopplerMapCFM, 
	0xce76d285, 0x17d9, 0x41a3, 0x8d, 0x5e, 0xe0, 0xd4, 0xc9, 0x11, 0x0, 0xdf);

// {780D10E4-F987-4499-9E51-2BAB87B9FF7C}
DEFINE_GUID(IID_CUsgDopplerMapPDI, 
	0x780d10e4, 0xf987, 0x4499, 0x9e, 0x51, 0x2b, 0xab, 0x87, 0xb9, 0xff, 0x7c);

// {D83ED9AC-DA20-466f-AD51-339BDADEB2AA}
DEFINE_GUID(IID_CUsgDopplerMapDPDI, 
	0xd83ed9ac, 0xda20, 0x466f, 0xad, 0x51, 0x33, 0x9b, 0xda, 0xde, 0xb2, 0xaa);



// {7CB05E8F-0CCE-4264-B830-02BF594A16BF}
//DEFINE_GUID(FORMAT_CFMUltrasoundInfo, 
//	0x7cb05e8f, 0xcce, 0x4264, 0xb8, 0x30, 0x2, 0xbf, 0x59, 0x4a, 0x16, 0xbf);

// {D3867668-F487-401b-AFB7-640343BAEE43}
//DEFINE_GUID(FORMAT_PDIUltrasoundInfo, 
//			0xd3867668, 0xf487, 0x401b, 0xaf, 0xb7, 0x64, 0x3, 0x43, 0xba, 0xee, 0x43);

// {E1FDE3F8-FDB8-4ca1-8904-BC20BAFA0991}
//DEFINE_GUID(FORMAT_DPDIUltrasoundInfo,
//			0xe1fde3f8, 0xfdb8, 0x4ca1, 0x89, 0x4, 0xbc, 0x20, 0xba, 0xfa, 0x9, 0x91);

// {F50DB3DB-603A-4f0d-BC9E-6C650B5CBCDA}
//DEFINE_GUID(FORMAT_PWUltrasoundInfo, 
//			0xf50db3db, 0x603a, 0x4f0d, 0xbc, 0x9e, 0x6c, 0x65, 0xb, 0x5c, 0xbc, 0xda);

// {F27413B6-A115-40e3-9EC5-08EC1880380F}
DEFINE_GUID(CLSID_ScanConverter2D, 
			0xf27413b6, 0xa115, 0x40e3, 0x9e, 0xc5, 0x8, 0xec, 0x18, 0x80, 0x38, 0xf);

// {C5B20D51-412F-4e95-9FBD-4727B16A7DE6}
DEFINE_GUID(CLSID_UsgfwMixer, 
			0xc5b20d51, 0x412f, 0x4e95, 0x9f, 0xbd, 0x47, 0x27, 0xb1, 0x6a, 0x7d, 0xe6);

// UsgfW custom video renderer GUID
// {7078CA52-9930-4e6c-9D28-674529B73F06}
DEFINE_GUID(CLSID_UsgfwVideoRenderer, 
			0x7078ca52, 0x9930, 0x4e6c, 0x9d, 0x28, 0x67, 0x45, 0x29, 0xb7, 0x3f, 0x6);


// {FF8FFD25-7F9B-475b-92D4-F160C3C50F22}
DEFINE_GUID(IID_IUsgfwMixerBitmap,
			0xff8ffd25, 0x7f9b, 0x475b, 0x92, 0xd4, 0xf1, 0x60, 0xc3, 0xc5, 0xf, 0x22);

DECLARE_INTERFACE_(IUsgfwMixerBitmap, IUnknown)
{
	STDMETHOD(GetAlphaBitmapParameters) (THIS_
		PUSGFWBITMAPPARAMS pBmpParams
		) PURE;
	STDMETHOD(SetAlphaBitmap) (THIS_
		PUSGFWBITMAPPARAMS pBmpParams
		) PURE;
	STDMETHOD(UpdateAlphaBitmapParameters) (THIS_
		PUSGFWBITMAPPARAMS pBmpParams
		) PURE;
};

// {6C75D39B-E2D0-4d5f-B65E-D45DF9D51CA0}
DEFINE_GUID(IID_IUsgfwFilterControl, 
			0x6c75d39b, 0xe2d0, 0x4d5f, 0xb6, 0x5e, 0xd4, 0x5d, 0xf9, 0xd5, 0x1c, 0xa0);
DECLARE_INTERFACE_(IUsgfwFilterControl, IUnknown)
{
	STDMETHOD(SetNumberOfStreams)(THIS_ 
		DWORD dwMaxStreams
		) PURE;
	STDMETHOD(GetNumberOfStreams)(THIS_
		DWORD *pdwMaxStreams
		) PURE;
	STDMETHOD(SetVideoPosition)(THIS_
		const LPRECT lpSRCRect, 
		const LPRECT lpDSTRect
		) PURE;
	STDMETHOD(GetVideoPosition)(THIS_
		LPRECT lpSRCRect, 
		LPRECT lpDSTRect
		) PURE;
	STDMETHOD(SetVideoOutputWindow)(THIS_
		HWND hwnd
		) PURE;
	STDMETHOD(RepaintVideo)(THIS_
		HWND hwnd, 
		HDC hdc
		) PURE;
	STDMETHOD(DisplayModeChanged)(THIS_
		void
		) PURE;
	STDMETHOD(GetCurrentImage)(THIS_
		BYTE **lpDib
		) PURE;
	STDMETHOD(SetBorderColor)(THIS_
		COLORREF Clr
		) PURE;
	STDMETHOD(GetBorderColor)(THIS_
		COLORREF *lpClr
		) PURE;
	STDMETHOD(SetColorKey)(THIS_
		COLORREF Clr
		) PURE;
	STDMETHOD(GetColorKey)(THIS_
		COLORREF *lpClr
		) PURE;
};


// {A14F9F07-7875-4edb-BF94-EF941B6DA6B6}
DEFINE_GUID(IID_IUsgfwMixerControl, 
			0xa14f9f07, 0x7875, 0x4edb, 0xbf, 0x94, 0xef, 0x94, 0x1b, 0x6d, 0xa6, 0xb6);
DECLARE_INTERFACE_(IUsgfwMixerControl, IUnknown)
{
	STDMETHOD(SetAlpha)(THIS_
		DWORD dwStreamID,
		float Alpha) PURE;
	STDMETHOD(GetAlpha)(THIS_
		DWORD dwStreamID,
		float *pAlpha) PURE;
	STDMETHOD(SetZOrder)(THIS_
		DWORD dwStreamID,
		DWORD dwZ) PURE;
	STDMETHOD(GetZOrder)(THIS_
		DWORD dwStreamID,
		DWORD *pZ) PURE;
	STDMETHOD(SetOutputRect)(THIS_
		DWORD dwStreamID,
		const RECT *pRect) PURE;
	STDMETHOD(GetOutputRect)(THIS_
		DWORD dwStreamID,
		RECT *pRect) PURE;
	STDMETHOD(SetBackgroundClr)(THIS_
		COLORREF ClrBkg) PURE;
	STDMETHOD(GetBackgroundClr)(THIS_
		COLORREF *lpClrBkg) PURE;
	STDMETHOD(SetMixingPrefs)(THIS_ 
		DWORD dwMixerPrefs) PURE;
	STDMETHOD(GetMixingPrefs)(THIS_
		DWORD *pdwMixerPrefs) PURE;
};





#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif	//	_USGFW2_01_H_
