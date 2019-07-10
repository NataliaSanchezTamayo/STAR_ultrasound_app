#ifndef _USGFWEEPROM_H_
#define _USGFWEEPROM_H_

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */


// {3C94BC35-62B3-429a-A450-3C66E986306A}
DEFINE_GUID(IID_IUltrasonicProbeRAM, 
0x3c94bc35, 0x62b3, 0x429a, 0xa4, 0x50, 0x3c, 0x66, 0xe9, 0x86, 0x30, 0x6a);

DECLARE_INTERFACE_(IUltrasonicProbeRAM, IUnknown)
{
	STDMETHOD(Read) (THIS_
		ULONG address,
		ULONG cBuffer,
		PBYTE pBuffer) PURE;
	STDMETHOD(Write) (THIS_
		ULONG address,
		ULONG cBuffer,
		PBYTE pBuffer) PURE;
};



#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif  /* __cplusplus */

#endif // _USGFWEEPROM_H_