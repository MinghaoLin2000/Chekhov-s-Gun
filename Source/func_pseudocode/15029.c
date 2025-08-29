-[ATXHeuristicJSEnv _eventPassesFromDataSourceWithStyle:]
id __cdecl -[ATXHeuristicJSEnv _eventPassesFromDataSourceWithStyle:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  void *v6; // x0
  ATXHeuristicDataSources *provider; // x0
  void *v8; // x0
  os_log_s *v9; // x20
  const char *Name; // x0
  id v11; // x20
  os_log_s *v13; // x20
  _QWORD v14[6]; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v15; // [xsp+30h] [xbp-A0h] BYREF
  _QWORD v16[4]; // [xsp+38h] [xbp-98h] BYREF
  id v17; // [xsp+58h] [xbp-78h]
  __int64 v18; // [xsp+60h] [xbp-70h] BYREF
  __int64 *v19; // [xsp+68h] [xbp-68h]
  __int64 v20; // [xsp+70h] [xbp-60h]
  __int64 (__fastcall *v21)(); // [xsp+78h] [xbp-58h]
  __int64 (__fastcall *v22)(); // [xsp+80h] [xbp-50h]
  id v23; // [xsp+88h] [xbp-48h]
  _BYTE v24[24]; // [xsp+90h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( !v4
    || ((unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("ticket")) & 1) != 0
    || (v6 = objc_msgSend(v5, "isEqualToString:", CFSTR("boardingPass")), ((unsigned __int8)v6 & 1) != 0) )
  {
    v18 = 0LL;
    v19 = &v18;
    v20 = 0x3032000000LL;
    v21 = sub_10000D710;
    v22 = sub_10000D720;
    v23 = 0LL;
    v15 = 0LL;
    v16[0] = &v15;
    v16[1] = 0x3032000000LL;
    v16[2] = sub_10000D710;
    v16[3] = sub_10000D720;
    v17 = 0LL;
    provider = self->_provider;
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_1000180D8;
    v14[3] = &unk_100029A80;
    v14[4] = &v18;
    v14[5] = &v15;
    v8 = -[ATXHeuristicDataSources passesWithStyle:callback:](provider, "passesWithStyle:callback:", v5, v14);
    if ( *(_QWORD *)(v16[0] + 40LL) )
    {
      v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v8));
      if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
      {
        Name = sel_getName("passesWithStyle:callback:");
        sub_10001C044(Name, v16, v24, v9);
      }
      objc_release(v9);
      v11 = 0LL;
    }
    else
    {
      v11 = objc_retain((id)v19[5]);
    }
    _Block_object_dispose(&v15, 8);
    objc_release(v17);
    _Block_object_dispose(&v18, 8);
    objc_release(v23);
  }
  else
  {
    v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v6));
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      sub_10001C07C(v5, v13);
    objc_release(v13);
    v11 = &__NSArray0__struct;
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}