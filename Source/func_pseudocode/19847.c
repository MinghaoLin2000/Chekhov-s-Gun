-[job_spool_client_t DocumentFormat]
NSString *__cdecl -[job_spool_client_t DocumentFormat](job_spool_client_t *self, SEL a2)
{
  __CFString *v3; // x0
  __CFString *v4; // x19
  os_log_s *v5; // x21
  bool v6; // zf
  _BOOL4 v7; // w21
  os_log_s *v8; // x21
  unsigned int v9; // w0
  int v11; // [xsp+0h] [xbp-70h] BYREF
  unsigned int v12; // [xsp+4h] [xbp-6Ch]
  __int16 v13; // [xsp+8h] [xbp-68h]
  _BYTE v14[10]; // [xsp+Ah] [xbp-66h]
  __int16 v15; // [xsp+14h] [xbp-5Ch]
  int v16; // [xsp+16h] [xbp-5Ah]
  __int16 v17; // [xsp+1Ah] [xbp-56h]
  int v18; // [xsp+1Ch] [xbp-54h]
  __int16 v19; // [xsp+20h] [xbp-50h]
  int v20; // [xsp+22h] [xbp-4Eh]
  __int16 v21; // [xsp+26h] [xbp-4Ah]
  int v22; // [xsp+28h] [xbp-48h]
  __int16 v23; // [xsp+2Ch] [xbp-44h]
  int v24; // [xsp+2Eh] [xbp-42h]
  __int16 v25; // [xsp+32h] [xbp-3Eh]
  int v26; // [xsp+34h] [xbp-3Ch]
  __int64 v27; // [xsp+40h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings fileType](self->_printSettings, "fileType"));
  v4 = v3;
  if ( !v3
    || !(unsigned int)-[__CFString caseInsensitiveCompare:](
                        v3,
                        "caseInsensitiveCompare:",
                        CFSTR("application/octet-stream")) )
  {
    v27 = 0LL;
    if ( !-[job_spool_client_t peekFirstEightBytes:](self, "peekFirstEightBytes:", &v27) )
      v27 = 0LL;
    v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
    {
      v11 = 67111168;
      v12 = -[job_spool_client_t clientID](self, "clientID");
      v13 = 1024;
      *(_DWORD *)v14 = (unsigned __int8)v27;
      *(_WORD *)&v14[4] = 1024;
      *(_DWORD *)&v14[6] = BYTE1(v27);
      v15 = 1024;
      v16 = BYTE2(v27);
      v17 = 1024;
      v18 = BYTE3(v27);
      v19 = 1024;
      v20 = BYTE4(v27);
      v21 = 1024;
      v22 = BYTE5(v27);
      v23 = 1024;
      v24 = BYTE6(v27);
      v25 = 1024;
      v26 = HIBYTE(v27);
      _os_log_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_DEFAULT,
        "[Client %d] Auto-typing with header: %02X %02X %02X %02X %02X %02X %02X %02X",
        (uint8_t *)&v11,
        0x38u);
    }
    objc_release(v5);
    if ( (_DWORD)v27 == 1178882085 )
    {
      objc_release(v4);
      v4 = CFSTR("application/pdf");
    }
    else
    {
      v6 = (unsigned __int16)v27 == 55551 && BYTE2(v27) == 255;
      if ( v6 && (v27 & 0xF0000000) == 0xE0000000 )
      {
        objc_release(v4);
        v4 = CFSTR("image/jpeg");
      }
      else if ( (_DWORD)v27 == 1196314761 )
      {
        objc_release(v4);
        v4 = CFSTR("image/png");
      }
      else
      {
        v7 = v27 == 0x54534152494E55LL;
        objc_release(v4);
        if ( v7 )
          v4 = CFSTR("image/urf");
        else
          v4 = CFSTR("application/octet-stream");
      }
    }
    v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
    {
      v9 = -[job_spool_client_t clientID](self, "clientID");
      v11 = 67109378;
      v12 = v9;
      v13 = 2112;
      *(_QWORD *)v14 = v4;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v8,
        OS_LOG_TYPE_DEFAULT,
        "[Client %d] Auto-typed format is \"%@\".",
        (uint8_t *)&v11,
        0x12u);
    }
    objc_release(v8);
    -[PKPrintSettings setFileType:](self->_printSettings, "setFileType:", v4);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v4);
}