-[UARPUSBDFUAccessory sendBurnCommand:length:]
// local variable allocation has failed, the output may be wrong!
int __cdecl -[UARPUSBDFUAccessory sendBurnCommand:length:](
        UARPUSBDFUAccessory *self,
        SEL a2,
        char *a3,
        unsigned __int16 a4)
{
  __int64 v4; // x21
  __int64 v7; // x20
  __int64 v8; // x0
  OS_os_log *log; // x21
  unsigned int v10; // w0
  OS_os_log *v11; // x21
  unsigned int v12; // w0
  OS_os_log *v13; // x21
  unsigned __int8 v14; // w21
  unsigned int v15; // w22
  unsigned int v16; // w0
  OS_os_log *v18; // x21
  OS_os_log *v20; // x20
  char v21; // [xsp+Fh] [xbp-41h] BYREF
  __int64 v22; // [xsp+10h] [xbp-40h] BYREF
  int v23; // [xsp+18h] [xbp-38h]

  v4 = a4;
  LODWORD(v7) = -[USBDFUUpdater openDfuDevice](self->_usbDfuAccessory, "openDfuDevice");
  if ( !(_DWORD)v7 )
  {
    v8 = -[USBDFUUpdater sendDfuBlockData:length:](self->_usbDfuAccessory, "sendDfuBlockData:length:", a3, v4);
    if ( (_DWORD)v8 )
    {
      v7 = v8;
      log = self->_log;
      if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
        sub_1000192EC(v7, log);
    }
    else
    {
      v10 = -[USBDFUUpdater sendDfuBlockData:length:](self->_usbDfuAccessory, "sendDfuBlockData:length:", 0LL, 0LL);
      if ( v10 )
      {
        LODWORD(v7) = v10;
        v11 = self->_log;
        if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
          sub_10001925C(v11);
      }
      else
      {
        v12 = -[USBDFUUpdater dfuSetState:](self->_usbDfuAccessory, "dfuSetState:", 7LL);
        if ( v12 )
        {
          LODWORD(v7) = v12;
          v13 = self->_log;
          if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
            sub_1000191E4(v13);
        }
        else
        {
          v14 = 0;
          v15 = 0;
          while ( 1 )
          {
            v23 = 0;
            v22 = 0LL;
            v16 = -[USBDFUUpdater dfuGetStatusCmd:](self->_usbDfuAccessory, "dfuGetStatusCmd:", &v22);
            if ( v16 )
              break;
            if ( BYTE4(v22) != 7 )
              ++v14;
            v15 += v23;
            usleep(1000 * v23);
            if ( v15 >> 4 > 0x270 || v14 >= 3u )
            {
              v21 = 11;
              if ( -[USBDFUUpdater dfuGetStateCmd:](self->_usbDfuAccessory, "dfuGetStateCmd:", &v21) || v21 != 2 )
              {
                v20 = self->_log;
                if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
                  sub_10001916C(v20);
                -[USBDFUUpdater closeDfuDevice](self->_usbDfuAccessory, "closeDfuDevice");
                LODWORD(v7) = -536870212;
              }
              else
              {
                LODWORD(v7) = 0;
              }
              return v7;
            }
          }
          LODWORD(v7) = v16;
          v18 = self->_log;
          if ( os_log_type_enabled(v18, OS_LOG_TYPE_ERROR) )
            sub_10001916C(v18);
        }
      }
    }
    -[USBDFUUpdater closeDfuDevice](self->_usbDfuAccessory, "closeDfuDevice");
  }
  return v7;
}