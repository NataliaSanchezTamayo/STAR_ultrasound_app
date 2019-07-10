#ifndef _USGSTR2_H_
#define _USGSTR2_H_

#include "usgdata2.h"

#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)



// {70D1F7BF-8FE1-4452-AB89-1DCDD69D8999}
//DEFINE_GUID(KSPROPSETID_UsgProbeRAM, 
//0x70d1f7bf, 0x8fe1, 0x4452, 0xab, 0x89, 0x1d, 0xcd, 0xd6, 0x9d, 0x89, 0x99);

#define STATIC_KSPROPSETID_UsgProbeRAM \
	0x70d1f7bf, 0x8fe1, 0x4452, 0xab, 0x89, 0x1d, 0xcd, 0xd6, 0x9d, 0x89, 0x99
DEFINE_GUIDSTRUCT("70D1F7BF-8FE1-4452-AB89-1DCDD69D8999", KSPROPSETID_UsgProbeRAM);
#define KSPROPSETID_UsgProbeRAM DEFINE_GUIDNAMED(KSPROPSETID_UsgProbeRAM)

enum
{
	KSPROPERTY_PROBERAM = 0
};

typedef struct
{
	KSPROPERTY property;
	WORD baseAddress;
	WORD wLength;
} KSPROPERTY_PROBERAM_S, *PKSPROPERTY_PROBERAM_S;


//
// UsgProbeConnector property set
//

// {0DA12448-DA47-4e32-8D8C-49CE7E199490}
#define STATIC_KSPROPSETID_UsgProbeConnector \
	0xda12448, 0xda47, 0x4e32, 0x8d, 0x8c, 0x49, 0xce, 0x7e, 0x19, 0x94, 0x90
DEFINE_GUIDSTRUCT("0DA12448-DA47-4e32-8D8C-49CE7E199490", KSPROPSETID_UsgProbeConnector);
#define KSPROPSETID_UsgProbeConnector DEFINE_GUIDNAMED(KSPROPSETID_UsgProbeConnector)

enum
{
	KSPROPERTY_UsgProbeConnector_Caps = 0,
	KSPROPERTY_UsgProbeConnector_ProbeDesc,
	KSPROPERTY_UsgProbeConnector_ActiveConnector,
};

// sturcture for KSPROPERTY_UsgProbeConnector_Caps property

typedef USGPROBECONNECTOR_CAPS USGPROBECONNECTOR_CAPS_S, *PUSGPROBECONNECTOR_CAPS_S;


typedef struct
{
	KSPROPERTY property;
	ULONG connectorIndex;
} KSPROPERTY_PROBEDESC_S, *PKSPROPERTY_PROBEDESC_S;

// structure for KSPROPERTY_UsgProbeConnector_ProbeDesc

typedef struct _USGPROBECONNECTOR_PROBEDESC
{
	ULONG size;				// structure size in bytes
	ULONG probeCode;		// probe code on specified connector (filled by driver)
	ULONG probeStatus;		// probe state code. Can specify probe initialization error
	ULONG nameSize;			// probe name string lenght in characters (not include string end zero)
	WCHAR probeName[1];		// array for probe name string
} USGPROBECONNECTOR_PROBEDESC, *PUSGPROBECONNECTOR_PROBEDESC;

//
// UsgProbeConnector event set
//
#define STATIC_KSEVENTSETID_UsgProbeConnector \
	0xdb8f1cc4, 0x1447, 0x4371, 0x85, 0x8, 0xb3, 0xe4, 0xca, 0xed, 0xec, 0xe2
DEFINE_GUIDSTRUCT("DB8F1CC4-1447-4371-8508-B3E4CAEDECE2", KSEVENTSETID_UsgProbeConnector);
#define KSEVENTSETID_UsgProbeConnector DEFINE_GUIDNAMED(KSEVENTSETID_UsgProbeConnector)

enum
{
	KSEVENT_USGCONNECTOR_PROBECHANGED = 0,
};

#define STATIC_GUID_Beamformer_EchoBlaster128 STATIC_FILTERREF_EchoBlaster128
#define GUID_Beamformer_EchoBlaster128 FILTERREF_EchoBlaster128


// {BED2F243-5E64-41da-A2F8-E3103535C4A1}
#define STATIC_GUID_Beamformer_EchoBlaster128_C \
	0xbed2f243, 0x5e64, 0x41da, 0xa2, 0xf8, 0xe3, 0x10, 0x35, 0x35, 0xc4, 0xa1
DEFINE_GUIDSTRUCT("BED2F243-5E64-41da-A2F8-E3103535C4A1", GUID_Beamformer_EchoBlaster128_C);
#define GUID_Beamformer_EchoBlaster128_C DEFINE_GUIDNAMED(GUID_Beamformer_EchoBlaster128_C)


// {0F122C2A-AC5B-4b27-A11D-E5E695E1DBDD}
#define STATIC_GUID_Beamformer_EchoBlaster64 \
	0xf122c2a, 0xac5b, 0x4b27, 0xa1, 0x1d, 0xe5, 0xe6, 0x95, 0xe1, 0xdb, 0xdd
DEFINE_GUIDSTRUCT("0F122C2A-AC5B-4b27-A11D-E5E695E1DBDD", GUID_Beamformer_EchoBlaster64);
#define GUID_Beamformer_EchoBlaster64 DEFINE_GUIDNAMED(GUID_Beamformer_EchoBlaster64)

// {C27052A9-3E3D-40f5-ACD7-E3052221A6E3}
#define STATIC_GUID_Beamformer_LogicScan \
	0xc27052a9, 0x3e3d, 0x40f5, 0xac, 0xd7, 0xe3, 0x5, 0x22, 0x21, 0xa6, 0xe3
DEFINE_GUIDSTRUCT("C27052A9-3E3D-40f5-ACD7-E3052221A6E3", GUID_Beamformer_LogicScan);
#define GUID_Beamformer_LogicScan DEFINE_GUIDNAMED(GUID_Beamformer_LogicScan)

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)

#endif		// _USGSTR2_H_