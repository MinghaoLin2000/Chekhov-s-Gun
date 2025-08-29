-[ATXHeuristicJSEnv _latestFlightStatus:]
id __cdecl -[ATXHeuristicJSEnv _latestFlightStatus:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  id v4; // x19
  ATXHeuristicDataSources *provider; // x0
  void *v6; // x0
  os_log_s *v7; // x20
  const char *Name; // x0
  id v9; // x20
  _QWORD v11[6]; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v12; // [xsp+30h] [xbp-A0h] BYREF
  _QWORD v13[4]; // [xsp+38h] [xbp-98h] BYREF
  id v14; // [xsp+58h] [xbp-78h]
  __int64 v15; // [xsp+60h] [xbp-70h] BYREF
  __int64 *v16; // [xsp+68h] [xbp-68h]
  __int64 v17; // [xsp+70h] [xbp-60h]
  __int64 (__fastcall *v18)(); // [xsp+78h] [xbp-58h]
  __int64 (__fastcall *v19)(); // [xsp+80h] [xbp-50h]
  id v20; // [xsp+88h] [xbp-48h]
  _BYTE v21[24]; // [xsp+90h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v4 = objc_retain(a3);
  v15 = 0LL;
  v16 = &v15;
  v17 = 0x3032000000LL;
  v18 = sub_10000D710;
  v19 = sub_10000D720;
  v20 = 0LL;
  v12 = 0LL;
  v13[0] = &v12;
  v13[1] = 0x3032000000LL;
  v13[2] = sub_10000D710;
  v13[3] = sub_10000D720;
  v14 = 0LL;
  provider = self->_provider;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100016F50;
  v11[3] = &unk_100029A50;
  v11[4] = &v15;
  v11[5] = &v12;
  v6 = -[ATXHeuristicDataSources flightStatusForFlight:callback:](provider, "flightStatusForFlight:callback:", v4, v11);
  if ( *(_QWORD *)(v13[0] + 40LL) )
  {
    v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v6));
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_ERROR) )
    {
      Name = sel_getName("flightStatusForFlight:callback:");
      sub_10001C044(Name, v13, v21, v7);
    }
    objc_release(v7);
    v9 = 0LL;
  }
  else
  {
    v9 = objc_retain((id)v16[5]);
  }
  _Block_object_dispose(&v12, 8);
  objc_release(v14);
  _Block_object_dispose(&v15, 8);
  objc_release(v20);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}