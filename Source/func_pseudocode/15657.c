-[USBDFUUpdater dfuGetVersionCmdMajor:minor:release:build:]
int __cdecl -[USBDFUUpdater dfuGetVersionCmdMajor:minor:release:build:](
        USBDFUUpdater *self,
        SEL a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  IOUSBDeviceStruct942 **dev; // x0
  int result; // w0
  _BYTE v12[4]; // [xsp+Ch] [xbp-44h] BYREF
  __int16 v13; // [xsp+10h] [xbp-40h] BYREF
  int v14; // [xsp+12h] [xbp-3Eh]
  __int16 v15; // [xsp+16h] [xbp-3Ah]
  _BYTE *v16; // [xsp+18h] [xbp-38h]
  int v17; // [xsp+20h] [xbp-30h]
  __int64 v18; // [xsp+24h] [xbp-2Ch]
  int v19; // [xsp+2Ch] [xbp-24h]

  dev = self->_dev;
  if ( !dev )
    return -536870195;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  v17 = 0;
  v19 = 0;
  v13 = 2977;
  v14 = 0;
  v15 = 4;
  v16 = v12;
  v18 = 0x3E800001388LL;
  result = ((__int64 (__fastcall *)(IOUSBDeviceStruct942 **, __int16 *))(*dev)->DeviceRequestTO)(dev, &v13);
  if ( !result )
  {
    *a3 = v12[0];
    *a4 = v12[1];
    *a5 = v12[2];
    *a6 = v12[3];
  }
  return result;
}