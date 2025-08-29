-[ATXHeuristicJSEnv _allHandlesFromDataSourceWithContact:]
id __cdecl -[ATXHeuristicJSEnv _allHandlesFromDataSourceWithContact:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  id v4; // x19
  ATXHeuristicDataSources *provider; // x0
  void *v6; // x0
  os_log_s *v7; // x20
  const char *Name; // x0
  id v9; // x20
  os_log_s *v10; // x20
  _QWORD v12[6]; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v13; // [xsp+30h] [xbp-A0h] BYREF
  _QWORD v14[4]; // [xsp+38h] [xbp-98h] BYREF
  id v15; // [xsp+58h] [xbp-78h]
  __int64 v16; // [xsp+60h] [xbp-70h] BYREF
  __int64 *v17; // [xsp+68h] [xbp-68h]
  __int64 v18; // [xsp+70h] [xbp-60h]
  __int64 (__fastcall *v19)(); // [xsp+78h] [xbp-58h]
  __int64 (__fastcall *v20)(); // [xsp+80h] [xbp-50h]
  id v21; // [xsp+88h] [xbp-48h]
  _BYTE v22[24]; // [xsp+90h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( v4 )
  {
    v16 = 0LL;
    v17 = &v16;
    v18 = 0x3032000000LL;
    v19 = sub_10000D710;
    v20 = sub_10000D720;
    v21 = 0LL;
    v13 = 0LL;
    v14[0] = &v13;
    v14[1] = 0x3032000000LL;
    v14[2] = sub_10000D710;
    v14[3] = sub_10000D720;
    v15 = 0LL;
    provider = self->_provider;
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_10001907C;
    v12[3] = &unk_100029A80;
    v12[4] = &v16;
    v12[5] = &v13;
    v6 = -[ATXHeuristicDataSources allHandlesForContact:callback:](provider, "allHandlesForContact:callback:", v4, v12);
    if ( *(_QWORD *)(v14[0] + 40LL) )
    {
      v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v6));
      if ( os_log_type_enabled(v7, OS_LOG_TYPE_ERROR) )
      {
        Name = sel_getName("allHandlesForContact:callback:");
        sub_10001C044(Name, v14, v22, v7);
      }
      objc_release(v7);
      v9 = 0LL;
    }
    else
    {
      v9 = objc_retain((id)v17[5]);
    }
    _Block_object_dispose(&v13, 8);
    objc_release(v15);
    _Block_object_dispose(&v16, 8);
    objc_release(v21);
  }
  else
  {
    v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(0LL));
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      sub_10001C0F4(v10);
    objc_release(v10);
    v9 = 0LL;
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}