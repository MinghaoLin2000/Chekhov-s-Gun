__Z16lite_print_imagePU31objcproto20JobLikeThingProtocol8NSObject
__int64 __fastcall lite_print_image(void *a1)
{
  id v1; // x19
  os_log_s *v2; // x20
  unsigned int v3; // w21
  unsigned int v4; // w0
  id v5; // x20
  __int64 v6; // x19
  _QWORD v8[4]; // [xsp+0h] [xbp-90h] BYREF
  id v9; // [xsp+20h] [xbp-70h]
  __int64 *v10; // [xsp+28h] [xbp-68h]
  __int64 v11; // [xsp+30h] [xbp-60h] BYREF
  __int64 *v12; // [xsp+38h] [xbp-58h]
  __int64 v13; // [xsp+40h] [xbp-50h]
  __int64 v14; // [xsp+48h] [xbp-48h]
  uint8_t buf[4]; // [xsp+50h] [xbp-40h] BYREF
  unsigned int v16; // [xsp+54h] [xbp-3Ch]
  __int16 v17; // [xsp+58h] [xbp-38h]
  unsigned int v18; // [xsp+5Ah] [xbp-36h]
  __int16 v19; // [xsp+5Eh] [xbp-32h]
  const char *v20; // [xsp+60h] [xbp-30h]

  v1 = objc_retain(a1);
  v11 = 0LL;
  v12 = &v11;
  v13 = 0x2020000000LL;
  v14 = 0LL;
  v2 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v2, OS_LOG_TYPE_DEFAULT) )
  {
    v3 = (unsigned int)objc_msgSend(v1, "printd_job_id");
    if ( v1 )
      v4 = (unsigned int)objc_msgSend(v1, "destination_job_id");
    else
      v4 = -1;
    *(_DWORD *)buf = 67109634;
    v16 = v3;
    v17 = 1024;
    v18 = v4;
    v19 = 2080;
    v20 = "lite_print_image";
    _os_log_impl((void *)&_mh_execute_header, v2, OS_LOG_TYPE_DEFAULT, "[Job %d][%d] #### %s.", buf, 0x18u);
  }
  objc_release(v2);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_10002269C;
  v8[3] = &unk_10009DF78;
  v5 = objc_retain(v1);
  v9 = v5;
  v10 = &v11;
  objc_msgSend(v5, "_withActivity:", v8);
  objc_release(v9);
  v6 = v12[3];
  _Block_object_dispose(&v11, 8);
  objc_release(v5);
  return v6;
}