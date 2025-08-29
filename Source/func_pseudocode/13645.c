-[IWXPCPackageConverter convertIWorkPackageAtURL:toSFFAtURL:queue:completion:]
void __cdecl -[IWXPCPackageConverter convertIWorkPackageAtURL:toSFFAtURL:queue:completion:](
        IWXPCPackageConverter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x23
  id v11; // x21
  id v12; // x20
  id v13; // x19
  dispatch_queue_global_s *v14; // x24
  id v15; // x19
  id v16; // x20
  id v17; // x21
  id v18; // x22
  _QWORD block[4]; // [xsp+8h] [xbp-78h] BYREF
  id v20; // [xsp+28h] [xbp-58h]
  IWXPCPackageConverter *v21; // [xsp+30h] [xbp-50h]
  id v22; // [xsp+38h] [xbp-48h]
  id v23; // [xsp+40h] [xbp-40h]
  id v24; // [xsp+48h] [xbp-38h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v14 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1001676A4;
  block[3] = &unk_1001DF880;
  v20 = v10;
  v21 = self;
  v22 = v11;
  v23 = v12;
  v24 = v13;
  v15 = objc_retain(v13);
  v16 = objc_retain(v12);
  v17 = objc_retain(v11);
  v18 = objc_retain(v10);
  dispatch_async(v14, block);
  objc_release(v14);
  objc_release(v24);
  objc_release(v23);
  objc_release(v22);
  objc_release(v20);
  objc_release(v15);
  objc_release(v16);
  objc_release(v17);
  objc_release(v18);
}