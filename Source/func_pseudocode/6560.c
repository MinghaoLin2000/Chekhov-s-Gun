-[MediaConversionRequestTracker requestCompletionPerfCheckExtraInformation]
NSDictionary *__cdecl -[MediaConversionRequestTracker requestCompletionPerfCheckExtraInformation](
        MediaConversionRequestTracker *self,
        SEL a2)
{
  NSDictionary *cachedPerfCheckInformation; // x0
  NSDictionary **p_cachedPerfCheckInformation; // x19
  NSDictionary *v5; // x22
  pc_session *pc_session; // x0
  int v7; // w0
  int v8; // w21
  NSNumber *v9; // x21
  NSNumber *v10; // x23
  NSNumber *v11; // x24
  NSNumber *v12; // x25
  double v14; // [xsp+8h] [xbp-C8h] BYREF
  double v15; // [xsp+10h] [xbp-C0h] BYREF
  __int64 v16; // [xsp+18h] [xbp-B8h] BYREF
  _BYTE buf[24]; // [xsp+20h] [xbp-B0h] BYREF
  _QWORD v18[4]; // [xsp+38h] [xbp-98h] BYREF
  _QWORD v19[4]; // [xsp+58h] [xbp-78h] BYREF
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  p_cachedPerfCheckInformation = &self->_cachedPerfCheckInformation;
  cachedPerfCheckInformation = self->_cachedPerfCheckInformation;
  if ( cachedPerfCheckInformation )
  {
    v5 = objc_retain(cachedPerfCheckInformation);
  }
  else
  {
    pc_session = self->_pc_session;
    if ( pc_session )
    {
      v7 = pc_session_end(pc_session, a2);
      if ( v7 )
      {
        v8 = v7;
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 136315138;
          *(_QWORD *)&buf[4] = strerror(v8);
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Unable to end performance check session: %s",
            buf,
            0xCu);
        }
        v5 = 0LL;
      }
      else
      {
        v16 = 0LL;
        *(_QWORD *)buf = 0LL;
        pc_session_get_value(self->_pc_session, 0LL, 0x6C6966657065616BLL, buf, &v16, 0LL);
        v15 = 0.0;
        pc_session_get_value(self->_pc_session, 0LL, 0x63707574696D6500LL, &v15, &v16, 0LL);
        v14 = 0.0;
        pc_session_get_value(self->_pc_session, 0LL, 0x637075696E737472LL, &v14, &v16, 0LL);
        v18[0] = CFSTR("processMemoryPeakKiloBytesInitial");
        v9 = objc_retainAutoreleasedReturnValue(
               +[NSNumber numberWithDouble:](
                 &OBJC_CLASS___NSNumber,
                 "numberWithDouble:",
                 self->_initialProcessMemoryPeak));
        v19[0] = v9;
        v18[1] = CFSTR("processMemoryPeakKiloBytesAfterRequest");
        v10 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", *(double *)buf));
        v19[1] = v10;
        v18[2] = CFSTR("cpuTimeMilliSeconds");
        v11 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v15 / 1000000.0));
        v19[2] = v11;
        v18[3] = CFSTR("cpuMillionInstructions");
        v12 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v14 / 1000000.0));
        v19[3] = v12;
        v5 = objc_retainAutoreleasedReturnValue(
               +[NSDictionary dictionaryWithObjects:forKeys:count:](
                 &OBJC_CLASS___NSDictionary,
                 "dictionaryWithObjects:forKeys:count:",
                 v19,
                 v18,
                 4LL));
        objc_release(v12);
        objc_release(v11);
        objc_release(v10);
        objc_release(v9);
      }
      pc_session_destroy(self->_pc_session);
      self->_pc_session = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    objc_storeStrong((id *)p_cachedPerfCheckInformation, v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}