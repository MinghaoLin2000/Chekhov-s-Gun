+[PAMediaConversionServiceSharedUtilitiesServiceSide imageDataForPhotosAdjustmentsComposition:source:exporterImageOptions:outOutputSize:job:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide imageDataForPhotosAdjustmentsComposition:source:exporterImageOptions:outOutputSize:job:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        CGSize *a6,
        id a7)
{
  id v11; // x19
  id v12; // x22
  id v13; // x21
  id v14; // x20
  id v15; // x23
  dispatch_block_t v16; // x24
  id v17; // x26
  id v18; // x24
  void *v19; // x0
  void *v20; // x26
  id v21; // x27
  void *v22; // x28
  void *v23; // x20
  void *v24; // x22
  __int64 v25; // x1
  void *v26; // x25
  id v28; // [xsp+8h] [xbp-E8h]
  id v29; // [xsp+10h] [xbp-E0h]
  id v30; // [xsp+18h] [xbp-D8h] BYREF
  _QWORD v31[4]; // [xsp+20h] [xbp-D0h] BYREF
  id v32; // [xsp+40h] [xbp-B0h]
  uint8_t *v33; // [xsp+48h] [xbp-A8h]
  uint8_t buf[8]; // [xsp+50h] [xbp-A0h] BYREF
  uint8_t *v35; // [xsp+58h] [xbp-98h]
  __int64 v36; // [xsp+60h] [xbp-90h]
  __int64 (__fastcall *v37)(); // [xsp+68h] [xbp-88h]
  __int64 (__fastcall *v38)(); // [xsp+70h] [xbp-80h]
  id v39; // [xsp+78h] [xbp-78h]
  uint8_t v40[4]; // [xsp+80h] [xbp-70h] BYREF
  id v41; // [xsp+84h] [xbp-6Ch]
  __int64 vars8; // [xsp+F8h] [xbp+8h]

  v11 = objc_retain(a3);
  v12 = objc_retain(a4);
  v13 = objc_retain(a5);
  v14 = objc_retain(a7);
  if ( objc_msgSend(v11, "mediaType") == (void *)1 )
  {
    v15 = v14;
    *(_QWORD *)buf = 0LL;
    v35 = buf;
    v36 = 0x3032000000LL;
    v37 = sub_10000D020;
    v38 = sub_10000D030;
    v39 = 0LL;
    v16 = dispatch_block_create(DISPATCH_BLOCK_ASSIGN_CURRENT, &stru_100041420);
    v17 = objc_alloc_init((Class)&OBJC_CLASS___PICompositionExporter);
    v31[0] = _NSConcreteStackBlock;
    v31[1] = 3254779904LL;
    v31[2] = sub_10001331C;
    v31[3] = &unk_1000413C0;
    v33 = buf;
    v18 = objc_retain(v16);
    v32 = v18;
    objc_msgSend(v17, "exportImageToDataWithComposition:options:completion:", v11, v13, v31);
    v29 = v17;
    dispatch_block_wait(v18, 0xFFFFFFFFFFFFFFFFLL);
    v19 = (void *)*((_QWORD *)v35 + 5);
    v30 = 0LL;
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "result:", &v30));
    v21 = objc_retain(v30);
    if ( v20 )
    {
      if ( a6 )
      {
        v28 = v12;
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "geometry"));
        v23 = objc_msgSend(v22, "scaledSize");
        v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "geometry"));
        objc_msgSend(v24, "scaledSize");
        a6->width = (double)(__int64)v23;
        a6->height = (double)v25;
        objc_release(v24);
        v12 = v28;
        v14 = v15;
        objc_release(v22);
      }
      v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "data"));
    }
    else
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)v40 = 138543362;
        v41 = v21;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Unable to render adjustments to data destination: %{public}@",
          v40,
          0xCu);
      }
      v26 = 0LL;
    }
    objc_release(v20);
    objc_release(v21);
    objc_release(v32);
    objc_release(v29);
    objc_release(v18);
    _Block_object_dispose(buf, 8);
    objc_release(v39);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Multi-output adjustments conversions can only be rendered to URL collections, not data",
        buf,
        2u);
    }
    v26 = 0LL;
  }
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v26);
}