#ifndef __USGFWPLUGINS_H__
#define __USGFWPLUGINS_H__

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

// this header file contain COM interfaces to manage SDK plug-ins
interface IEnumUsgfwFilters;
interface IEnumUsgfwStreams;
interface IEnumUsgfwModes;
interface IUsgfwFilter;
interface IUsgfwStream;
interface IUsgfwMode;
interface IEnumUsgfwConnections;
interface IUsgfwConnection;
interface IUsgfw2Plugin;

// {07B45705-5847-4987-8227-8068E12E375B}
DEFINE_GUID(IID_IEnumUsgfwFilters, 
0x7b45705, 0x5847, 0x4987, 0x82, 0x27, 0x80, 0x68, 0xe1, 0x2e, 0x37, 0x5b);
DECLARE_INTERFACE_(IEnumUsgfwFilters, IUnknown)
{
	STDMETHOD(Next)(THIS_ 
		/* [in] */ ULONG cFilters,
		/* [size_is][out] */ IUsgfwFilter **ppFilters,
		/* [out] */ ULONG *pcFetched
		) PURE;
	STDMETHOD (Skip)(THIS_ 
		/* [in] */ ULONG cFilters
		) PURE;
	STDMETHOD (Reset)(THIS_ 
		void
		)PURE;
	STDMETHOD (Clone)(THIS_ 
		/* [out] */ IEnumUsgfwFilters **ppEnum
		) PURE;
};

// {1F31DDF3-0435-4fc7-9F31-C40FD9E043F4}
DEFINE_GUID(IID_IEnumUsgfwStreams, 
0x1f31ddf3, 0x435, 0x4fc7, 0x9f, 0x31, 0xc4, 0xf, 0xd9, 0xe0, 0x43, 0xf4);
DECLARE_INTERFACE_(IEnumUsgfwStreams, IUnknown)
{
	STDMETHOD(Next)(THIS_ 
		/* [in] */ ULONG cStreams,
		/* [size_is][out] */ IUsgfwStream **ppStreams,
		/* [out] */ ULONG *pcFetched
		) PURE;
	STDMETHOD (Skip)(THIS_ 
		/* [in] */ ULONG cStreams
		) PURE;
	STDMETHOD (Reset)(THIS_ 
		void
		)PURE;
	STDMETHOD (Clone)(THIS_ 
		/* [out] */ IEnumUsgfwStreams **ppEnum
		) PURE;
};

// {939D45D9-8BBC-46fe-B75B-75257BC78C6C}
DEFINE_GUID(IID_IEnumUsgfwModes, 
0x939d45d9, 0x8bbc, 0x46fe, 0xb7, 0x5b, 0x75, 0x25, 0x7b, 0xc7, 0x8c, 0x6c);
DECLARE_INTERFACE_(IEnumUsgfwModes, IUnknown)
{
	STDMETHOD(Next)(THIS_ 
		/* [in] */ ULONG cModes,
		/* [size_is][out] */ IUsgfwMode **ppModes,
		/* [out] */ ULONG *pcFetched
		) PURE;
	STDMETHOD (Skip)(THIS_ 
		/* [in] */ ULONG cModes
		) PURE;
	STDMETHOD (Reset)(THIS_ 
		void
		)PURE;
	STDMETHOD (Clone)(THIS_ 
		/* [out] */ IEnumUsgfwModes **ppEnum
		) PURE;
};

// {7333BF21-3C6A-482f-ABC9-79161BF4E496}
DEFINE_GUID(IID_IEnumUsgfwConnections, 
0x7333bf21, 0x3c6a, 0x482f, 0xab, 0xc9, 0x79, 0x16, 0x1b, 0xf4, 0xe4, 0x96);
DECLARE_INTERFACE_(IEnumUsgfwConnections, IUnknown)
{
	STDMETHOD(Next)(THIS_ 
		/* [in] */ ULONG cConnections,
		/* [size_is][out] */ IUsgfwConnection **ppConnections,
		/* [out] */ ULONG *pcFetched
		) PURE;
	STDMETHOD (Skip)(THIS_ 
		/* [in] */ ULONG cConnections
		) PURE;
	STDMETHOD (Reset)(THIS_ 
		void
		)PURE;
	STDMETHOD (Clone)(THIS_ 
		/* [out] */ IEnumUsgfwConnections **ppEnum
		) PURE;
};

// {957BCA42-A979-4daf-B860-15D5A2DB3F39}
DEFINE_GUID(IID_IUsgfwFilter, 
0x957bca42, 0xa979, 0x4daf, 0xb8, 0x60, 0x15, 0xd5, 0xa2, 0xdb, 0x3f, 0x39);
DECLARE_INTERFACE_(IUsgfwFilter, IUnknown)
{
	STDMETHOD(GetConnectionFormat) (THIS_
		int nPin,
		int nStreamMode,
		AM_MEDIA_TYPE **ppMediaType
		) PURE;
	STDMETHOD_(LONG, GetFilterID) (THIS_
		void
		) PURE;
	STDMETHOD(GetInterface) (THIS_
		REFIID riid, 
		LPVOID* ppObj, 
		int nStreamMode, 
		int nInputPin, 
		int nOutputPin, 
		const GUID* pNodeGuid
		) PURE;
	STDMETHOD(GetNodeGUID) (THIS_
		int nNodeID,
		GUID *pGuid
		) PURE;
	STDMETHOD_(LONG, GetNodeID) (THIS_
		REFIID riid
		) PURE;
	STDMETHOD_(LONG, GetNodesCount) (THIS_
		void
		) PURE;
	STDMETHOD(GetPin) (THIS_
		int nPin,
		IPin** ppPin
		) PURE;
	STDMETHOD_(LONG, GetPinsCount) (THIS_
		void
		) PURE;
	STDMETHOD(InvalidateConnections) (THIS_
		void
		) PURE;
	STDMETHOD(IsCorrectClassGUID) (THIS_
		REFIID riid
		) PURE;
	STDMETHOD(OnConnectionComplete) (THIS_
		int nPin,
		int nStreamMode
		) PURE;
	STDMETHOD(OnInputConnect) (THIS_
		int nPin,
		int nStream
		) PURE;
	STDMETHOD(OnInputDisconnect) (THIS_
		int nPin
		) PURE;
	STDMETHOD(OnOutputConnect) (THIS_
		int nPin,
		int nStreamMode
		) PURE;
	STDMETHOD(OnOutputDisconnect) (THIS_
		int nPin
		) PURE;
	STDMETHOD(RemoveFilterFromGraph) (THIS_
		void
		) PURE;
	STDMETHOD(AddFilterToGraph) (THIS_
		IFilterGraph* pFilterGraph
		) PURE;
	STDMETHOD(CloneFilter) (THIS_
		int nNewFilterId,
		IUsgfwFilter** ppFilter
		) PURE;
};

// {F8914562-3447-4364-9428-4F46536A4E4D}
DEFINE_GUID(IID_IUsgfwConnection, 
0xf8914562, 0x3447, 0x4364, 0x94, 0x28, 0x4f, 0x46, 0x53, 0x6a, 0x4e, 0x4d);
DECLARE_INTERFACE_(IUsgfwConnection, IUnknown)
{
	STDMETHOD_(LONG, GetFilterID) (THIS_
		void ) PURE;
	STDMETHOD_(LONG, GetOutputPin) (THIS_
		void) PURE;
	STDMETHOD_(LONG, GetInputPin) (THIS_
		void) PURE;
	STDMETHOD(MustExist) (THIS_
		void) PURE;
	STDMETHOD(GetConnectionMediaType)(THIS_
		AM_MEDIA_TYPE **ppMediaType
		) PURE;
};

// {FEFB3ADE-5374-4e6b-B0B9-C8E4E3411D48}
DEFINE_GUID(IID_IUsgfwStream, 
0xfefb3ade, 0x5374, 0x4e6b, 0xb0, 0xb9, 0xc8, 0xe4, 0xe3, 0x41, 0x1d, 0x48);
DECLARE_INTERFACE_(IUsgfwStream, IUnknown)
{
	STDMETHOD(EnumConnections) (THIS_
		IEnumUsgfwConnections **ppEnum
		) PURE;
//	STDMETHOD_(LONG, GetStreamMode) (THIS_
//		void
//		) PURE;
};

// {728BB71B-8E8A-4251-AFD6-44CBBF73CDB7}
DEFINE_GUID(IID_IUsgfwMode, 
0x728bb71b, 0x8e8a, 0x4251, 0xaf, 0xd6, 0x44, 0xcb, 0xbf, 0x73, 0xcd, 0xb7);
DECLARE_INTERFACE_(IUsgfwMode, IUnknown)
{
	STDMETHOD(EnumStreams) (THIS_
		IEnumUsgfwStreams **ppEnum
		) PURE;
	STDMETHOD_(LONG, GetMode) (THIS_
		void ) PURE;
//	STDMETHOD_(LONG, GetCaptureMode) (THIS_
//		IUsgfwStream* pStream) PURE;
};

interface IUsgfw2Control;

// {04CBBAE0-1910-4d28-8259-9E3D00F4F035}
DEFINE_GUID(IID_IUsgDataViewPluginHost, 
			0x4cbbae0, 0x1910, 0x4d28, 0x82, 0x59, 0x9e, 0x3d, 0x0, 0xf4, 0xf0, 0x35);
DECLARE_INTERFACE_(IUsgDataViewPluginHost, IUnknown)
{
	STDMETHOD(EnumFilters) (THIS_
		IEnumUsgfwFilters **ppEnum
		) PURE;
	STDMETHOD(EnumStreams) (THIS_
		IEnumUsgfwStreams **ppEnum
		) PURE;
	STDMETHOD(EnumUsgfwModes) (THIS_
		IEnumUsgfwModes **ppEnum
		) PURE;
	STDMETHOD(AddFilter) (THIS_
		IUsgfwFilter* pFilter,
		LONG* pNewFilterId
		) PURE;
	STDMETHOD(AddStream) (THIS_
		IUsgfwStream* pStream,
		LONG* pNewStreamId
		) PURE;
	STDMETHOD(AddMode) (THIS_
		IUsgfwMode* pMode,
		LONG* pNewModeId
		) PURE;
	STDMETHOD(AddControl) (THIS_
		IUsgfw2Control *pUsgfwControl
		)PURE;
	STDMETHOD(RemoveControl) (THIS_
		IUsgfw2Control *pUsgfwControl
		) PURE;
//	STDMETHOD(GetFilterObj) (THIS_
//		LONG nFilterId,
//		IUsgfwFilter **ppFilter
//		) PURE;
};


// the follow interface is used as plugins host.
// Usgfw2 objects must to support this interface to provide possibility to control plugins

// {1F01479A-0FF3-4f42-BBDA-C2E069A978AD}
DEFINE_GUID(IID_IUsgfw2PluginHost, 
0x1f01479a, 0xff3, 0x4f42, 0xbb, 0xda, 0xc2, 0xe0, 0x69, 0xa9, 0x78, 0xad);

DECLARE_INTERFACE_(IUsgfw2PluginHost, IUnknown)
{
	STDMETHOD(GetVersion)(THIS_			// method to retrieve version of USGFW2
		PULONG pMinor,
		PULONG pMajor
		) PURE;
	STDMETHOD(RegisterPlugin) (THIS_		// usgfw2 adds entry in the registry and loads plugin each time when it created
		GUID* pClassId
		) PURE;
	STDMETHOD(UnregisterPlugin) (THIS_		// usgfw2 removes registry entry
		GUID* pClassId
		) PURE;
	STDMETHOD(AddPlugin)(THIS_		// usgfw2 just adds plugin into the collection of loaded modules
		IUsgfw2Plugin* pPlugin
		) PURE;
	STDMETHOD(RemovePlugin)(THIS_	// usgfw2 removes plugin
		IUsgfw2Plugin* pPlugin
		) PURE;
};

// {DA043B30-0850-439d-A496-240BB6062E95}
DEFINE_GUID(IID_IUsgfw2Plugin, 
0xda043b30, 0x850, 0x439d, 0xa4, 0x96, 0x24, 0xb, 0xb6, 0x6, 0x2e, 0x95);

DECLARE_INTERFACE_(IUsgfw2Plugin, IUnknown)
{
	// method is called after new UsgDataView object is created
	STDMETHOD(OnDataViewCreate) (THIS_
		IUsgDataViewPluginHost* pUsgDataView
		) PURE;
	// method is called before UsgDataView object is destroyed
	STDMETHOD(OnDataViewDestroy) (THIS_
		IUsgDataViewPluginHost* pUsgDataView
		) PURE;

};

// {457629F0-7DBB-4e9b-85E5-AB304A269D97}
DEFINE_GUID(IID_IUsgfwDataViewPlugin, 
			0x457629f0, 0x7dbb, 0x4e9b, 0x85, 0xe5, 0xab, 0x30, 0x4a, 0x26, 0x9d, 0x97);

DECLARE_INTERFACE_(IUsgfwDataViewPlugin, IUnknown)
{
	STDMETHOD(Advise)(THIS_
		IUnknown* pUnk,
		DWORD* pdwCookie
		) PURE;
	STDMETHOD(Unadvise)(THIS_
		DWORD dwCookie
		);
};

#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif  /* __cplusplus */

#endif // __USGFWPLUGINS_H__