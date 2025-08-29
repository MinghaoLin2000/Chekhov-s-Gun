-[ATXHeuristicDataSourcesClient calendarEventsFromStartDate:toEndDate:callback:]
void __cdecl -[ATXHeuristicDataSourcesClient calendarEventsFromStartDate:toEndDate:callback:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x21
  id v9; // x23
  void (__fastcall **v10)(id, _QWORD, id); // x19
  id v11; // x20
  id v12; // x21
  id v13; // x22
  _QWORD v14[4]; // [xsp+8h] [xbp-98h] BYREF
  id v15; // [xsp+28h] [xbp-78h]
  id v16; // [xsp+30h] [xbp-70h]
  __int64 *v17; // [xsp+38h] [xbp-68h]
  __int64 v18; // [xsp+40h] [xbp-60h] BYREF
  __int64 *v19; // [xsp+48h] [xbp-58h]
  __int64 v20; // [xsp+50h] [xbp-50h]
  __int64 (__fastcall *v21)(); // [xsp+58h] [xbp-48h]
  __int64 (__fastcall *v22)(); // [xsp+60h] [xbp-40h]
  id v23; // [xsp+68h] [xbp-38h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = (void (__fastcall **)(id, _QWORD, id))objc_retain(a5);
  v18 = 0LL;
  v19 = &v18;
  v20 = 0x3032000000LL;
  v21 = sub_100007F64;
  v22 = sub_100007F74;
  v23 = 0LL;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_10000853C;
  v14[3] = &unk_100028B30;
  v11 = objc_retain(v8);
  v15 = v11;
  v12 = objc_retain(v9);
  v16 = v12;
  v17 = &v18;
  v13 = objc_retainAutoreleasedReturnValue(
          -[ATXHeuristicDataSourcesClient _queryProxySynchronouslyWithTimeout:queryHandler:](
            self,
            "_queryProxySynchronouslyWithTimeout:queryHandler:",
            v14,
            5.0));
  v10[2](v10, v19[5], v13);
  objc_release(v13);
  objc_release(v16);
  objc_release(v15);
  _Block_object_dispose(&v18, 8);
  objc_release(v23);
  objc_release(v10);
  objc_release(v12);
  objc_release(v11);
}