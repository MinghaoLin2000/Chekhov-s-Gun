-[USBDFUUpdater dfuGetStateCmd:]
int __cdecl -[USBDFUUpdater dfuGetStateCmd:](USBDFUUpdater *self, SEL a2, char *a3)
{
  __int16 v4; // [xsp+0h] [xbp-20h] BYREF
  int v5; // [xsp+2h] [xbp-1Eh]
  __int16 v6; // [xsp+6h] [xbp-1Ah]
  char *v7; // [xsp+8h] [xbp-18h]
  int v8; // [xsp+10h] [xbp-10h]
  __int64 v9; // [xsp+14h] [xbp-Ch]
  int v10; // [xsp+1Ch] [xbp-4h]

  if ( !self->_dev )
    return -536870195;
  *a3 = 11;
  v8 = 0;
  v10 = 0;
  v4 = 1441;
  v5 = 0;
  v6 = 1;
  v7 = a3;
  v9 = 0x3E800001388LL;
  return ((__int64 (__fastcall *)(IOUSBDeviceStruct942 **, __int16 *))(*self->_dev)->DeviceRequestTO)(self->_dev, &v4);
}