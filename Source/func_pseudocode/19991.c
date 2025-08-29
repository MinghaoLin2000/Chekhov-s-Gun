__Z14lite_print_pdfPU31objcproto20JobLikeThingProtocol8NSObject
__int64 __fastcall lite_print_pdf(void *a1)
{
  id v1; // x19
  __int64 v2; // x20
  _QWORD v4[4]; // [xsp+0h] [xbp-60h] BYREF
  id v5; // [xsp+20h] [xbp-40h]
  __int64 *v6; // [xsp+28h] [xbp-38h]
  __int64 v7; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v8; // [xsp+38h] [xbp-28h]
  __int64 v9; // [xsp+40h] [xbp-20h]
  __int64 v10; // [xsp+48h] [xbp-18h]

  v7 = 0LL;
  v8 = &v7;
  v9 = 0x2020000000LL;
  v10 = 0LL;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_1000259F0;
  v4[3] = &unk_10009DF78;
  v5 = objc_retain(a1);
  v6 = &v7;
  v1 = objc_retain(v5);
  objc_msgSend(v1, "_withActivity:", v4);
  objc_release(v5);
  v2 = v8[3];
  objc_release(v1);
  _Block_object_dispose(&v7, 8);
  return v2;
}