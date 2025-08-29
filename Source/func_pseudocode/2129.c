-[AMPPhotoKitImporter downloadPhotoAsset:]
id __cdecl -[AMPPhotoKitImporter downloadPhotoAsset:](AMPPhotoKitImporter *self, SEL a2, id a3)
{
  id v4; // x19
  NSMutableDictionary *v5; // x0
  _BOOL4 v6; // w21
  NSMutableDictionary *v7; // x21
  os_log_s *v8; // x20
  PHImageManager *v9; // x21
  id v10; // x22
  id v11; // x23
  _QWORD v13[5]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v14; // [xsp+30h] [xbp-80h] BYREF
  __int64 *v15; // [xsp+38h] [xbp-78h]
  __int64 v16; // [xsp+40h] [xbp-70h]
  __int64 (__fastcall *v17)(); // [xsp+48h] [xbp-68h]
  __int64 (__fastcall *v18)(); // [xsp+50h] [xbp-60h]
  id v19; // [xsp+58h] [xbp-58h]
  uint8_t buf[4]; // [xsp+60h] [xbp-50h] BYREF
  id v21; // [xsp+64h] [xbp-4Ch]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v4 = objc_retain(a3);
  v14 = 0LL;
  v15 = &v14;
  v16 = 0x3032000000LL;
  v17 = sub_10004B738;
  v18 = sub_10004B748;
  v19 = 0LL;
  v5 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter assetUUIDToAssetDictionary](self, "assetUUIDToAssetDictionary"));
  v6 = v5 == 0LL;
  objc_release(v5);
  if ( v6 )
  {
    v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_10004B750());
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      _os_log_error_impl((void *)&_mh_execute_header, v8, OS_LOG_TYPE_ERROR, "No asset dictionary loaded yet!", buf, 2u);
    }
    v11 = 0LL;
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter assetUUIDToAssetDictionary](self, "assetUUIDToAssetDictionary"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", v4));
    objc_release(v7);
    if ( v8 )
    {
      v9 = objc_retainAutoreleasedReturnValue(+[PHImageManager defaultManager](&OBJC_CLASS___PHImageManager, "defaultManager"));
      v10 = objc_alloc_init((Class)&OBJC_CLASS___PHImageRequestOptions);
      objc_msgSend(v10, "setDeliveryMode:", 1LL);
      objc_msgSend(v10, "setLoadingMode:", 1LL);
      objc_msgSend(v10, "setNetworkAccessAllowed:", 1LL);
      objc_msgSend(v10, "setVersion:", 0LL);
      objc_msgSend(v10, "setSynchronous:", 1LL);
      v13[0] = _NSConcreteStackBlock;
      v13[1] = 3254779904LL;
      v13[2] = sub_10004B7C8;
      v13[3] = &unk_1000B97A8;
      v13[4] = &v14;
      -[PHImageManager requestImageDataAndOrientationForAsset:options:resultHandler:](
        v9,
        "requestImageDataAndOrientationForAsset:options:resultHandler:",
        v8,
        v10,
        v13);
      v11 = objc_retain((id)v15[5]);
      objc_release(v10);
    }
    else
    {
      v9 = (PHImageManager *)objc_retainAutoreleasedReturnValue((id)sub_10004B750());
      if ( os_log_type_enabled((os_log_t)v9, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 138543362;
        v21 = v4;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v9,
          OS_LOG_TYPE_ERROR,
          "Could not look up asset %{public}@!",
          buf,
          0xCu);
      }
      v11 = 0LL;
    }
    objc_release(v9);
  }
  objc_release(v8);
  _Block_object_dispose(&v14, 8);
  objc_release(v19);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}