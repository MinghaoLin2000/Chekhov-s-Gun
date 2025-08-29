_uarpLogDebug
__int64 uarpLogDebug(__int64 a1, char *__format, ...)
{
  os_log_s *v3; // x19
  __int64 result; // x0
  va_list va; // [xsp+30h] [xbp+10h] BYREF

  va_start(va, __format);
  vsnprintf(byte_10002AFA0, 0x200uLL, __format, va);
  v3 = (os_log_s *)sub_100013DA0(a1);
  result = os_log_type_enabled(v3, OS_LOG_TYPE_DEBUG);
  if ( (_DWORD)result )
    return sub_100019564(v3);
  return result;
}