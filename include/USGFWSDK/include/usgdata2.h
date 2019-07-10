#ifndef _USGDATA2_H_
#define _USGDATA2_H_

// data types definition for connector properties

typedef struct _USGPROBECONNECTOR_CAPS
{
	GUID mediumGuid;		// beamformer's GUID
	ULONG mediumId;			// index of particular beamformar in the system
	ULONG connectorsNum;	// number of connectors on beamformer
} USGPROBECONNECTOR_CAPS, *PUSGPROBECONNECTOR_CAPS;


#endif		// _USGDATA2_H_
