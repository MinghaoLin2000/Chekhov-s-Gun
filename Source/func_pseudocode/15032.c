-[ATXHeuristicJSEnv _extraordinaryEventsFromDataSourceWithProminentFeature:]
id __cdecl -[ATXHeuristicJSEnv _extraordinaryEventsFromDataSourceWithProminentFeature:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x20
  ATXHeuristicDataSources *provider; // x0
  void *v7; // x0
  os_log_s *v8; // x21
  const char *Name; // x0
  id v10; // x21
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
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(&off_10002C2A0, "objectForKeyedSubscript:", v4));
  else
    v5 = 0LL;
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
  v12[2] = sub_100018894;
  v12[3] = &unk_100029A80;
  v12[4] = &v16;
  v12[5] = &v13;
  v7 = -[ATXHeuristicDataSources getEventsWithProminentFeature:callback:](
         provider,
         "getEventsWithProminentFeature:callback:",
         v5,
         v12);
  if ( *(_QWORD *)(v14[0] + 40LL) )
  {
    v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v7));
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
    {
      Name = sel_getName("getEventsWithProminentFeature:callback:");
      sub_10001C044(Name, v14, v22, v8);
    }
    objc_release(v8);
    v10 = 0LL;
  }
  else
  {
    v10 = objc_retain((id)v17[5]);
  }
  _Block_object_dispose(&v13, 8);
  objc_release(v15);
  _Block_object_dispose(&v16, 8);
  objc_release(v21);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}