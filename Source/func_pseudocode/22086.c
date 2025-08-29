_GetNonce
__int64 __fastcall GetNonce(_WORD *a1, __int64 a2)
{
  os_log_s *v4; // x19
  _BOOL4 v5; // w0
  const char *v6; // x8
  char *v7; // x1
  __int64 GuidedVariableName; // x0
  __int64 DataFromNvram; // x19
  os_log_s *v10; // x20
  id v12; // x21
  os_log_s *v13; // x20
  int v14; // [xsp+0h] [xbp-D0h] BYREF
  int v15; // [xsp+4h] [xbp-CCh]
  __int16 v16; // [xsp+8h] [xbp-C8h]
  char *v17; // [xsp+Ah] [xbp-C6h]
  uint8_t buf[4]; // [xsp+20h] [xbp-B0h] BYREF
  const char *v19; // [xsp+24h] [xbp-ACh]

  v4 = (os_log_s *)LogCategory_Unspecified();
  v5 = os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT);
  if ( a1 && a2 )
  {
    if ( v5 )
    {
      if ( *a1 == 1 )
        v6 = "1";
      else
        v6 = "2+";
      *(_DWORD *)buf = 136315138;
      v19 = v6;
      _os_log_impl((void *)&_mh_execute_header, v4, OS_LOG_TYPE_DEFAULT, "Looking for TRB Version %s Nonce.", buf, 0xCu);
    }
    if ( *a1 == 1 )
      v7 = &AAPLTRBNonceTrb10;
    else
      v7 = &AAPLTRBNonce;
    GuidedVariableName = GetGuidedVariableName(gAppleTamperResistantBootSecureVariableGuid, v7, (char *)buf, 0x80uLL);
    if ( (_DWORD)GuidedVariableName )
    {
      DataFromNvram = GuidedVariableName;
      v10 = (os_log_s *)LogCategory_Unspecified();
      if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
      {
        v14 = 67109378;
        v15 = DataFromNvram;
        v16 = 2080;
        v17 = mach_error_string(DataFromNvram);
        _os_log_impl(
          (void *)&_mh_execute_header,
          v10,
          OS_LOG_TYPE_DEFAULT,
          "Error getting Nonce variable name: %x/%s",
          (uint8_t *)&v14,
          0x12u);
      }
    }
    else
    {
      v12 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableData);
      DataFromNvram = GetDataFromNvram(
                        +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", buf),
                        v12);
      if ( (_DWORD)DataFromNvram )
      {
        v13 = (os_log_s *)LogCategory_Unspecified();
        if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
        {
          v14 = 67109378;
          v15 = DataFromNvram;
          v16 = 2080;
          v17 = mach_error_string(DataFromNvram);
          _os_log_impl(
            (void *)&_mh_execute_header,
            v13,
            OS_LOG_TYPE_DEFAULT,
            "Error getting Nonce: %x/%s",
            (uint8_t *)&v14,
            0x12u);
        }
      }
      else
      {
        objc_msgSend(v12, "getBytes:length:", a2, 8LL);
      }
      if ( v12 )
        objc_release(v12);
    }
  }
  else
  {
    if ( v5 )
    {
      *(_WORD *)buf = 0;
      _os_log_impl((void *)&_mh_execute_header, v4, OS_LOG_TYPE_DEFAULT, "Invalid Argument", buf, 2u);
    }
    return 4LL;
  }
  return DataFromNvram;
}