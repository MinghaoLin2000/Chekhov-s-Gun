-[ATXHeuristicJSEnv _travelTimeForEventWithID:latitude:longitude:expectedArrivalDate:transportType:localOnlyAfterFirstUpdate:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[ATXHeuristicJSEnv _travelTimeForEventWithID:latitude:longitude:expectedArrivalDate:transportType:localOnlyAfterFirstUpdate:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        double a4,
        double a5,
        id a6,
        id a7,
        bool a8)
{
  _BOOL8 v8; // x23
  id v14; // x19
  id v15; // x20
  id v16; // x21
  void *v17; // x22
  ATXHeuristicDataSources *provider; // x0
  void *v19; // x0
  os_log_s *v20; // x23
  const char *Name; // x0
  id v22; // x23
  _QWORD v24[6]; // [xsp+0h] [xbp-100h] BYREF
  __int64 v25; // [xsp+30h] [xbp-D0h] BYREF
  _QWORD v26[4]; // [xsp+38h] [xbp-C8h] BYREF
  id v27; // [xsp+58h] [xbp-A8h]
  __int64 v28; // [xsp+60h] [xbp-A0h] BYREF
  __int64 *v29; // [xsp+68h] [xbp-98h]
  __int64 v30; // [xsp+70h] [xbp-90h]
  __int64 (__fastcall *v31)(); // [xsp+78h] [xbp-88h]
  __int64 (__fastcall *v32)(); // [xsp+80h] [xbp-80h]
  id v33; // [xsp+88h] [xbp-78h]
  _BYTE v34[24]; // [xsp+90h] [xbp-70h] BYREF
  __int64 vars8; // [xsp+108h] [xbp+8h]

  v8 = a8;
  v14 = objc_retain(a3);
  v15 = objc_retain(a6);
  v16 = objc_retain(a7);
  v17 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___CLLocation), "initWithLatitude:longitude:", a4, a5);
  v28 = 0LL;
  v29 = &v28;
  v30 = 0x3032000000LL;
  v31 = sub_10000D710;
  v32 = sub_10000D720;
  v33 = 0LL;
  v25 = 0LL;
  v26[0] = &v25;
  v26[1] = 0x3032000000LL;
  v26[2] = sub_10000D710;
  v26[3] = sub_10000D720;
  v27 = 0LL;
  provider = self->_provider;
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 3254779904LL;
  v24[2] = sub_100015AB4;
  v24[3] = &unk_100029A50;
  v24[4] = &v28;
  v24[5] = &v25;
  v19 = -[ATXHeuristicDataSources travelTimeInfoForEventID:location:expectedArrivalDate:transportType:localOnlyAfterFirstUpdate:callback:](
          provider,
          "travelTimeInfoForEventID:location:expectedArrivalDate:transportType:localOnlyAfterFirstUpdate:callback:",
          v14,
          v17,
          v15,
          v16,
          v8,
          v24);
  if ( *(_QWORD *)(v26[0] + 40LL) )
  {
    v20 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v19));
    if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
    {
      Name = sel_getName("travelTimeInfoForEventID:location:expectedArrivalDate:transportType:localOnlyAfterFirstUpdate:callback:");
      sub_10001C044(Name, v26, v34, v20);
    }
    objc_release(v20);
    v22 = 0LL;
  }
  else
  {
    v22 = objc_retain((id)v29[5]);
  }
  _Block_object_dispose(&v25, 8);
  objc_release(v27);
  _Block_object_dispose(&v28, 8);
  objc_release(v33);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v22);
}