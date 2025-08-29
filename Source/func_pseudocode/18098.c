_piston_negotiate_easy
__int64 __fastcall piston_negotiate_easy(int *a1)
{
  int v1; // w19
  _DWORD v3[2]; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = *a1;
  if ( (unsigned int)(*a1 - 1) >= 2 )
  {
    if ( v1 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
      {
        v3[0] = 67109120;
        v3[1] = v1;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_INFO,
          "SMB Protocol %d not supported\n",
          (uint8_t *)v3,
          8u);
      }
      return 22LL;
    }
    else
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return piston_smb1_negotiate_easy();
    }
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return piston_smb2_negotiate_easy();
  }
}