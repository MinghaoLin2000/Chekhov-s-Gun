-[USBDFUUpdater sendDfuBlockData:length:]
// local variable allocation has failed, the output may be wrong!
int __cdecl -[USBDFUUpdater sendDfuBlockData:length:](USBDFUUpdater *self, SEL a2, char *a3, unsigned __int16 a4)
{
  __int64 v4; // x20
  int v7; // w22
  OS_os_log *log; // x22
  int currentDataBlock; // w8
  unsigned int v10; // w0
  int v12; // [xsp+0h] [xbp-40h] BYREF
  const char *v13; // [xsp+4h] [xbp-3Ch]
  __int16 v14; // [xsp+Ch] [xbp-34h]
  int v15; // [xsp+Eh] [xbp-32h]
  __int16 v16; // [xsp+12h] [xbp-2Eh]
  int v17; // [xsp+14h] [xbp-2Ch]

  v4 = a4;
  v7 = -[USBDFUUpdater openDfuDevice](self, "openDfuDevice");
  if ( !v7 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
    {
      currentDataBlock = self->_currentDataBlock;
      v12 = 136315650;
      v13 = "-[USBDFUUpdater sendDfuBlockData:length:]";
      v14 = 1024;
      v15 = currentDataBlock;
      v16 = 1024;
      v17 = v4;
      _os_log_impl(
        (void *)&_mh_execute_header,
        log,
        OS_LOG_TYPE_INFO,
        "%s: Downloading data block %u [%hu byte(s)]",
        (uint8_t *)&v12,
        0x18u);
    }
    v10 = -[USBDFUUpdater dfuDnLoadCmd:data:length:](self, "dfuDnLoadCmd:data:length:", self->_currentDataBlock, a3, v4);
    if ( v10 )
      goto LABEL_5;
    if ( (_DWORD)v4 )
    {
      v10 = -[USBDFUUpdater dfuGetStatusCmd:](self, "dfuGetStatusCmd:", &self->_currentStatus);
      if ( v10 )
      {
LABEL_5:
        v7 = v10;
        -[USBDFUUpdater closeDfuDevice](self, "closeDfuDevice");
        return v7;
      }
      if ( self->_currentStatus.bStatus )
        return -536870212;
    }
    v7 = 0;
    ++self->_currentDataBlock;
  }
  return v7;
}