
sample.sln

This sample project is based on the TELEMED ultrasound SDK (USGFWSDK) file b_frame_grabber

This sample demonstrates how to use scan-converter plug-in and access
each B mode ultrasound output frame in real-time during scanning.



The project creates the Directshow filet Cam.dll and creates the 
application sample.exe

The executable file sample.exe displays the utrasound image  and saves the frames is saved 
in the folder C:\Users\Public\image.bmp

The file Cam.dll is a Directshow filter that once registred using regsvr32 will act as a 
virtual camera device for the ultrasound image to be seend as a virual camera.

The project also requires the use of the splitcamera plugin to let the filter be seeing 
by any app on the computer.


Used objects and interfaces:
Usgfw2Class, IProbe, IUsgDataView, IUsgMixerControl, IUsgGain, IUsgScanConverterPlugin.

!!! IMPORTANT !!!
* In order to modify this sample you will need knowledge of COM and DirecShow.
* For sample compilation you will need to install Microsoft Platform SDK
  (Windows SDK), compile DirectShow base classes.
* Also you will need to adjust project's include and library paths related to
  DirectShow and USGFWSDK.
* USGFWSDK include files define ultrasound-related structures and interfaces.
* For operation must be installed Microsoft Visual C++ 2017 redistributable:
  https://www.visualstudio.com/downloads/
  https://go.microsoft.com/fwlink/?LinkId=746572

Additional include directories in plug-in's project settings:
.\;"$(USGFWSDK)\include";"$(DXSDK_INCLUDE)";"$(PSDK_INCLUDE)"; "$(DS_BASE_INCLUDE)";

Additional library directories in plug-in's project settings:
"$(DXSDK_LIB)\x86";"$(PSDK_LIB)"; "$(DSHOWBASECLASSES)\VC80\Release";

Additional dependencies in plug-in's project settings:
strmbase.lib vfw32.lib quartz.lib winmm.lib dxtrans.lib comctl32.lib odbc32.lib odbccp32.lib comsuppw.lib psapi.lib user32.lib Setupapi.lib

Here 
USGFWSDK - Ultrasonography for Windows SDK;
DXSDK - DirectX SDK;
PSDK - Platform SDK (Windows SDK);
DS_BASE, DSHOWBASE - DirectShow base classes from Platform SDK;
strmbase.lib - compiled DirectShow base classes;

