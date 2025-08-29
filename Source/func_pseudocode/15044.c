-[ATXHeuristicJSEnv _modeCorrelatedAppsInCurrentMode]
id __cdecl -[ATXHeuristicJSEnv _modeCorrelatedAppsInCurrentMode](ATXHeuristicJSEnv *self, SEL a2)
{
  ATXHeuristicDataSources *provider; // x0
  void *v3; // x0
  os_log_s *v4; // x19
  const char *Name; // x0
  id v6; // x19
  _QWORD v8[6]; // [xsp+0h] [xbp-C0h] BYREF
  __int64 v9; // [xsp+30h] [xbp-90h] BYREF
  _QWORD v10[4]; // [xsp+38h] [xbp-88h] BYREF
  id v11; // [xsp+58h] [xbp-68h]
  __int64 v12; // [xsp+60h] [xbp-60h] BYREF
  __int64 *v13; // [xsp+68h] [xbp-58h]
  __int64 v14; // [xsp+70h] [xbp-50h]
  __int64 (__fastcall *v15)(); // [xsp+78h] [xbp-48h]
  __int64 (__fastcall *v16)(); // [xsp+80h] [xbp-40h]
  id v17; // [xsp+88h] [xbp-38h]
  _BYTE v18[24]; // [xsp+90h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  v12 = 0LL;
  v13 = &v12;
  v14 = 0x3032000000LL;
  v15 = sub_10000D710;
  v16 = sub_10000D720;
  v17 = 0LL;
  v9 = 0LL;
  v10[0] = &v9;
  v10[1] = 0x3032000000LL;
  v10[2] = sub_10000D710;
  v10[3] = sub_10000D720;
  v11 = 0LL;
  provider = self->_provider;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_10001A920;
  v8[3] = &unk_100029B40;
  v8[4] = &v12;
  v8[5] = &v9;
  v3 = -[ATXHeuristicDataSources modeCorrelatedAppsInCurrentModeWithCallback:](
         provider,
         "modeCorrelatedAppsInCurrentModeWithCallback:",
         v8);
  if ( *(_QWORD *)(v10[0] + 40LL) )
  {
    v4 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v3));
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_ERROR) )
    {
      Name = sel_getName("modeCorrelatedAppsInCurrentModeWithCallback:");
      sub_10001C044(Name, v10, v18, v4);
    }
    objc_release(v4);
    v6 = 0LL;
  }
  else
  {
    v6 = objc_retain((id)v13[5]);
  }
  _Block_object_dispose(&v9, 8);
  objc_release(v11);
  _Block_object_dispose(&v12, 8);
  objc_release(v17);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}