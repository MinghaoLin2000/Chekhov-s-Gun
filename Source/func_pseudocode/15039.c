-[ATXHeuristicJSEnv _callHistoryFromDataSourceWithMaxAge:showIncomingCalls:showOutgoingCalls:showMissedCallsOnly:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[ATXHeuristicJSEnv _callHistoryFromDataSourceWithMaxAge:showIncomingCalls:showOutgoingCalls:showMissedCallsOnly:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        double a3,
        bool a4,
        bool a5,
        bool a6)
{
  ATXHeuristicDataSources *provider; // x0
  void *v7; // x0
  os_log_s *v8; // x19
  const char *Name; // x0
  id v10; // x19
  _QWORD v12[6]; // [xsp+0h] [xbp-C0h] BYREF
  __int64 v13; // [xsp+30h] [xbp-90h] BYREF
  _QWORD v14[4]; // [xsp+38h] [xbp-88h] BYREF
  id v15; // [xsp+58h] [xbp-68h]
  __int64 v16; // [xsp+60h] [xbp-60h] BYREF
  __int64 *v17; // [xsp+68h] [xbp-58h]
  __int64 v18; // [xsp+70h] [xbp-50h]
  __int64 (__fastcall *v19)(); // [xsp+78h] [xbp-48h]
  __int64 (__fastcall *v20)(); // [xsp+80h] [xbp-40h]
  id v21; // [xsp+88h] [xbp-38h]
  _BYTE v22[24]; // [xsp+90h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+C8h] [xbp+8h]

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
  v12[2] = sub_100019C08;
  v12[3] = &unk_100029A80;
  v12[4] = &v16;
  v12[5] = &v13;
  v7 = -[ATXHeuristicDataSources callNewerThan:showIncoming:showOutgoing:missedOnly:callback:](
         provider,
         "callNewerThan:showIncoming:showOutgoing:missedOnly:callback:",
         a4,
         a5,
         a6,
         v12,
         a3);
  if ( *(_QWORD *)(v14[0] + 40LL) )
  {
    v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v7));
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
    {
      Name = sel_getName("callNewerThan:showIncoming:showOutgoing:missedOnly:callback:");
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
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}