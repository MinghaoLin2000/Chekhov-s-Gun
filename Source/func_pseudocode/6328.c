+[PAMediaConversionServiceSharedUtilitiesServiceSide checkConversionResultForOutputCorruptionAndMarkJobAsFailed:]
void __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide checkConversionResultForOutputCorruptionAndMarkJobAsFailed:](
        id a1,
        SEL a2,
        id a3)
{
  id v5; // x19
  void *v6; // x20
  void *v7; // x24
  void *v8; // x21
  unsigned int v9; // w24
  NSUserDefaults *v10; // x26
  id v11; // x22
  unsigned int v12; // w26
  unsigned int v13; // w23
  unsigned int v14; // w25
  NSAssertionHandler *v15; // x24
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  _BYTE v17[10]; // [xsp+14h] [xbp-5Ch]
  _BYTE v18[10]; // [xsp+1Eh] [xbp-52h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "mainSourceResourceURL"));
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "destinationResourceURLCollection"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "resourceURLForRole:", CFSTR("PAMediaConversionResourceRoleMainResource")));
    objc_release(v7);
    if ( !v8 )
    {
      v15 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v15,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        a1,
        CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
        1467LL,
        CFSTR("Unexpected nil output url: %@/%@"),
        v6,
        0LL);
      objc_release(v15);
    }
    v9 = (unsigned int)objc_msgSend(a1, "isOutputCorruptionLikelyComparingFileSizeOfInputURL:toOutputURL:", v6, v8);
    v10 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
    v11 = objc_retainAutoreleasedReturnValue(
            -[NSUserDefaults objectForKey:](
              v10,
              "objectForKey:",
              CFSTR("MediaConversionServiceUseSSIMOutputCorruptionCheck")));
    objc_release(v10);
    if ( (objc_opt_respondsToSelector(v11, "boolValue") & 1) == 0 )
      goto LABEL_9;
    v12 = (unsigned int)objc_msgSend(v11, "boolValue");
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 67109634;
      *(_DWORD *)v17 = 0;
      *(_WORD *)&v17[4] = 1024;
      *(_DWORD *)&v17[6] = v12;
      *(_WORD *)v18 = 2112;
      *(_QWORD *)&v18[2] = CFSTR("MediaConversionServiceUseSSIMOutputCorruptionCheck");
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Overriding enabled state of output corruption SSIM check from %d to %d because %@ user default key is set",
        buf,
        0x18u);
    }
    if ( v12 )
    {
      v13 = (unsigned int)objc_msgSend(a1, "isOutputCorruptionLikelyUsingSSIMOfInputURL:toOutputURL:", v6, v8);
      v14 = v13;
    }
    else
    {
LABEL_9:
      v14 = 0;
      v13 = v9;
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 67109632;
      *(_DWORD *)v17 = v14;
      *(_WORD *)&v17[4] = 1024;
      *(_DWORD *)&v17[6] = v9;
      *(_WORD *)v18 = 1024;
      *(_DWORD *)&v18[2] = v13;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Output corruption checks: %d/%d (%d)",
        buf,
        0x14u);
    }
    if ( v13 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_FAULT) )
    {
      *(_DWORD *)buf = 138412546;
      *(_QWORD *)v17 = v6;
      *(_WORD *)&v17[8] = 2112;
      *(_QWORD *)v18 = v8;
      _os_log_fault_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_FAULT,
        "Possible conversion output corruption detected for %@/%@",
        buf,
        0x16u);
    }
    objc_release(v11);
    objc_release(v8);
  }
  objc_release(v6);
  objc_release(v5);
}