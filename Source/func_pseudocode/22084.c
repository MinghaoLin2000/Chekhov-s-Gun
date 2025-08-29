_GetDataFromNvram
__int64 __fastcall GetDataFromNvram(void *a1, void *a2)
{
  __int64 VariableAsCFMutableData; // x19
  os_log_s *v5; // x21
  void *v6; // x20
  char *v7; // x0
  CFMutableDataRef v9; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  const char *v11; // [xsp+14h] [xbp-4Ch]
  __int16 v12; // [xsp+1Ch] [xbp-44h]
  void *v13; // [xsp+1Eh] [xbp-42h]
  __int16 v14; // [xsp+26h] [xbp-3Ah]
  char *v15; // [xsp+28h] [xbp-38h]

  v9 = 0LL;
  VariableAsCFMutableData = 4LL;
  if ( a1 && a2 )
  {
    VariableAsCFMutableData = GetVariableAsCFMutableData((const char *)objc_msgSend(a1, "UTF8String"), &v9);
    if ( (_DWORD)VariableAsCFMutableData )
    {
      v5 = (os_log_s *)LogCategory_Unspecified();
      if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
      {
        v6 = objc_msgSend(a1, "UTF8String");
        v7 = mach_error_string(VariableAsCFMutableData);
        *(_DWORD *)buf = 136315650;
        v11 = "kern_return_t GetDataFromNvram(NSString *, NSMutableData *)";
        v12 = 2080;
        v13 = v6;
        v14 = 2080;
        v15 = v7;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v5,
          OS_LOG_TYPE_DEFAULT,
          "%s: Error getting variable - '%s': %s",
          buf,
          0x20u);
      }
    }
    else
    {
      objc_msgSend(a2, "appendData:", v9);
    }
  }
  return VariableAsCFMutableData;
}