-[ATXHeuristicJSEnv _clipboardContentsFromDataSource]
id __cdecl -[ATXHeuristicJSEnv _clipboardContentsFromDataSource](ATXHeuristicJSEnv *self, SEL a2)
{
  ATXHeuristicDataSources *provider; // x0
  void *v3; // x0
  os_log_s *v4; // x20
  const char *Name; // x0
  NSDictionary *v6; // x19
  void *v7; // x0
  __int64 v8; // x8
  _QWORD v10[8]; // [xsp+0h] [xbp-170h] BYREF
  __int64 v11; // [xsp+40h] [xbp-130h] BYREF
  _QWORD v12[4]; // [xsp+48h] [xbp-128h] BYREF
  id v13; // [xsp+68h] [xbp-108h]
  __int64 v14; // [xsp+70h] [xbp-100h] BYREF
  __int64 *v15; // [xsp+78h] [xbp-F8h]
  __int64 v16; // [xsp+80h] [xbp-F0h]
  __int64 (__fastcall *v17)(); // [xsp+88h] [xbp-E8h]
  __int64 (__fastcall *v18)(); // [xsp+90h] [xbp-E0h]
  id v19; // [xsp+98h] [xbp-D8h]
  __int64 v20; // [xsp+A0h] [xbp-D0h] BYREF
  __int64 *v21; // [xsp+A8h] [xbp-C8h]
  __int64 v22; // [xsp+B0h] [xbp-C0h]
  __int64 (__fastcall *v23)(); // [xsp+B8h] [xbp-B8h]
  __int64 (__fastcall *v24)(); // [xsp+C0h] [xbp-B0h]
  id v25; // [xsp+C8h] [xbp-A8h]
  __int64 v26; // [xsp+D0h] [xbp-A0h] BYREF
  __int64 *v27; // [xsp+D8h] [xbp-98h]
  __int64 v28; // [xsp+E0h] [xbp-90h]
  __int64 (__fastcall *v29)(); // [xsp+E8h] [xbp-88h]
  __int64 (__fastcall *v30)(); // [xsp+F0h] [xbp-80h]
  id v31; // [xsp+F8h] [xbp-78h]
  _QWORD v32[3]; // [xsp+100h] [xbp-70h] BYREF
  _QWORD v33[3]; // [xsp+118h] [xbp-58h] BYREF
  _BYTE v34[24]; // [xsp+130h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+178h] [xbp+8h]

  v26 = 0LL;
  v27 = &v26;
  v28 = 0x3032000000LL;
  v29 = sub_10000D710;
  v30 = sub_10000D720;
  v31 = 0LL;
  v20 = 0LL;
  v21 = &v20;
  v22 = 0x3032000000LL;
  v23 = sub_10000D710;
  v24 = sub_10000D720;
  v25 = 0LL;
  v14 = 0LL;
  v15 = &v14;
  v16 = 0x3032000000LL;
  v17 = sub_10000D710;
  v18 = sub_10000D720;
  v19 = 0LL;
  v11 = 0LL;
  v12[0] = &v11;
  v12[1] = 0x3032000000LL;
  v12[2] = sub_10000D710;
  v12[3] = sub_10000D720;
  v13 = 0LL;
  provider = self->_provider;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_100017584;
  v10[3] = &unk_100029AB0;
  v10[4] = &v26;
  v10[5] = &v14;
  v10[6] = &v20;
  v10[7] = &v11;
  v3 = -[ATXHeuristicDataSources contentsWithCallback:](provider, "contentsWithCallback:", v10);
  if ( *(_QWORD *)(v12[0] + 40LL) )
  {
    v4 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v3));
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_ERROR) )
    {
      Name = sel_getName("contentsWithCallback:");
      sub_10001C044(Name, v12, v34, v4);
    }
    v6 = 0LL;
    goto LABEL_5;
  }
  if ( v27[5] )
  {
    v7 = (void *)v15[5];
    if ( v7 )
    {
      if ( v21[5] )
      {
        v33[0] = v27[5];
        v32[0] = CFSTR("content");
        v32[1] = CFSTR("creationTimestamp");
        objc_msgSend(v7, "timeIntervalSinceReferenceDate");
        v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:"));
        v32[2] = CFSTR("originatorBundleID");
        v8 = v21[5];
        v33[1] = v4;
        v33[2] = v8;
        v6 = objc_retainAutoreleasedReturnValue(
               +[NSDictionary dictionaryWithObjects:forKeys:count:](
                 &OBJC_CLASS___NSDictionary,
                 "dictionaryWithObjects:forKeys:count:",
                 v33,
                 v32,
                 3LL));
LABEL_5:
        objc_release(v4);
        goto LABEL_11;
      }
    }
  }
  v6 = 0LL;
LABEL_11:
  _Block_object_dispose(&v11, 8);
  objc_release(v13);
  _Block_object_dispose(&v14, 8);
  objc_release(v19);
  _Block_object_dispose(&v20, 8);
  objc_release(v25);
  _Block_object_dispose(&v26, 8);
  objc_release(v31);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}