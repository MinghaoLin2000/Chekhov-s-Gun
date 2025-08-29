-[USBDFUUpdater dfuSetState:]
int __cdecl -[USBDFUUpdater dfuSetState:](USBDFUUpdater *self, SEL a2, unsigned __int8 a3)
{
  int v3; // w21
  __int64 v4; // x20
  unsigned __int8 *p_bState; // x22
  __int64 v7; // x0
  OS_os_log *log; // x19
  int result; // w0
  OS_os_log *v10; // x21
  int v11; // w8
  OS_os_log *v12; // x19
  OS_os_log *v13; // x20
  int v14; // [xsp+0h] [xbp-50h] BYREF
  const char *v15; // [xsp+4h] [xbp-4Ch]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  if ( !self->_dev )
  {
    LODWORD(v4) = -536870195;
    return v4;
  }
  v3 = a3;
  if ( a3 > 0xAu )
  {
    LODWORD(v4) = -536870206;
    return v4;
  }
  p_bState = &self->_currentStatus.bState;
  v7 = -[USBDFUUpdater dfuGetStateCmd:](self, "dfuGetStateCmd:", &self->_currentStatus.bState);
  if ( (_DWORD)v7 )
  {
    v4 = v7;
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100017194(v4, log);
    return v4;
  }
  LODWORD(v4) = -536870911;
  switch ( v3 )
  {
    case 0:
      v10 = self->_log;
      if ( self->_currentStatus.bState == 2 )
      {
        if ( os_log_type_enabled(v10, OS_LOG_TYPE_INFO) )
        {
          v14 = 136315138;
          v15 = "-[USBDFUUpdater dfuSetState:]";
          _os_log_impl(
            (void *)&_mh_execute_header,
            v10,
            OS_LOG_TYPE_INFO,
            "%s: Change to kAPP_IDLE through DFU_DETACH_TO_APP",
            (uint8_t *)&v14,
            0xCu);
        }
        LODWORD(v4) = -[USBDFUUpdater dfuDetachToAppCmd](self, "dfuDetachToAppCmd");
      }
      else
      {
        LODWORD(v4) = -536870206;
        if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
          sub_100017104(p_bState, v10);
      }
      return v4;
    case 2:
      v11 = *p_bState;
      if ( v11 == 2 )
      {
        LODWORD(v4) = 0;
      }
      else if ( v11 == 10 )
      {
        v12 = self->_log;
        if ( os_log_type_enabled(v12, OS_LOG_TYPE_INFO) )
        {
          v14 = 136315138;
          v15 = "-[USBDFUUpdater dfuSetState:]";
          _os_log_impl(
            (void *)&_mh_execute_header,
            v12,
            OS_LOG_TYPE_INFO,
            "%s: Change to kDFU_IDLE through DFU_CLRSTATUS",
            (uint8_t *)&v14,
            0xCu);
        }
        LODWORD(v4) = -536870212;
      }
      else
      {
        v13 = self->_log;
        if ( os_log_type_enabled(v13, OS_LOG_TYPE_INFO) )
        {
          v14 = 136315138;
          v15 = "-[USBDFUUpdater dfuSetState:]";
          _os_log_impl(
            (void *)&_mh_execute_header,
            v13,
            OS_LOG_TYPE_INFO,
            "%s: Change to kDFU_IDLE through DFU_ABORT",
            (uint8_t *)&v14,
            0xCu);
        }
        LODWORD(v4) = 0;
        self->_currentDataBlock = 0;
      }
      return v4;
    case 3:
    case 9:
      if ( *p_bState == 2 )
        LODWORD(v4) = -536870212;
      else
        LODWORD(v4) = -536870206;
      return v4;
    case 7:
      LODWORD(v4) = -536870212;
      if ( *p_bState != 6 )
        return v4;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      result = -[USBDFUUpdater dfuGetStatusCmd:](self, "dfuGetStatusCmd:", &self->_currentStatus);
      break;
    default:
      return v4;
  }
  return result;
}