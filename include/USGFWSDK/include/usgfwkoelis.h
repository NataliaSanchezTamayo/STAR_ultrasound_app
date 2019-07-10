#ifndef __USGFWKOELIS_H__
#define __USGFWKOELIS_H__

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

interface ISampleGrabber;

// {6F98C0BA-429B-429d-95B1-B0486A41C5F4}
DEFINE_GUID(IID_IUsgfwKoelisPlugin, 
0x6f98c0ba, 0x429b, 0x429d, 0x95, 0xb1, 0xb0, 0x48, 0x6a, 0x41, 0xc5, 0xf4);

DECLARE_INTERFACE_(IUsgfwKoelisPlugin, IUnknown)
{
	STDMETHOD(GetSampleGrabber3D) (THIS_
		ISampleGrabber** ppSampleGrabber) PURE;
};

// {D03832E4-F6BC-46d0-9406-A0E6D7BCB6EE}
DEFINE_GUID(IID_IUsgfwKoelisLineTest, 
0xd03832e4, 0xf6bc, 0x46d0, 0x94, 0x6, 0xa0, 0xe6, 0xd7, 0xbc, 0xb6, 0xee);
DECLARE_INTERFACE_(IUsgfwKoelisLineTest, IUnknown)
{
	STDMETHOD(GetSetKoelisLineStates) (THIS_
		/*[IN]*/ BOOL bAckState,
		/*[IN]*/ BOOL bConnectState,
		/*[OUT]*/ BOOL *bTriggerState) PURE;
};

// {6EB685CA-11B1-4723-990C-A579EBE545D7}
DEFINE_GUID(IID_IBeamformerCaperay2, 
0x6eb685ca, 0x11b1, 0x4723, 0x99, 0xc, 0xa5, 0x79, 0xeb, 0xe5, 0x45, 0xd7);
DECLARE_INTERFACE_(IBeamformerCaperay2, IUnknown)
{
	STDMETHOD(SomeMethod) (THIS_
		/*[IN]*/ BOOL bAckState,
		/*[IN]*/ BOOL bConnectState,
		/*[OUT]*/ BOOL *bTriggerState) PURE;
};



#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif  /* __cplusplus */

#endif // __USGFWKOELIS_H__