_GetTrbVersion
__int64 __fastcall GetTrbVersion(unsigned __int16 *a1)
{
  __int64 GuidedVariableName; // x0
  __int64 DataFromNvram; // x19
  os_log_s *v4; // x20
  os_log_s *v5; // x19
  id v6; // x20
  os_log_s *v7; // x21
  const char *v8; // x3
  os_log_s *v9; // x1
  uint32_t v10; // w5
  os_log_s *v11; // x22
  int v12; // w8
  int v13; // w9
  int v15; // [xsp+0h] [xbp-D0h] BYREF
  int v16; // [xsp+4h] [xbp-CCh]
  __int16 v17; // [xsp+8h] [xbp-C8h]
  char *v18; // [xsp+Ah] [xbp-C6h]
  uint8_t buf[136]; // [xsp+20h] [xbp-B0h] BYREF

  if ( a1 )
  {
    GuidedVariableName = GetGuidedVariableName(
                           gAppleTamperResistantBootSecureVariableGuid,
                           &AAPLTRBVersion,
                           (char *)buf,
                           0x80uLL);
    if ( (_DWORD)GuidedVariableName )
    {
      DataFromNvram = GuidedVariableName;
      v4 = (os_log_s *)LogCategory_Unspecified();
      if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
      {
        v15 = 67109378;
        v16 = DataFromNvram;
        v17 = 2080;
        v18 = mach_error_string(DataFromNvram);
        _os_log_impl(
          (void *)&_mh_execute_header,
          v4,
          OS_LOG_TYPE_DEFAULT,
          "Error getting TRB Version variable name: %x/%s",
          (uint8_t *)&v15,
          0x12u);
      }
      return DataFromNvram;
    }
    v6 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableData);
    DataFromNvram = GetDataFromNvram(
                      +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", buf),
                      v6);
    if ( (_DWORD)DataFromNvram )
    {
      v7 = (os_log_s *)LogCategory_Unspecified();
      if ( !os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
        goto LABEL_14;
      v15 = 67109378;
      v16 = DataFromNvram;
      v17 = 2080;
      v18 = mach_error_string(DataFromNvram);
      v8 = "Error getting Nonce: %x/%s\n";
      v9 = v7;
      v10 = 18;
    }
    else
    {
      objc_msgSend(v6, "getBytes:length:", a1, 4LL);
      v11 = (os_log_s *)LogCategory_Unspecified();
      if ( !os_log_type_enabled(v11, OS_LOG_TYPE_DEFAULT) )
        goto LABEL_14;
      v12 = *a1;
      v13 = a1[1];
      v15 = 67109376;
      v16 = v12;
      v17 = 1024;
      LODWORD(v18) = v13;
      v8 = "Got TRB Version %d.%d";
      v9 = v11;
      v10 = 14;
    }
    _os_log_impl((void *)&_mh_execute_header, v9, OS_LOG_TYPE_DEFAULT, v8, (uint8_t *)&v15, v10);
LABEL_14:
    if ( v6 )
      objc_release(v6);
    return DataFromNvram;
  }
  v5 = (os_log_s *)LogCategory_Unspecified();
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_DEFAULT, "Invalid Argument", buf, 2u);
  }
  return 4LL;
}