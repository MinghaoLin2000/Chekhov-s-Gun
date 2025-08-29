-[ATXHeuristicDataSourcesClient getEventsWithProminentFeature:callback:]
void __cdecl -[ATXHeuristicDataSourcesClient getEventsWithProminentFeature:callback:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  void (__fastcall **v7)(id, _QWORD, id); // x19
  id v8; // x20
  id v9; // x21
  _QWORD v10[4]; // [xsp+0h] [xbp-80h] BYREF
  id v11; // [xsp+20h] [xbp-60h]
  __int64 *v12; // [xsp+28h] [xbp-58h]
  __int64 v13; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v14; // [xsp+38h] [xbp-48h]
  __int64 v15; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v16)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v17)(); // [xsp+50h] [xbp-30h]
  id v18; // [xsp+58h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, _QWORD, id))objc_retain(a4);
  v13 = 0LL;
  v14 = &v13;
  v15 = 0x3032000000LL;
  v16 = sub_100007F64;
  v17 = sub_100007F74;
  v18 = 0LL;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_10000821C;
  v10[3] = &unk_100028B00;
  v8 = objc_retain(v6);
  v11 = v8;
  v12 = &v13;
  v9 = objc_retainAutoreleasedReturnValue(
         -[ATXHeuristicDataSourcesClient _queryProxySynchronouslyWithTimeout:queryHandler:](
           self,
           "_queryProxySynchronouslyWithTimeout:queryHandler:",
           v10,
           5.0));
  v7[2](v7, v14[5], v9);
  objc_release(v9);
  objc_release(v11);
  _Block_object_dispose(&v13, 8);
  objc_release(v18);
  objc_release(v7);
  objc_release(v8);
}