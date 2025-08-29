-[USBDFUUpdater dfuGetStatusCmd:]
int __cdecl -[USBDFUUpdater dfuGetStatusCmd:](USBDFUUpdater *self, SEL a2, DFUStatus *a3)
{
  int v5; // w27
  int v6; // w23
  unsigned int v7; // w8
  unsigned int v8; // w24
  OS_os_log *log; // x25
  __int16 v11; // [xsp+10h] [xbp-90h] BYREF
  int v12; // [xsp+12h] [xbp-8Eh]
  __int16 v13; // [xsp+16h] [xbp-8Ah]
  DFUStatus *v14; // [xsp+18h] [xbp-88h]
  int v15; // [xsp+20h] [xbp-80h]
  __int64 v16; // [xsp+24h] [xbp-7Ch]
  int v17; // [xsp+2Ch] [xbp-74h]
  uint8_t buf[4]; // [xsp+30h] [xbp-70h] BYREF
  unsigned int v19; // [xsp+34h] [xbp-6Ch]

  if ( !self->_dev )
    return -536870195;
  v5 = 5;
  do
  {
    a3->usableTimeoutMs = 0;
    *(_QWORD *)&a3->bStatus = 0LL;
    v15 = 0;
    v17 = 0;
    v11 = 929;
    v12 = 0;
    v13 = 6;
    v14 = a3;
    v16 = 0x3E800001388LL;
    v6 = ((__int64 (__fastcall *)(IOUSBDeviceStruct942 **, __int16 *))(*self->_dev)->DeviceRequestTO)(self->_dev, &v11);
    v7 = *(unsigned __int16 *)a3->bwPollTimeout | (a3->bwPollTimeout[2] << 16);
    a3->usableTimeoutMs = v7;
    if ( !v6 )
      break;
    v8 = v7 < 0x3E8 ? 1 : (unsigned int)((8589935 * (unsigned __int64)v7) >> 32) >> 1;
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 67109120;
      v19 = v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        log,
        OS_LOG_TYPE_INFO,
        "Will retry dfuGetStatus in %d second(s)",
        buf,
        8u);
    }
    sleep(v8);
    --v5;
  }
  while ( v5 );
  return v6;
}