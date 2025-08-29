__Z14liteOpenDriverP10lite_job_tP13lite_driver_sP8NSString12ipp_orient_eii
__int64 __fastcall liteOpenDriver(lite_job_t *a1, lite_driver_s *a2, NSString *a3, ipp_orient_e a4, int a5, int a6)
{
  id v10; // x20
  id v11; // x19
  __int64 v12; // x21
  _QWORD v14[4]; // [xsp+0h] [xbp-A0h] BYREF
  id v15; // [xsp+20h] [xbp-80h]
  id v16; // [xsp+28h] [xbp-78h]
  __int64 *v17; // [xsp+30h] [xbp-70h]
  lite_driver_s *v18; // [xsp+38h] [xbp-68h]
  ipp_orient_e v19; // [xsp+40h] [xbp-60h]
  int v20; // [xsp+44h] [xbp-5Ch]
  int v21; // [xsp+48h] [xbp-58h]
  __int64 v22; // [xsp+50h] [xbp-50h] BYREF
  __int64 *v23; // [xsp+58h] [xbp-48h]
  __int64 v24; // [xsp+60h] [xbp-40h]
  int v25; // [xsp+68h] [xbp-38h]

  v22 = 0LL;
  v23 = &v22;
  v24 = 0x2020000000LL;
  v25 = 0;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_1000584BC;
  v14[3] = &unk_10009F418;
  v17 = &v22;
  v18 = a2;
  v15 = objc_retain(a1);
  v16 = objc_retain(a3);
  v19 = a4;
  v20 = a5;
  v21 = a6;
  v10 = objc_retain(v16);
  v11 = objc_retain(v15);
  objc_msgSend(v11, "_withActivity:", v14);
  objc_release(v16);
  objc_release(v15);
  v12 = *((unsigned int *)v23 + 6);
  objc_release(v10);
  objc_release(v11);
  _Block_object_dispose(&v22, 8);
  return v12;
}