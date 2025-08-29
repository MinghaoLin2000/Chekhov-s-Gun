-[USBDFUUpdater dfuDetachToAppCmd]
int __cdecl -[USBDFUUpdater dfuDetachToAppCmd](USBDFUUpdater *self, SEL a2)
{
  IOUSBDeviceStruct942 **dev; // x0
  _WORD v4[8]; // [xsp+0h] [xbp-20h] BYREF
  int v5; // [xsp+10h] [xbp-10h]
  __int64 v6; // [xsp+14h] [xbp-Ch]
  int v7; // [xsp+1Ch] [xbp-4h]

  dev = self->_dev;
  if ( !dev )
    return -536870195;
  v5 = 0;
  v7 = 0;
  v4[0] = 1825;
  memset(&v4[1], 0, 14);
  v6 = 0x3E800001388LL;
  return ((__int64 (__fastcall *)(IOUSBDeviceStruct942 **, _WORD *))(*dev)->DeviceRequestTO)(dev, v4);
}