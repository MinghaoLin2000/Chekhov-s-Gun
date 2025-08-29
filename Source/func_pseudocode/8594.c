-[MetricMeasurementHelper _quiesceBeforeIterationHelper:timeout:response:]
void __cdecl -[MetricMeasurementHelper _quiesceBeforeIterationHelper:timeout:response:](
        MetricMeasurementHelper *self,
        SEL a2,
        double a3,
        double a4,
        id a5)
{
  void (__fastcall **v7)(id, _QWORD, __int64); // x19
  MXMTargetQueue *v8; // x20
  double v9; // d0
  MXMTargetQueue *v10; // x20
  MXMSysmonRequest *v11; // x21
  void **v12; // [xsp+10h] [xbp-F0h] BYREF
  __int64 v13; // [xsp+18h] [xbp-E8h]
  __int64 (__fastcall *v14)(int, id); // [xsp+20h] [xbp-E0h]
  void *v15; // [xsp+28h] [xbp-D8h]
  id v16; // [xsp+30h] [xbp-D0h]
  __int64 *v17; // [xsp+38h] [xbp-C8h]
  __int64 *v18; // [xsp+40h] [xbp-C0h]
  timespec v19; // [xsp+48h] [xbp-B8h]
  double v20; // [xsp+58h] [xbp-A8h]
  __int64 v21; // [xsp+60h] [xbp-A0h] BYREF
  __int64 *v22; // [xsp+68h] [xbp-98h]
  __int64 v23; // [xsp+70h] [xbp-90h]
  __int64 (__fastcall *v24)(); // [xsp+78h] [xbp-88h]
  __int64 (__fastcall *v25)(); // [xsp+80h] [xbp-80h]
  id v26; // [xsp+88h] [xbp-78h]
  __int64 v27; // [xsp+90h] [xbp-70h] BYREF
  __int64 *v28; // [xsp+98h] [xbp-68h]
  __int64 v29; // [xsp+A0h] [xbp-60h]
  char v30; // [xsp+A8h] [xbp-58h]
  timespec __tp; // [xsp+B0h] [xbp-50h] BYREF

  v7 = (void (__fastcall **)(id, _QWORD, __int64))objc_retain(a5);
  v8 = objc_alloc_init(&OBJC_CLASS___MXMTargetQueue);
  -[MXMTargetQueue setTarget:](v8, "setTarget:", a3);
  __tp.tv_sec = 0LL;
  __tp.tv_nsec = 0LL;
  clock_gettime(_CLOCK_REALTIME, &__tp);
  if ( a4 > 0.0 )
  {
    v9 = (double)-[MXMTargetQueue size](v8, "size");
    if ( v9 >= a4 )
      a4 = (double)-[MXMTargetQueue size](v8, "size", v9);
  }
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x2020000000LL;
  v30 = 0;
  v21 = 0LL;
  v22 = &v21;
  v23 = 0x3032000000LL;
  v24 = sub_1000051F0;
  v25 = sub_100005200;
  v26 = 0LL;
  v12 = _NSConcreteStackBlock;
  v13 = 3254779904LL;
  v14 = sub_100005208;
  v15 = &unk_10000C448;
  v17 = &v21;
  v19 = __tp;
  v10 = objc_retain(v8);
  v16 = v10;
  v18 = &v27;
  v20 = a4;
  v11 = objc_retainAutoreleasedReturnValue(
          +[MXMSysmonRequest requestWithType:handler:](
            &OBJC_CLASS___MXMSysmonRequest,
            "requestWithType:handler:",
            1LL,
            &v12));
  -[MXMSysmonRequest addAttributes:](v11, "addAttributes:", 51LL, 13LL, 0LL, v12, v13, v14, v15);
  -[MXMSysmonRequest setInterval:](v11, "setInterval:", 1.0);
  -[MXMSysmonRequest execute](v11, "execute");
  -[MXMSysmonRequest wait](v11, "wait");
  v7[2](v7, *((unsigned __int8 *)v28 + 24), v22[5]);
  objc_release(v11);
  objc_release(v16);
  _Block_object_dispose(&v21, 8);
  objc_release(v26);
  _Block_object_dispose(&v27, 8);
  objc_release(v10);
  objc_release(v7);
}