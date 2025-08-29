-[AMLoaderServiceAction remoteActionMostRecentlyOverriddenOfSelectorStrings:completionHandler:]
void __cdecl -[AMLoaderServiceAction remoteActionMostRecentlyOverriddenOfSelectorStrings:completionHandler:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, _QWORD); // x20
  _QWORD v8[4]; // [xsp+0h] [xbp-80h] BYREF
  id v9; // [xsp+20h] [xbp-60h]
  __int64 *v10; // [xsp+28h] [xbp-58h]
  __int64 v11; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v12; // [xsp+38h] [xbp-48h]
  __int64 v13; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v14)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v15)(); // [xsp+50h] [xbp-30h]
  id v16; // [xsp+58h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  if ( v7 )
  {
    if ( objc_msgSend(v6, "count") )
    {
      v11 = 0LL;
      v12 = &v11;
      v13 = 0x3032000000LL;
      v14 = sub_10000AC68;
      v15 = sub_10000AC78;
      v16 = 0LL;
      v8[0] = _NSConcreteStackBlock;
      v8[1] = 3254779904LL;
      v8[2] = sub_10000AC80;
      v8[3] = &unk_10001C628;
      v10 = &v11;
      v9 = objc_retain(v6);
      -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
        self,
        "_executeSynchronouslyWithLoadedActionOnMainThread:",
        v8);
      v7[2](v7, v12[5]);
      objc_release(v9);
      _Block_object_dispose(&v11, 8);
      objc_release(v16);
    }
    else
    {
      v7[2](v7, 0LL);
    }
  }
  objc_release(v7);
  objc_release(v6);
}