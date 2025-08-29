_uarpLogInfo
void uarpLogInfo(__int64 a1, char *__format, ...)
{
  os_log_s *v3; // x20
  uint8_t buf[4]; // [xsp+10h] [xbp-30h] BYREF
  char *v5; // [xsp+14h] [xbp-2Ch]
  va_list va; // [xsp+50h] [xbp+10h] BYREF

  va_start(va, __format);
  vsnprintf(byte_10002B1A0, 0x200uLL, __format, va);
  v3 = (os_log_s *)sub_100013DA0(a1);
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315138;
    v5 = byte_10002B1A0;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_INFO, "%s\n", buf, 0xCu);
  }
}