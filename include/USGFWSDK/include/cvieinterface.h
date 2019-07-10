// {7809BE2A-6995-44f4-95A0-3380B6818363}
DEFINE_GUID(IID_IContextVisionCtrl, 
0x7809be2a, 0x6995, 0x44f4, 0x95, 0xa0, 0x33, 0x80, 0xb6, 0x81, 0x83, 0x63);
DECLARE_INTERFACE_(IContextVisionCtrl,IUnknown)
{
	STDMETHOD(SetParameterFile) (THIS_
		BSTR pFileName
		) PURE;
	STDMETHOD(GetMaxSettingsNum) (THIS_
		int *pSettingsNum
		) PURE;
	STDMETHOD(GetCurrentSetting) (THIS_
		int *pSetting
		) PURE;
	STDMETHOD(SetCurrentSetting) (THIS_
		int nSetting
		) PURE;
	STDMETHOD(GetParameterFile) (THIS_
		LPBSTR ppFileName
		) PURE;
	STDMETHOD(EnableProcessing) (THIS_
		BOOL fEnable
		) PURE;
	STDMETHOD_(BOOL,IsProcessingEnabled)(THIS_
		) PURE;
};

