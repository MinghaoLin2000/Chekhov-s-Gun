__Z12PKCheckAlertiP8NSString
__int64 __fastcall PKCheckAlert(int a1, NSString *a2)
{
  double v2; // d8
  __CFUserNotification *v3; // x0
  bool v4; // zf
  bool v5; // zf
  __int64 v6; // x19
  const void *v7; // x0
  double v9; // d0
  CFOptionFlags v10; // x8
  double v11; // d0
  SInt32 v12; // w20
  CFOptionFlags v13; // x8
  CFOptionFlags responseFlags; // [xsp+8h] [xbp-48h] BYREF

  if ( a1 )
    v2 = (double)a1;
  else
    v2 = 0.001;
  pthread_mutex_lock(&stru_1000C3D10);
  v3 = (__CFUserNotification *)qword_1000C3F38;
  if ( qword_1000C3F38 )
    v4 = dword_1000C3F40 == 3;
  else
    v4 = 0;
  if ( v4 )
  {
    responseFlags = 0LL;
    v6 = 0xFFFFFFFFLL;
    while ( 1 )
    {
      v7 = (const void *)qword_1000C3F38;
      if ( v2 <= 0.0 || qword_1000C3F38 == 0 )
        break;
      if ( v2 <= 1.0 )
        v9 = v2;
      else
        v9 = 1.0;
      if ( CFUserNotificationReceiveResponse((CFUserNotificationRef)qword_1000C3F38, v9, &responseFlags) )
      {
        v6 = 0LL;
      }
      else
      {
        v10 = responseFlags & 3;
        if ( v10 == 3 )
        {
          v6 = 0xFFFFFFFFLL;
          goto LABEL_49;
        }
        if ( v10 == 1 )
          goto LABEL_48;
        if ( (responseFlags & 3) == 0 )
        {
          if ( qword_1000C3F48 )
          {
            PKOpenURL();
            CFRelease((CFTypeRef)qword_1000C3F48);
            qword_1000C3F48 = 0LL;
          }
LABEL_48:
          v6 = 2LL;
LABEL_49:
          v7 = (const void *)qword_1000C3F38;
          if ( !qword_1000C3F38 )
            goto LABEL_57;
          goto LABEL_56;
        }
      }
      pthread_mutex_unlock(&stru_1000C3D10);
      v2 = v2 + -1.0;
      pthread_mutex_lock(&stru_1000C3D10);
    }
    if ( !(_DWORD)v6 )
      goto LABEL_58;
    if ( qword_1000C3F38 )
      goto LABEL_56;
    goto LABEL_57;
  }
  if ( qword_1000C3F38 )
    v5 = dword_1000C3F40 == 4;
  else
    v5 = 1;
  if ( !v5 )
  {
    responseFlags = 0LL;
    if ( v2 <= 0.0 )
    {
      v6 = 0xFFFFFFFFLL;
    }
    else
    {
      do
      {
        if ( v2 <= 1.0 )
          v11 = v2;
        else
          v11 = 1.0;
        v12 = CFUserNotificationReceiveResponse(v3, v11, &responseFlags);
        if ( !v12 )
        {
          v13 = responseFlags & 3;
          if ( v13 != 2 )
          {
            if ( v13 == 3 )
              v6 = 0xFFFFFFFFLL;
            else
              v6 = (unsigned int)(v13 + 1);
            goto LABEL_55;
          }
        }
        pthread_mutex_unlock(&stru_1000C3D10);
        pthread_mutex_lock(&stru_1000C3D10);
        v2 = v2 + -1.0;
        v3 = (__CFUserNotification *)qword_1000C3F38;
      }
      while ( v2 > 0.0 && qword_1000C3F38 != 0 );
      if ( v12 )
      {
        v6 = 0LL;
        goto LABEL_58;
      }
      v6 = 1LL;
    }
LABEL_55:
    v7 = (const void *)qword_1000C3F38;
    if ( qword_1000C3F38 )
    {
LABEL_56:
      CFRelease(v7);
      qword_1000C3F38 = 0LL;
    }
LABEL_57:
    dword_1000C3F40 = 0;
    goto LABEL_58;
  }
  v6 = 0xFFFFFFFFLL;
LABEL_58:
  pthread_mutex_unlock(&stru_1000C3D10);
  return v6;
}