
#ifndef _MULTFREQ_H_
#define _MULTFREQ_H_

#include <strmif.h>

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

////////////////////////////////////////////////////////////////////////////
// MultiFrequency COM declarations
////////////////////////////////////////////////////////////////////////////

// {EA09FC76-D621-44d3-BCB6-6F8547582857}
DEFINE_GUID(CLSID_UsgProbeFrequency, 
0xea09fc76, 0xd621, 0x44d3, 0xbc, 0xb6, 0x6f, 0x85, 0x47, 0x58, 0x28, 0x57);


// объявление интерфейса

// {A7242808-1DB3-4b94-962B-790699700BF2}
DEFINE_GUID(IID_IUsgProbeFrequency, 
0xa7242808, 0x1db3, 0x4b94, 0x96, 0x2b, 0x79, 0x6, 0x99, 0x70, 0xb, 0xf2);

DECLARE_INTERFACE_(IUsgProbeFrequency,IUnknown)
{
	STDMETHOD(SetProbe)(THIS_
		LPOLESTR pProbeName
		) PURE;
	STDMETHOD(GetCurProbe)(THIS_
		LPOLESTR *ppProbeName
		) PURE;
	STDMETHOD(SetFrequency)(THIS_
		ULONG nFreq, IBaseFilter* pBeamformer
		) PURE;
	STDMETHOD(GetFrequenciesNumber)(THIS_
		PLONG pFreqs
		) PURE;
	STDMETHOD(GetFrequenciesValues)(THIS_
		int nIndexFirst, 
		int nEntries, 
		ULONG* pValues,
		LONG* cFetched
		) PURE;
};


#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif  /* __cplusplus */


#endif	//_MULTFREQ_H_