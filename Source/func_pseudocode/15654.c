-[USBDFUUpdater dfuDnLoadCmd:data:length:]
int __cdecl -[USBDFUUpdater dfuDnLoadCmd:data:length:](
        USBDFUUpdater *self,
        SEL a2,
        unsigned __int16 a3,
        void *a4,
        unsigned __int16 a5)
{
  IOUSBDeviceStruct942 **dev; // x0
  _WORD v7[4]; // [xsp+0h] [xbp-20h] BYREF
  void *v8; // [xsp+8h] [xbp-18h]
  int v9; // [xsp+10h] [xbp-10h]
  __int64 v10; // [xsp+14h] [xbp-Ch]
  int v11; // [xsp+1Ch] [xbp-4h]

  dev = self->_dev;
  if ( !dev )
    return -536870195;
  v9 = 0;
  v11 = 0;
  v7[0] = 289;
  v7[1] = a3;
  v7[2] = 0;
  v7[3] = a5;
  v8 = a4;
  v10 = 0x3E800001388LL;
  if ( !a5 )
    v8 = 0LL;
  return ((__int64 (__fastcall *)(IOUSBDeviceStruct942 **, _WORD *))(*dev)->DeviceRequestTO)(dev, v7);
}