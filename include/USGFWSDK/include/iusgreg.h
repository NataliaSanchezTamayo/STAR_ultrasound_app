#ifndef __IUSGREG_H__
#define __IUSGREG_H__

// {398A0845-C868-4d2d-86AA-D1B7F4128029}
DEFINE_GUID(IID_IUsgProbeRegistryLink, 
0x398a0845, 0xc868, 0x4d2d, 0x86, 0xaa, 0xd1, 0xb7, 0xf4, 0x12, 0x80, 0x29);
DECLARE_INTERFACE_(IUsgProbeRegistryLink,IUnknown)
{
	STDMETHOD(SetRegistryLink) (THIS_
		ULONG regKeyBase,
		LPCOLESTR pszRegestryPath
		) PURE;
	STDMETHOD(GetRegistryLink) (THIS_
		ULONG *pRegKeyBase,
		LPOLESTR *ppszRegestryPath
		) PURE;
	STDMETHOD(SetRegistryMode) (THIS_
		ULONG mode
		) PURE;
	STDMETHOD(GetRegistryMode) (THIS_
		ULONG *pMode
		) PURE;
};


#endif //__IUSGREG_H__