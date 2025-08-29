_piston_make_utf16_treestr
__int64 __fastcall piston_make_utf16_treestr(const char *a1, const char *a2, _QWORD *a3)
{
  size_t v6; // x22
  size_t v7; // x23
  char *v8; // x0
  char *v9; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  *a3 = 0LL;
  v6 = strlen(a1);
  v7 = v6 + strlen(a2);
  v8 = (char *)malloc_type_malloc(v7 + 4, 0x5B198832uLL);
  if ( v8 )
  {
    v9 = v8;
    sprintf(v8, "\\\\%s\\%s", a1, a2);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return piston_utf8_to_utf16(v9, v7 + 3, a3);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_1000103DC();
    return 0LL;
  }
}