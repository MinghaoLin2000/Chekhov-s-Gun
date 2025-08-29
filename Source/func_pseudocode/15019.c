-[ATXHeuristicJSEnv _unreadMessagesWithLimit:]
id __cdecl -[ATXHeuristicJSEnv _unreadMessagesWithLimit:](ATXHeuristicJSEnv *self, SEL a2, signed __int64 a3)
{
  ATXHeuristicDataSources *provider; // x0
  void *v4; // x0
  os_log_s *v5; // x19
  const char *Name; // x0
  id v7; // x19
  _QWORD v9[6]; // [xsp+0h] [xbp-C0h] BYREF
  __int64 v10; // [xsp+30h] [xbp-90h] BYREF
  _QWORD v11[4]; // [xsp+38h] [xbp-88h] BYREF
  id v12; // [xsp+58h] [xbp-68h]
  __int64 v13; // [xsp+60h] [xbp-60h] BYREF
  __int64 *v14; // [xsp+68h] [xbp-58h]
  __int64 v15; // [xsp+70h] [xbp-50h]
  __int64 (__fastcall *v16)(); // [xsp+78h] [xbp-48h]
  __int64 (__fastcall *v17)(); // [xsp+80h] [xbp-40h]
  id v18; // [xsp+88h] [xbp-38h]
  _BYTE v19[24]; // [xsp+90h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  v13 = 0LL;
  v14 = &v13;
  v15 = 0x3032000000LL;
  v16 = sub_10000D710;
  v17 = sub_10000D720;
  v18 = 0LL;
  v10 = 0LL;
  v11[0] = &v10;
  v11[1] = 0x3032000000LL;
  v11[2] = sub_10000D710;
  v11[3] = sub_10000D720;
  v12 = 0LL;
  provider = self->_provider;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_1000166FC;
  v9[3] = &unk_100029A80;
  v9[4] = &v13;
  v9[5] = &v10;
  v4 = -[ATXHeuristicDataSources unreadMessagesWithLimit:callback:](
         provider,
         "unreadMessagesWithLimit:callback:",
         a3,
         v9);
  if ( *(_QWORD *)(v11[0] + 40LL) )
  {
    v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v4));
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_ERROR) )
    {
      Name = sel_getName("unreadMessagesWithLimit:callback:");
      sub_10001C044(Name, v11, v19, v5);
    }
    objc_release(v5);
    v7 = 0LL;
  }
  else
  {
    v7 = objc_retain((id)v14[5]);
  }
  _Block_object_dispose(&v10, 8);
  objc_release(v12);
  _Block_object_dispose(&v13, 8);
  objc_release(v18);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}