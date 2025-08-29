_netfs_getLibraryEntryOverXPC
__int64 __fastcall netfs_getLibraryEntryOverXPC(__int64 a1, _QWORD *a2)
{
  void *v4; // x20
  __int64 v5; // x22
  void *v7; // x21
  unsigned int v8; // w22
  char *v9; // x21
  void *v10; // x23
  void *v11; // x23
  void *v12; // x23
  void *v13; // x23
  void *v14; // x22
  void *v15; // x23
  int v16; // w8
  __int64 v17; // x24
  void *v18; // x26
  int v19; // w27
  __int64 v20; // x28
  __int128 v21; // [xsp+0h] [xbp-220h] BYREF
  __int128 v22; // [xsp+10h] [xbp-210h]
  __int128 v23; // [xsp+20h] [xbp-200h]
  __int128 v24; // [xsp+30h] [xbp-1F0h]
  _QWORD v25[6]; // [xsp+48h] [xbp-1D8h] BYREF
  _QWORD v26[5]; // [xsp+78h] [xbp-1A8h] BYREF
  __int64 v27; // [xsp+A0h] [xbp-180h] BYREF
  __int64 *v28; // [xsp+A8h] [xbp-178h]
  __int64 v29; // [xsp+B0h] [xbp-170h]
  __int64 (__fastcall *v30)(); // [xsp+B8h] [xbp-168h]
  __int64 (__fastcall *v31)(); // [xsp+C0h] [xbp-160h]
  id v32; // [xsp+C8h] [xbp-158h]
  __int64 v33; // [xsp+D0h] [xbp-150h] BYREF
  __int64 *v34; // [xsp+D8h] [xbp-148h]
  __int64 v35; // [xsp+E0h] [xbp-140h]
  __int64 (__fastcall *v36)(); // [xsp+E8h] [xbp-138h]
  __int64 (__fastcall *v37)(); // [xsp+F0h] [xbp-130h]
  id v38; // [xsp+F8h] [xbp-128h]
  _QWORD v39[5]; // [xsp+100h] [xbp-120h] BYREF
  id v40; // [xsp+128h] [xbp-F8h]
  _BYTE v41[128]; // [xsp+130h] [xbp-F0h] BYREF

  v39[0] = 0LL;
  v39[1] = v39;
  v39[2] = 0x3032000000LL;
  v39[3] = sub_10000B570;
  v39[4] = sub_10000B580;
  v40 = 0LL;
  v33 = 0LL;
  v34 = &v33;
  v35 = 0x3032000000LL;
  v36 = sub_10000B570;
  v37 = sub_10000B580;
  v38 = 0LL;
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x3032000000LL;
  v30 = sub_10000B570;
  v31 = sub_10000B580;
  v32 = 0LL;
  pthread_mutex_lock(&stru_100018F48);
  if ( a1 && a2 && qword_100018FF0 )
  {
    pthread_mutex_unlock(&stru_100018F48);
    v26[0] = _NSConcreteStackBlock;
    v26[1] = 3254779904LL;
    v26[2] = sub_10000BBA4;
    v26[3] = &unk_1000146E0;
    v26[4] = v39;
    v4 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)qword_100018FF0, "synchronousRemoteObjectProxyWithErrorHandler:", v26));
    v25[0] = _NSConcreteStackBlock;
    v25[1] = 3254779904LL;
    v25[2] = sub_10000BBB4;
    v25[3] = &unk_100014740;
    v25[4] = &v33;
    v25[5] = &v27;
    objc_msgSend(v4, "getLibraryEntryInfo:withReply:", a1, v25);
    if ( v34[5]
      || (v7 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)v28[5], "objectForKeyedSubscript:", CFSTR("nschemes"))),
          v8 = (unsigned int)objc_msgSend(v7, "integerValue"),
          objc_release(v7),
          (v9 = (char *)malloc_type_malloc(8LL * v8 + 136, 0x27E67DDAuLL)) == 0LL) )
    {
      v5 = 0LL;
    }
    else
    {
      v10 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend((id)v28[5], "objectForKeyedSubscript:", CFSTR("plugin_path"))));
      *((_QWORD *)v9 + 1) = strdup((const char *)objc_msgSend(v10, "UTF8String"));
      objc_release(v10);
      *((_QWORD *)v9 + 2) = 0LL;
      pthread_mutex_init((pthread_mutex_t *)(v9 + 24), 0LL);
      *((_QWORD *)v9 + 11) = 0LL;
      *((_QWORD *)v9 + 12) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
      v11 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend((id)v28[5], "objectForKeyedSubscript:", CFSTR("fstypename"))));
      *((_QWORD *)v9 + 14) = strdup((const char *)objc_msgSend(v11, "UTF8String"));
      objc_release(v11);
      v12 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend((id)v28[5], "objectForKeyedSubscript:", CFSTR("prefix"))));
      *((_QWORD *)v9 + 15) = strdup((const char *)objc_msgSend(v12, "UTF8String"));
      objc_release(v12);
      v13 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)v28[5], "objectForKeyedSubscript:", CFSTR("media_type")));
      *((_DWORD *)v9 + 32) = (unsigned int)objc_msgSend(v13, "integerValue");
      objc_release(v13);
      *((_DWORD *)v9 + 33) = v8;
      v23 = 0u;
      v24 = 0u;
      v21 = 0u;
      v22 = 0u;
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)v28[5], "objectForKeyedSubscript:", CFSTR("schemes"), 0LL));
      v15 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v21, v41, 16LL);
      if ( v15 )
      {
        v16 = 0;
        v17 = *(_QWORD *)v22;
        do
        {
          v18 = 0LL;
          v19 = v16;
          v20 = (__int64)&v9[8 * v16 + 136];
          do
          {
            if ( *(_QWORD *)v22 != v17 )
              objc_enumerationMutation(v14);
            *(_QWORD *)(v20 + 8LL * (_QWORD)v18) = objc_retain(*(id *)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)v18));
            v18 = (char *)v18 + 1;
          }
          while ( v15 != v18 );
          v15 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v21, v41, 16LL);
          v16 = v19 + (_DWORD)v18;
        }
        while ( v15 );
      }
      objc_release(v14);
      v5 = 0LL;
      *a2 = v9;
    }
  }
  else
  {
    pthread_mutex_unlock(&stru_100018F48);
    v4 = 0LL;
    v5 = 22LL;
  }
  _Block_object_dispose(&v27, 8);
  objc_release(v32);
  _Block_object_dispose(&v33, 8);
  objc_release(v38);
  _Block_object_dispose(v39, 8);
  objc_release(v40);
  objc_release(v4);
  return v5;
}