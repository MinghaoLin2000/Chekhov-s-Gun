__Z19PKDisplayQuotaAlertPK10__CFStringS1_S1_P8NSString
void __fastcall PKDisplayQuotaAlert(const __CFString *a1, const __CFString *a2, const __CFString *a3, id a4)
{
  int v6; // w21
  id v7; // x19
  os_log_s *v8; // x20
  const __CFString *v9; // x8
  const __CFString *v10; // x8
  const char *v11; // x3
  int v12; // [xsp+0h] [xbp-60h] BYREF
  const char *v13; // [xsp+4h] [xbp-5Ch]
  __int16 v14; // [xsp+Ch] [xbp-54h]
  id v15; // [xsp+Eh] [xbp-52h]
  __int16 v16; // [xsp+16h] [xbp-4Ah]
  const __CFString *v17; // [xsp+18h] [xbp-48h]

  v6 = (int)a1;
  v7 = objc_retain(a4);
  if ( a3 )
    qword_1000C3F48 = (__int64)CFURLCreateWithString(kCFAllocatorDefault, a3, 0LL);
  pthread_mutex_lock(&stru_1000C3D10);
  if ( qword_1000C3F38 )
  {
    v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
    {
      if ( (unsigned int)dword_1000C3F40 > 4 )
        v9 = CFSTR("UNKNOWN");
      else
        v9 = off_10009EE50[dword_1000C3F40];
      v12 = 136315650;
      v13 = "PKDisplayQuotaAlert";
      v14 = 2112;
      v15 = v7;
      v16 = 2112;
      v17 = v9;
      v11 = "#### %s: from %@, already have alert up at level %@";
LABEL_14:
      _os_log_impl((void *)&_mh_execute_header, v8, OS_LOG_TYPE_DEFAULT, v11, (uint8_t *)&v12, 0x20u);
    }
  }
  else
  {
    qword_1000C3F38 = sub_100042FFC(v6, 0, a2);
    dword_1000C3F40 = 3;
    v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
    {
      if ( (unsigned int)dword_1000C3F40 > 4 )
        v10 = CFSTR("UNKNOWN");
      else
        v10 = off_10009EE50[dword_1000C3F40];
      v12 = 136315650;
      v13 = "PKDisplayQuotaAlert";
      v14 = 2112;
      v15 = v7;
      v16 = 2112;
      v17 = v10;
      v11 = "#### %s: from %@, created new alert level %@";
      goto LABEL_14;
    }
  }
  objc_release(v8);
  pthread_mutex_unlock(&stru_1000C3D10);
  objc_release(v7);
}