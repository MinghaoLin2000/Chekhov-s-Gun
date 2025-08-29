__Z14PKDisplayRetryPK10__CFStringS1_P8NSString
void __fastcall PKDisplayRetry(const __CFString *a1, const __CFString *a2, id a3)
{
  int v4; // w21
  id v5; // x19
  os_log_s *v6; // x20
  const __CFString *v7; // x8
  const __CFString *v8; // x8
  const char *v9; // x3
  int v10; // [xsp+0h] [xbp-60h] BYREF
  const char *v11; // [xsp+4h] [xbp-5Ch]
  __int16 v12; // [xsp+Ch] [xbp-54h]
  id v13; // [xsp+Eh] [xbp-52h]
  __int16 v14; // [xsp+16h] [xbp-4Ah]
  const __CFString *v15; // [xsp+18h] [xbp-48h]

  v4 = (int)a1;
  v5 = objc_retain(a3);
  pthread_mutex_lock(&stru_1000C3D10);
  if ( qword_1000C3F38 )
  {
    v6 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_DEFAULT) )
    {
      if ( (unsigned int)dword_1000C3F40 > 4 )
        v7 = CFSTR("UNKNOWN");
      else
        v7 = off_10009EE50[dword_1000C3F40];
      v10 = 136315650;
      v11 = "PKDisplayRetry";
      v12 = 2112;
      v13 = v5;
      v14 = 2112;
      v15 = v7;
      v9 = "#### %s: from %@, already have alert up at level %@";
LABEL_12:
      _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_DEFAULT, v9, (uint8_t *)&v10, 0x20u);
    }
  }
  else
  {
    qword_1000C3F38 = sub_100042FFC(v4, 0, a2);
    dword_1000C3F40 = 2;
    v6 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_DEFAULT) )
    {
      if ( (unsigned int)dword_1000C3F40 > 4 )
        v8 = CFSTR("UNKNOWN");
      else
        v8 = off_10009EE50[dword_1000C3F40];
      v10 = 136315650;
      v11 = "PKDisplayRetry";
      v12 = 2112;
      v13 = v5;
      v14 = 2112;
      v15 = v8;
      v9 = "#### %s: from %@, created new alert level %@";
      goto LABEL_12;
    }
  }
  objc_release(v6);
  pthread_mutex_unlock(&stru_1000C3D10);
  objc_release(v5);
}