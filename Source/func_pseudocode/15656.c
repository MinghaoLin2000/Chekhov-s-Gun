-[USBDFUUpdater dfuSetVersionCmdMajor:minor:release:build:]
int __cdecl -[USBDFUUpdater dfuSetVersionCmdMajor:minor:release:build:](
        USBDFUUpdater *self,
        SEL a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  IOUSBDeviceStruct942 **dev; // x0
  _WORD v8[2]; // [xsp+0h] [xbp-20h] BYREF
  int v9; // [xsp+4h] [xbp-1Ch]
  __int64 v10; // [xsp+8h] [xbp-18h]
  int v11; // [xsp+10h] [xbp-10h]
  __int64 v12; // [xsp+14h] [xbp-Ch]
  int v13; // [xsp+1Ch] [xbp-4h]

  dev = self->_dev;
  if ( !dev )
    return -536870195;
  v11 = 0;
  v13 = 0;
  v8[0] = 2593;
  v8[1] = ((_WORD)a3 << 12) | ((a4 & 0xF) << 8) | (16 * (a5 & 0xF)) | a6 & 0xF;
  v9 = 0;
  v10 = 0LL;
  v12 = 0x3E800001388LL;
  return ((__int64 (__fastcall *)(IOUSBDeviceStruct942 **, _WORD *))(*dev)->DeviceRequestTO)(dev, v8);
}