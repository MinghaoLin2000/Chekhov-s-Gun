-[ATXHeuristicDataSourcesClient visibleCalendarsWithCallback:]
void __cdecl -[ATXHeuristicDataSourcesClient visibleCalendarsWithCallback:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        id a3)
{
  void (__fastcall **v4)(id, _QWORD, id); // x19
  id v5; // x20
  _QWORD v6[5]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v7; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v8; // [xsp+38h] [xbp-38h]
  __int64 v9; // [xsp+40h] [xbp-30h]
  __int64 (__fastcall *v10)(); // [xsp+48h] [xbp-28h]
  __int64 (__fastcall *v11)(); // [xsp+50h] [xbp-20h]
  id v12; // [xsp+58h] [xbp-18h]

  v4 = (void (__fastcall **)(id, _QWORD, id))objc_retain(a3);
  v7 = 0LL;
  v8 = &v7;
  v9 = 0x3032000000LL;
  v10 = sub_100007F64;
  v11 = sub_100007F74;
  v12 = 0LL;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_100008840;
  v6[3] = &unk_100028B60;
  v6[4] = &v7;
  v5 = objc_retainAutoreleasedReturnValue(
         -[ATXHeuristicDataSourcesClient _queryProxySynchronouslyWithTimeout:queryHandler:](
           self,
           "_queryProxySynchronouslyWithTimeout:queryHandler:",
           v6,
           5.0));
  v4[2](v4, v8[5], v5);
  objc_release(v5);
  _Block_object_dispose(&v7, 8);
  objc_release(v12);
  objc_release(v4);
}