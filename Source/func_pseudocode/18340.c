+[ATEnforcementService appTrackingTransparencyEnforcementReason]
signed __int64 __cdecl +[ATEnforcementService appTrackingTransparencyEnforcementReason](id a1, SEL a2)
{
  void *v3; // x19
  void *v4; // x20
  void *v5; // x22
  id v6; // x21
  void *v7; // x23
  void *v8; // x0
  id v9; // x23
  id v11; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  void *v13; // [xsp+14h] [xbp-4Ch]
  __int16 v14; // [xsp+1Ch] [xbp-44h]
  id v15; // [xsp+1Eh] [xbp-42h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "appTrackingTransparencyBag"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "integerForKey:", CFSTR("AppTrackingTransparencyEnforcementReason")));
  v11 = 0LL;
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "valueWithError:", &v11));
  v6 = objc_retain(v11);
  if ( v5 )
  {
    v7 = objc_msgSend(a1, "reasonCodeFromNumberValue:", v5);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      v8 = (void *)objc_opt_class(a1);
      *(_DWORD *)buf = 138412546;
      v13 = v8;
      v14 = 2112;
      v15 = v6;
      v9 = objc_retain(v8);
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "%@: Unable to get the 'AppTrackingTransparencyEnforcementReason' value from the bag. Error: %@",
        buf,
        0x16u);
      objc_release(v9);
    }
    v7 = 0LL;
  }
  objc_release(v5);
  objc_release(v4);
  objc_release(v6);
  objc_release(v3);
  return (signed __int64)v7;
}