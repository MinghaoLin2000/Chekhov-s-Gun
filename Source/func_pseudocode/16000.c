_uarpPlatformDarwinLogError
__int64 __fastcall uarpPlatformDarwinLogError(
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
  os_log_s *v10; // x19
  __int64 result; // x0

  vsnprintf(byte_10002B5A0, 0x200uLL, a3, &a9);
  v10 = (os_log_s *)sub_100013DA0(a2);
  result = os_log_type_enabled(v10, OS_LOG_TYPE_ERROR);
  if ( (_DWORD)result )
    return sub_100019660(v10);
  return result;
}