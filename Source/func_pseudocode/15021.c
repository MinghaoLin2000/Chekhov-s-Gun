-[ATXHeuristicJSEnv _enabledAlarmsFromTS:toTS:]
id __cdecl -[ATXHeuristicJSEnv _enabledAlarmsFromTS:toTS:](ATXHeuristicJSEnv *self, SEL a2, double a3, double a4)
{
  ATXHeuristicDataSources *provider; // x19
  void *v6; // x20
  void *v7; // x21
  __int64 v8; // x0
  os_log_s *v9; // x19
  const char *Name; // x0
  id v11; // x19
  _QWORD v13[6]; // [xsp+0h] [xbp-E0h] BYREF
  __int64 v14; // [xsp+30h] [xbp-B0h] BYREF
  _QWORD v15[4]; // [xsp+38h] [xbp-A8h] BYREF
  id v16; // [xsp+58h] [xbp-88h]
  __int64 v17; // [xsp+60h] [xbp-80h] BYREF
  __int64 *v18; // [xsp+68h] [xbp-78h]
  __int64 v19; // [xsp+70h] [xbp-70h]
  __int64 (__fastcall *v20)(); // [xsp+78h] [xbp-68h]
  __int64 (__fastcall *v21)(); // [xsp+80h] [xbp-60h]
  id v22; // [xsp+88h] [xbp-58h]
  _BYTE v23[24]; // [xsp+90h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  v17 = 0LL;
  v18 = &v17;
  v19 = 0x3032000000LL;
  v20 = sub_10000D710;
  v21 = sub_10000D720;
  v22 = 0LL;
  v14 = 0LL;
  v15[0] = &v14;
  v15[1] = 0x3032000000LL;
  v15[2] = sub_10000D710;
  v15[3] = sub_10000D720;
  v16 = 0LL;
  provider = self->_provider;
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSDate), "initWithTimeIntervalSinceReferenceDate:", a3);
  v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSDate), "initWithTimeIntervalSinceReferenceDate:", a4);
  v13[0] = _NSConcreteStackBlock;
  v13[1] = 3254779904LL;
  v13[2] = sub_100016C54;
  v13[3] = &unk_100029A80;
  v13[4] = &v17;
  v13[5] = &v14;
  -[ATXHeuristicDataSources alarmsFromDate:toDate:completionHandler:](
    provider,
    "alarmsFromDate:toDate:completionHandler:",
    v6,
    v7,
    v13);
  objc_release(v7);
  objc_release(v6);
  if ( *(_QWORD *)(v15[0] + 40LL) )
  {
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v8));
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
    {
      Name = sel_getName("alarmsFromDate:toDate:completionHandler:");
      sub_10001C044(Name, v15, v23, v9);
    }
    objc_release(v9);
    v11 = 0LL;
  }
  else
  {
    v11 = objc_retain((id)v18[5]);
  }
  _Block_object_dispose(&v14, 8);
  objc_release(v16);
  _Block_object_dispose(&v17, 8);
  objc_release(v22);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}