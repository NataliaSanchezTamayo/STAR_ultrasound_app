#ifndef __QINOVAPROPID_H__
#define __QINOVAPROPID_H__

// {FDA76882-A9A9-4946-B0A4-A6EE9522AA0B}
// DEFINE_GUID(<< name >> ,
//	0xfda76882, 0xa9a9, 0x4946, 0xb0, 0xa4, 0xa6, 0xee, 0x95, 0x22, 0xaa, 0xb);

#define STATIC_KSPROPSET_QinovaDeviceControl \
	0xfda76882, 0xa9a9, 0x4946, 0xb0, 0xa4, 0xa6, 0xee, 0x95, 0x22, 0xaa, 0xb
DEFINE_GUIDSTRUCT("FDA76882-A9A9-4946-B0A4-A6EE9522AA0B", KSPROPSET_QinovaDeviceControl);
#define KSPROPSET_QinovaDeviceControl DEFINE_GUIDNAMED(KSPROPSET_QinovaDeviceControl)

enum {
	KSPROPERTY_OPTIC_PRI = 0,
	KSPROPERTY_OPTIC_CLOCK = 1,		// read only property to return clock time in [ns]
};

#endif		// __QINOVAPROPID_H__