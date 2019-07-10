#ifndef _USGBASE_H_
#define _USGBASE_H_

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

///////////////////////////////////////////////////////////////////////////////////////
// class if for ultrasonic pin factory
///////////////////////////////////////////////////////////////////////////////////////

// {CE7EA392-1F6B-4861-B5DF-958A6C0A6EC3}
DEFINE_GUID(CLSID_UltrasonicPin, 
0xce7ea392, 0x1f6b, 0x4861, 0xb5, 0xdf, 0x95, 0x8a, 0x6c, 0xa, 0x6e, 0xc3);


// {0628C099-01B8-4377-B938-602C3F4B0160}
DEFINE_GUID(CLSID_UltrasoundStrmCfgPropPage, 
0x628c099, 0x1b8, 0x4377, 0xb9, 0x38, 0x60, 0x2c, 0x3f, 0x4b, 0x1, 0x60);

// {3776220D-5086-4292-9C81-939A74269D54}
DEFINE_GUID(CLSID_UsgMConfig, 
0x3776220d, 0x5086, 0x4292, 0x9c, 0x81, 0x93, 0x9a, 0x74, 0x26, 0x9d, 0x54);

// {8EE8D3B2-32E3-4a3e-B20D-23F95F7C5C02}
DEFINE_GUID(CLSID_UsgBConfig, 
0x8ee8d3b2, 0x32e3, 0x4a3e, 0xb2, 0xd, 0x23, 0xf9, 0x5f, 0x7c, 0x5c, 0x2);

// {B5B65771-C453-4dca-BB86-3F6F657C00F9}
DEFINE_GUID(CLSID_Usg2dConfig, 
0xb5b65771, 0xc453, 0x4dca, 0xbb, 0x86, 0x3f, 0x6f, 0x65, 0x7c, 0x0, 0xf9);


// {6B20EB34-BC0D-407f-819A-5249828D7DC2}
DEFINE_GUID(CLSID_Usg3dConfig, 
0x6b20eb34, 0xbc0d, 0x407f, 0x81, 0x9a, 0x52, 0x49, 0x82, 0x8d, 0x7d, 0xc2);

// {CE8333B1-122F-433e-830E-382354986B9E}
DEFINE_GUID(CLSID_UsgPwConfig, 
0xce8333b1, 0x122f, 0x433e, 0x83, 0xe, 0x38, 0x23, 0x54, 0x98, 0x6b, 0x9e);

// {4CA79929-DF92-413e-B15F-E1659C2418A9}
DEFINE_GUID(CLSID_UsgCwConfig, 
0x4ca79929, 0xdf92, 0x413e, 0xb1, 0x5f, 0xe1, 0x65, 0x9c, 0x24, 0x18, 0xa9);

// {B0ED4652-EB98-43c2-A790-B39BBB4C3B42}
DEFINE_GUID(CLSID_UsgCmConfig, 
0xb0ed4652, 0xeb98, 0x43c2, 0xa7, 0x90, 0xb3, 0x9b, 0xbb, 0x4c, 0x3b, 0x42);

// {350462F6-B195-4f88-BF8B-06C51E60D7BF}
DEFINE_GUID(CLSID_UsgFormatControl, 
0x350462f6, 0xb195, 0x4f88, 0xbf, 0x8b, 0x6, 0xc5, 0x1e, 0x60, 0xd7, 0xbf);

// {4D7703B4-5010-47fd-8140-3CCE2F462B7C}
DEFINE_GUID(CLSID_UsgfwVideoQuality, 
0x4d7703b4, 0x5010, 0x47fd, 0x81, 0x40, 0x3c, 0xce, 0x2f, 0x46, 0x2b, 0x7c);

#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif  /* __cplusplus */


#endif	// _USGBASE_H_