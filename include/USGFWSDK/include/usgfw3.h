#ifndef _USGFW3_H_
#define _USGFW3_H_

#include <ks.h>

// {96EBFF87-707D-43f8-8E10-FD6E5C15ECDC}
DEFINE_GUID(PROPSET_UsbEchoBlasterControl, 
0x96ebff87, 0x707d, 0x43f8, 0x8e, 0x10, 0xfd, 0x6e, 0x5c, 0x15, 0xec, 0xdc);

#define STATIC_KSPROPSET_UsbEchoBlasterControl \
	0x96ebff87, 0x707d, 0x43f8, 0x8e, 0x10, 0xfd, 0x6e, 0x5c, 0x15, 0xec, 0xdc
DEFINE_GUIDSTRUCT("96EBFF87-707D-43f8-8E10-FD6E5C15ECDC", KSPROPSET_UsbEchoBlasterControl);
#define KSPROPSET_UsbEchoBlasterControl DEFINE_GUIDNAMED(KSPROPSET_UsbEchoBlasterControl)

enum {
	KSPROPERTY_USBRAWCTRL = 0
};

typedef struct
{
	KSPROPERTY property;
	WORD request;
	WORD wValue;
	WORD wIndex;
	WORD wLength;
} KSPROPERTY_USBRAWCTRL_S, *PKSPROPERTY_USBRAWCTRL_S;

#endif _USGFW3_H_