-[NSData tsp_dispatchDataWithApplier:]
id __cdecl -[NSData tsp_dispatchDataWithApplier:](NSData *self, SEL a2, id a3)
{
  id v4; // x19
  dispatch_data_s *v5; // x0
  id v6; // x19
  id v7; // x21
  id v8; // x20
  _QWORD v10[5]; // [xsp+0h] [xbp-90h] BYREF
  id v11; // [xsp+28h] [xbp-68h]
  id v12; // [xsp+30h] [xbp-60h]
  __int64 *v13; // [xsp+38h] [xbp-58h]
  __int64 v14; // [xsp+40h] [xbp-50h] BYREF
  __int64 *v15; // [xsp+48h] [xbp-48h]
  __int64 v16; // [xsp+50h] [xbp-40h]
  __int64 (__fastcall *v17)(); // [xsp+58h] [xbp-38h]
  __int64 (__fastcall *v18)(); // [xsp+60h] [xbp-30h]
  id v19; // [xsp+68h] [xbp-28h]
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v4 = objc_retain(a3);
  v14 = 0LL;
  v15 = &v14;
  v16 = 0x3032000000LL;
  v17 = sub_100058498;
  v18 = sub_1000584A8;
  v5 = objc_retain(&_dispatch_data_empty);
  v19 = &_dispatch_data_empty;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_100058A10;
  v10[3] = &unk_1001D54C8;
  v10[4] = self;
  v11 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
  v12 = v4;
  v13 = &v14;
  v6 = objc_retain(v4);
  v7 = objc_retain(v11);
  -[NSData enumerateByteRangesUsingBlock:](self, "enumerateByteRangesUsingBlock:", v10);
  v8 = objc_retain((id)v15[5]);
  objc_release(v12);
  objc_release(v11);
  objc_release(v7);
  _Block_object_dispose(&v14, 8);
  objc_release(v19);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}