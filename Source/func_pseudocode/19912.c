+[lite_job_t cancelJob:]
void __cdecl +[lite_job_t cancelJob:](id a1, SEL a2, int a3)
{
  id v4; // x19
  void *v5; // x21
  __int64 v6; // x23
  void *i; // x24
  void *v8; // x22
  __int128 v9; // [xsp+0h] [xbp-110h] BYREF
  __int128 v10; // [xsp+10h] [xbp-100h]
  __int128 v11; // [xsp+20h] [xbp-F0h]
  __int128 v12; // [xsp+30h] [xbp-E0h]
  _BYTE v13[128]; // [xsp+48h] [xbp-C8h] BYREF

  pthread_mutex_lock(&stru_1000C3AA0);
  v9 = 0u;
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v4 = objc_retain((id)qword_1000C3EF0);
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v9, v13, 16LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)v10;
    while ( 2 )
    {
      for ( i = 0LL; i != v5; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v10 != v6 )
          objc_enumerationMutation(v4);
        v8 = *(void **)(*((_QWORD *)&v9 + 1) + 8LL * (_QWORD)i);
        if ( (unsigned int)objc_msgSend(v8, "printd_job_id", (_QWORD)v9) == a3 )
        {
          objc_msgSend(v8, "cancelNoLock");
          goto LABEL_11;
        }
      }
      v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v9, v13, 16LL);
      if ( v5 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v4);
  pthread_mutex_unlock(&stru_1000C3AA0);
}