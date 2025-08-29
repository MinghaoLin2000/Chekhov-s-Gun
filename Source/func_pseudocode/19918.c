+[lite_job_t getJobAttributes:includeThumbnail:completionHandler:]
// local variable allocation has failed, the output may be wrong!
void __cdecl +[lite_job_t getJobAttributes:includeThumbnail:completionHandler:](id a1, SEL a2, int a3, bool a4, id a5)
{
  _BOOL8 v5; // x21
  void (__fastcall **v7)(id, void *); // x19
  id v8; // x20
  void *v9; // x23
  __int64 v10; // x25
  void *i; // x26
  void *v12; // x24
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-D8h] BYREF

  v5 = a4;
  v7 = (void (__fastcall **)(id, void *))objc_retain(a5);
  pthread_mutex_lock(&stru_1000C3AA0);
  v15 = 0u;
  v16 = 0u;
  v13 = 0u;
  v14 = 0u;
  v8 = objc_retain((id)qword_1000C3EE8);
  v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v9 )
  {
    v10 = *(_QWORD *)v14;
    while ( 2 )
    {
      for ( i = 0LL; i != v9; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v10 )
          objc_enumerationMutation(v8);
        v12 = *(void **)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i);
        if ( (unsigned int)objc_msgSend(v12, "printd_job_id", (_QWORD)v13) == a3 )
        {
          v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "getJobAttributes:", v5));
          goto LABEL_11;
        }
      }
      v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
      if ( v9 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v8);
  pthread_mutex_unlock(&stru_1000C3AA0);
  v7[2](v7, v9);
  objc_release(v9);
  objc_release(v7);
}