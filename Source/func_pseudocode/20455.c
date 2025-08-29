__Z15liteCloseDriverP10lite_job_tP13lite_driver_s
__int64 __fastcall liteCloseDriver(lite_job_t *a1, lite_driver_s *a2)
{
  id v3; // x19
  __int64 v4; // x20
  _QWORD v6[4]; // [xsp+8h] [xbp-68h] BYREF
  id v7; // [xsp+28h] [xbp-48h]
  __int64 *v8; // [xsp+30h] [xbp-40h]
  lite_driver_s *v9; // [xsp+38h] [xbp-38h]
  __int64 v10; // [xsp+40h] [xbp-30h] BYREF
  __int64 *v11; // [xsp+48h] [xbp-28h]
  __int64 v12; // [xsp+50h] [xbp-20h]
  int v13; // [xsp+58h] [xbp-18h]

  v10 = 0LL;
  v11 = &v10;
  v12 = 0x2020000000LL;
  v13 = 0;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_100053748;
  v6[3] = &unk_10009F358;
  v7 = objc_retain(a1);
  v8 = &v10;
  v9 = a2;
  v3 = objc_retain(v7);
  objc_msgSend(v3, "_withActivity:", v6);
  objc_release(v7);
  v4 = *((unsigned int *)v11 + 6);
  objc_release(v3);
  _Block_object_dispose(&v10, 8);
  return v4;
}