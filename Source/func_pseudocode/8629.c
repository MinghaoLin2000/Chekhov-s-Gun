__terminateProcess
__int64 __fastcall _terminateProcess(void *a1)
{
  id v1; // x19
  os_log_s *v2; // x20
  __int64 v3; // x23
  __int64 v4; // x0
  int v5; // w23
  RBSProcessIdentifier *v6; // x21
  void *v7; // x21
  void *v8; // x0
  void *v9; // x22
  unsigned __int8 v10; // w26
  os_log_s *v11; // x24
  os_log_s *v12; // x0
  os_log_s *v13; // x25
  id v15; // [xsp+8h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  id v17; // [xsp+14h] [xbp-6Ch]
  __int16 v18; // [xsp+1Ch] [xbp-64h]
  int v19; // [xsp+1Eh] [xbp-62h]
  __int16 v20; // [xsp+22h] [xbp-5Eh]
  os_log_s *v21; // [xsp+24h] [xbp-5Ch]

  v1 = objc_retain(a1);
  if ( (os_variant_allows_internal_security_policies("com.apple.metricmeasurement") & 1) != 0 )
  {
    v2 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
    if ( os_log_type_enabled(v2, OS_LOG_TYPE_INFO) )
    {
      *(_WORD *)buf = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v2,
        OS_LOG_TYPE_INFO,
        "AppleInternal policies must be enabled for successful process termination.",
        buf,
        2u);
    }
    v3 = 0LL;
    goto LABEL_20;
  }
  v4 = _processIdentifierWithProcessName(v1);
  if ( (int)v4 >= 1 )
  {
    v5 = v4;
    v6 = objc_retainAutoreleasedReturnValue(+[RBSProcessIdentifier identifierWithPid:](&OBJC_CLASS___RBSProcessIdentifier, "identifierWithPid:", v4));
    v2 = objc_retainAutoreleasedReturnValue(
           +[RBSProcessPredicate predicateMatchingIdentifier:](
             &OBJC_CLASS___RBSProcessPredicate,
             "predicateMatchingIdentifier:",
             v6));
    objc_release(v6);
    v7 = objc_msgSend(
           objc_alloc_init((Class)&OBJC_CLASS___RBSTerminateContext),
           "initWithExplanation:",
           CFSTR("Terminating process between performance test iterations via MetricMeasurement"));
    objc_msgSend(v7, "setReportType:", 0LL);
    v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___RBSTerminateRequest), "initWithPredicate:context:", v2, v7);
    v9 = v8;
    if ( v8 )
    {
      v15 = 0LL;
      v10 = (unsigned __int8)objc_msgSend(v8, "execute:", &v15);
      v11 = (os_log_s *)objc_retain(v15);
      v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
      v13 = v12;
      if ( (v10 & 1) != 0 )
      {
        if ( os_log_type_enabled(v12, OS_LOG_TYPE_INFO) )
        {
          *(_DWORD *)buf = 138412546;
          v17 = v1;
          v18 = 1024;
          v19 = v5;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v13,
            OS_LOG_TYPE_INFO,
            "Successfully terminated process with name: %@ (%d)",
            buf,
            0x12u);
        }
        objc_release(v13);
        v3 = 1LL;
        goto LABEL_19;
      }
      if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 138412802;
        v17 = v1;
        v18 = 1024;
        v19 = v5;
        v20 = 2112;
        v21 = v11;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v13,
          OS_LOG_TYPE_ERROR,
          "Error occurred when trying to terminate process with name: %@ (%d). Error: %@",
          buf,
          0x1Cu);
      }
      objc_release(v13);
    }
    else
    {
      v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
      if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 138412546;
        v17 = v1;
        v18 = 1024;
        v19 = v5;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v11,
          OS_LOG_TYPE_ERROR,
          "Failed to create RBSTerminateRequest for process name: %@ (%d)",
          buf,
          0x12u);
      }
    }
    v3 = 0LL;
LABEL_19:
    objc_release(v11);
    objc_release(v9);
    objc_release(v7);
    goto LABEL_20;
  }
  v2 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  v3 = 1LL;
  if ( os_log_type_enabled(v2, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138412290;
    v17 = v1;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v2,
      OS_LOG_TYPE_INFO,
      "Unable to find process ID for process name: %@. Skipping termination.",
      buf,
      0xCu);
  }
LABEL_20:
  objc_release(v2);
  objc_release(v1);
  return v3;
}