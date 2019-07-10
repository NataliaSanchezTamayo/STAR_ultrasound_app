#ifndef _USGFWEX_H_
#define _USGFWEX_H_

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

// {60B31057-0A7B-41c3-8312-68043C1FB822}
DEFINE_GUID(IID_IUltrasonicDeviceConnector, 
0x60b31057, 0xa7b, 0x41c3, 0x83, 0x12, 0x68, 0x4, 0x3c, 0x1f, 0xb8, 0x22);

DECLARE_INTERFACE_(IUltrasonicDeviceConnector,IUnknown)
{
	// gain
	STDMETHOD(GetActiveConnector) (THIS_
		LONG *ConnecterIndex					// get current connector
		) PURE;
	STDMETHOD(SetActiveConnector) (THIS_
		LONG *ConnectorIndex					// set current connector
		) PURE;
	STDMETHOD(GetActiveConnectorDefault) (THIS_
		LONG *ConnectorIndex					// get default connector
		) PURE;
	STDMETHOD(GetConnectorsRange) (THIS_
		VALUE_RANGE *pRange		// range of valid values
		) PURE;

};


#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif  /* __cplusplus */

#endif // _USGFWEX_H_