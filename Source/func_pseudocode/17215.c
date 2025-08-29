-[AMLoaderServiceAction remoteActionGetShowWhenRunItems:]
void __cdecl -[AMLoaderServiceAction remoteActionGetShowWhenRunItems:](AMLoaderServiceAction *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, _QWORD, __int64); // x19
  _QWORD v5[6]; // [xsp+0h] [xbp-90h] BYREF
  __int64 v6; // [xsp+30h] [xbp-60h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-58h]
  __int64 v8; // [xsp+40h] [xbp-50h]
  __int64 (__fastcall *v9)(); // [xsp+48h] [xbp-48h]
  __int64 (__fastcall *v10)(); // [xsp+50h] [xbp-40h]
  id v11; // [xsp+58h] [xbp-38h]
  __int64 v12; // [xsp+60h] [xbp-30h] BYREF
  __int64 *v13; // [xsp+68h] [xbp-28h]
  __int64 v14; // [xsp+70h] [xbp-20h]
  char v15; // [xsp+78h] [xbp-18h]

  v4 = (void (__fastcall **)(id, _QWORD, __int64))objc_retain(a3);
  v12 = 0LL;
  v13 = &v12;
  v14 = 0x2020000000LL;
  v15 = 0;
  v6 = 0LL;
  v7 = &v6;
  v8 = 0x3032000000LL;
  v9 = sub_10000AC68;
  v10 = sub_10000AC78;
  v11 = 0LL;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10000C960;
  v5[3] = &unk_10001C898;
  v5[4] = &v12;
  v5[5] = &v6;
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v5);
  if ( v4 )
    v4[2](v4, *((unsigned __int8 *)v13 + 24), v7[5]);
  _Block_object_dispose(&v6, 8);
  objc_release(v11);
  _Block_object_dispose(&v12, 8);
  objc_release(v4);
}