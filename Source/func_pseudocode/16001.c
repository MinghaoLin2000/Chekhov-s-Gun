_uarpPlatformDarwinLogInfo
void __fastcall uarpPlatformDarwinLogInfo(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  os_log_s *v10; // x20
  uint8_t buf[4]; // [xsp+10h] [xbp-30h] BYREF
  char *v12; // [xsp+14h] [xbp-2Ch]

  vsnprintf(byte_10002B7A0, 0x200uLL, a3, &a9);
  v10 = (os_log_s *)sub_100013DA0(a2);
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315138;
    v12 = byte_10002B7A0;
    _os_log_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_INFO, "%s\n", buf, 0xCu);
  }
}