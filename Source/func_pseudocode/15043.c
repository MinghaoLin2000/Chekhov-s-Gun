-[ATXHeuristicJSEnv _getLocationForMostRelevantTripInRangeFrom:to:]
id __cdecl -[ATXHeuristicJSEnv _getLocationForMostRelevantTripInRangeFrom:to:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  ATXHeuristicDataSources *provider; // x0
  void *v9; // x0
  os_log_s *v10; // x21
  const char *Name; // x0
  id v12; // x21
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

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
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
  v14[2] = sub_10001A6A8;
  v14[3] = &unk_100029A50;
  v14[4] = &v18;
  v14[5] = &v15;
  v9 = -[ATXHeuristicDataSources getLocationForMostRelevantTripInRangeFrom:to:callback:](
         provider,
         "getLocationForMostRelevantTripInRangeFrom:to:callback:",
         v6,
         v7,
         v14);
  if ( *(_QWORD *)(v16[0] + 40LL) )
  {
    v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v9));
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
    {
      Name = sel_getName("getLocationForMostRelevantTripInRangeFrom:to:callback:");
      sub_10001C044(Name, v16, v24, v10);
    }
    objc_release(v10);
    v12 = 0LL;
  }
  else
  {
    v12 = objc_retain((id)v19[5]);
  }
  _Block_object_dispose(&v15, 8);
  objc_release(v17);
  _Block_object_dispose(&v18, 8);
  objc_release(v23);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}