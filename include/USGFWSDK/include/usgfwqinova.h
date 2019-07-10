#ifndef __USGFWQINOVA_H__
#define __USGFWQINOVA_H__

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

// {D1A35016-4026-46cf-A78A-195FDEF46993}
DEFINE_GUID(IID_IUsgfwQinovaCtrl, 
	0xd1a35016, 0x4026, 0x46cf, 0xa7, 0x8a, 0x19, 0x5f, 0xde, 0xf4, 0x69, 0x93);

DECLARE_INTERFACE_(IUsgfwQinovaCtrl, IUnknown)
{
	STDMETHOD(GetOpticPriClocks) (THIS_
		/*[OUT]*/ ULONG32 *pPriClocks) PURE;
	STDMETHOD(SetOpticPriClocks) (THIS_
		/*[OUT]*/ ULONG32 nPriClocks) PURE;
	STDMETHOD(GetOpticPriClockTime) (THIS_
		/*[OUT]*/ ULONG32 *pPriClockTime) PURE;
};


#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif  /* __cplusplus */

#endif // __USGFWQINOVA_H__