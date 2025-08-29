_GetPropertyAsBOOL
__int64 __fastcall GetPropertyAsBOOL(const __CFString *a1, _BYTE *a2)
{
  __int64 v3; // x19
  os_log_s *v4; // x21
  os_log_s *v5; // x21
  os_log_s *v6; // x19
  os_log_s *v8; // x20
  uint8_t v9[16]; // [xsp+0h] [xbp-50h] BYREF
  uint8_t v10[16]; // [xsp+10h] [xbp-40h] BYREF
  uint8_t buf[8]; // [xsp+20h] [xbp-30h] BYREF
  CFStringRef theString1; // [xsp+28h] [xbp-28h] BYREF

  theString1 = 0LL;
  if ( a1 && a2 )
  {
    *a2 = 0;
    v3 = CopyPropertyAsCFString(a1, &theString1);
    if ( theString1 )
    {
      if ( CFStringCompare(theString1, CFSTR("1"), 1uLL) )
      {
        v4 = (os_log_s *)LogCategory_Unspecified();
        if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
        {
          *(_WORD *)buf = 0;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v4,
            OS_LOG_TYPE_DEFAULT,
            "string match 1, setting result to YES",
            buf,
            2u);
        }
        *a2 = 1;
      }
      if ( CFStringCompare(theString1, CFSTR("true"), 1uLL) )
      {
        v5 = (os_log_s *)LogCategory_Unspecified();
        if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
        {
          *(_WORD *)v10 = 0;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v5,
            OS_LOG_TYPE_DEFAULT,
            "string match true, setting result to YES",
            v10,
            2u);
        }
        *a2 = 1;
      }
      CFRelease(theString1);
    }
    else if ( (_DWORD)v3 )
    {
      v8 = (os_log_s *)LogCategory_Unspecified();
      if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
      {
        *(_WORD *)v9 = 0;
        _os_log_impl((void *)&_mh_execute_header, v8, OS_LOG_TYPE_DEFAULT, "No machine locked value found", v9, 2u);
      }
    }
  }
  else
  {
    v6 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_ERROR) )
      sub_10000669C(v6);
    return 4LL;
  }
  return v3;
}