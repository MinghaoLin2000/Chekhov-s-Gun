-[MediaConversionRequestTracker setupPerfCheck]
void __cdecl -[MediaConversionRequestTracker setupPerfCheck](MediaConversionRequestTracker *self, SEL a2)
{
  pc_session *v3; // x0
  pc_session *v4; // x20
  __int64 v5; // x0
  int v6; // w0
  int v7; // w20
  char *v8; // x0
  char *v9; // x0
  int __errnum; // [xsp+Ch] [xbp-34h] BYREF
  uint8_t buf[24]; // [xsp+10h] [xbp-30h] BYREF

  __errnum = 0;
  v3 = (pc_session *)pc_session_create(&__errnum, __stderrp, __stderrp);
  self->_pc_session = v3;
  if ( v3 )
  {
    v4 = v3;
    v5 = getpid();
    pc_session_set_procpid(v4, v5);
    v6 = pc_session_begin(self->_pc_session);
    __errnum = v6;
    if ( v6 )
    {
      v7 = v6;
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v9 = strerror(v7);
        *(_DWORD *)buf = 136315138;
        *(_QWORD *)&buf[4] = v9;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Unable to begin performance check session: %s",
          buf,
          0xCu);
      }
      pc_session_destroy(self->_pc_session);
      self->_pc_session = 0LL;
    }
    else
    {
      *(_QWORD *)buf = 0LL;
      pc_session_get_value(self->_pc_session, 0LL, 0x6C6966657065616BLL, &self->_initialProcessMemoryPeak, buf, 0LL);
    }
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    v8 = strerror(__errnum);
    *(_DWORD *)buf = 136315138;
    *(_QWORD *)&buf[4] = v8;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to create performance check session: %s",
      buf,
      0xCu);
  }
}