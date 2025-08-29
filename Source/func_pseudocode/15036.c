-[ATXHeuristicJSEnv _bestContactHandleFromDataSourceWithContact:serviceString:]
id __cdecl -[ATXHeuristicJSEnv _bestContactHandleFromDataSourceWithContact:serviceString:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  NSDictionary *v8; // x23
  id v9; // x0
  void *v10; // x21
  id v11; // x0
  os_log_s *v12; // x24
  __int64 v13; // x0
  ATXHeuristicDataSources *provider; // x0
  void *v15; // x0
  os_log_s *v16; // x22
  const char *Name; // x0
  id v18; // x22
  os_log_s *v19; // x22
  _QWORD v21[6]; // [xsp+0h] [xbp-E0h] BYREF
  _BYTE v22[24]; // [xsp+30h] [xbp-B0h] BYREF
  const __CFString *v23; // [xsp+48h] [xbp-98h] BYREF
  const __CFString **v24; // [xsp+50h] [xbp-90h] BYREF
  __int64 v25; // [xsp+58h] [xbp-88h]
  __int64 (__fastcall *v26)(); // [xsp+60h] [xbp-80h]
  __int64 (__fastcall *v27)(); // [xsp+68h] [xbp-78h]
  id v28; // [xsp+70h] [xbp-70h]
  __int64 v29; // [xsp+78h] [xbp-68h] BYREF
  __int64 *v30; // [xsp+80h] [xbp-60h]
  __int64 v31; // [xsp+88h] [xbp-58h]
  __int64 (__fastcall *v32)(); // [xsp+90h] [xbp-50h]
  __int64 (__fastcall *v33)(); // [xsp+98h] [xbp-48h]
  id v34; // [xsp+A0h] [xbp-40h]
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(objc_retain(a4));
  v23 = CFSTR("imessage");
  v24 = (const __CFString **)CFSTR("facetime");
  v29 = IDSServiceNameiMessage;
  v30 = (__int64 *)IDSServiceNameFaceTime;
  v25 = (__int64)CFSTR("calling");
  v31 = IDSServiceNameCalling;
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v29,
           &v23,
           3LL));
  v9 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", v7));
  v10 = v9;
  if ( v9 )
  {
    v11 = objc_retain(v9);
  }
  else
  {
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(0LL));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
      sub_10001C15C(v7, v12);
    objc_release(v12);
  }
  objc_release(v10);
  objc_release(v8);
  objc_release(v7);
  if ( v6 && v10 )
  {
    v29 = 0LL;
    v30 = &v29;
    v31 = 0x3032000000LL;
    v32 = sub_10000D710;
    v33 = sub_10000D720;
    v34 = 0LL;
    v23 = 0LL;
    v24 = &v23;
    v25 = 0x3032000000LL;
    v26 = sub_10000D710;
    v27 = sub_10000D720;
    v28 = 0LL;
    provider = self->_provider;
    v21[0] = _NSConcreteStackBlock;
    v21[1] = 3254779904LL;
    v21[2] = sub_100019460;
    v21[3] = &unk_100029A20;
    v21[4] = &v29;
    v21[5] = &v23;
    v15 = -[ATXHeuristicDataSources bestHandleForContact:service:callback:](
            provider,
            "bestHandleForContact:service:callback:",
            v6,
            v10,
            v21);
    if ( v24[5] )
    {
      v16 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v15));
      if ( os_log_type_enabled(v16, OS_LOG_TYPE_ERROR) )
      {
        Name = sel_getName("bestHandleForContact:service:callback:");
        sub_10001C044(Name, &v24, v22, v16);
      }
      objc_release(v16);
      v18 = 0LL;
    }
    else
    {
      v18 = objc_retain((id)v30[5]);
    }
    _Block_object_dispose(&v23, 8);
    objc_release(v28);
    _Block_object_dispose(&v29, 8);
    objc_release(v34);
  }
  else
  {
    v19 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v13));
    if ( os_log_type_enabled(v19, OS_LOG_TYPE_ERROR) )
      sub_10001C128(v19);
    objc_release(v19);
    v18 = 0LL;
  }
  objc_release(v10);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v18);
}