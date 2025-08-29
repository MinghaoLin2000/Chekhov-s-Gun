-[IWXPCPackageConverter convertWithConverter:toSFFAtURL:queue:completion:]
id __cdecl -[IWXPCPackageConverter convertWithConverter:toSFFAtURL:queue:completion:](
        IWXPCPackageConverter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x23
  id v13; // x22
  NSProgress *v14; // x24
  dispatch_queue_global_s *v15; // x25
  NSProgress *v16; // x24
  id v17; // x21
  id v18; // x22
  id v19; // x20
  id v20; // x19
  void *v21; // x23
  NSProgress *v22; // x24
  _QWORD v24[4]; // [xsp+0h] [xbp-90h] BYREF
  id v25; // [xsp+20h] [xbp-70h]
  id v26; // [xsp+28h] [xbp-68h]
  id v27; // [xsp+30h] [xbp-60h]
  IWXPCPackageConverter *v28; // [xsp+38h] [xbp-58h]
  id v29; // [xsp+40h] [xbp-50h]
  id v30; // [xsp+48h] [xbp-48h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v14 = objc_retainAutoreleasedReturnValue(+[NSProgress progressWithTotalUnitCount:](&OBJC_CLASS___NSProgress, "progressWithTotalUnitCount:", 1LL));
  v15 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 3254779904LL;
  v24[2] = sub_1001673E0;
  v24[3] = &unk_1001DF850;
  v25 = v10;
  v16 = objc_retain(v14);
  v26 = v16;
  v27 = v11;
  v29 = v12;
  v30 = v13;
  v28 = self;
  v17 = objc_retain(v12);
  v18 = objc_retain(v13);
  v19 = objc_retain(v11);
  v20 = objc_retain(v10);
  dispatch_async(v15, v24);
  objc_release(v15);
  v21 = v29;
  v22 = objc_retainAutoreleaseReturnValue(v16);
  objc_release(v21);
  objc_release(v30);
  objc_release(v27);
  objc_release(v26);
  objc_release(v25);
  objc_release(v22);
  objc_release(v17);
  objc_release(v18);
  objc_release(v19);
  objc_release(v20);
  return v22;
}