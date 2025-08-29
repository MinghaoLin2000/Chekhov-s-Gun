-[AMPPhotoKitImporter beginDownloadVideoAsset:withQuality:]
int __cdecl -[AMPPhotoKitImporter beginDownloadVideoAsset:withQuality:](
        AMPPhotoKitImporter *self,
        SEL a2,
        id a3,
        int a4)
{
  id v5; // x19
  NSMutableDictionary *v6; // x20
  NSMutableDictionary *v7; // x22
  os_log_s *v8; // x20
  os_log_s *v9; // x21
  const char *v10; // x3
  os_log_s *v11; // x1
  uint32_t v12; // w5
  int v14; // [xsp+0h] [xbp-40h] BYREF
  id v15; // [xsp+4h] [xbp-3Ch]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter assetUUIDToAssetDictionary](self, "assetUUIDToAssetDictionary"));
  objc_release(v6);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter assetUUIDToAssetDictionary](self, "assetUUIDToAssetDictionary"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", v5));
    objc_release(v7);
    if ( !v8 )
    {
      v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_10004B750());
      if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
      {
        v14 = 138543362;
        v15 = v5;
        v10 = "Could not look up asset %{public}@!";
        v11 = v9;
        v12 = 12;
        goto LABEL_12;
      }
LABEL_9:
      objc_release(v9);
      goto LABEL_10;
    }
    if ( -[AMPPhotoKitImporter currentPHImageRequestID](self, "currentPHImageRequestID") )
    {
      v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_10004B750());
      if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
      {
        LOWORD(v14) = 0;
        v10 = "Existing video download in progress!";
        v11 = v9;
        v12 = 2;
LABEL_12:
        _os_log_error_impl((void *)&_mh_execute_header, v11, OS_LOG_TYPE_ERROR, v10, (uint8_t *)&v14, v12);
        goto LABEL_9;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_10004B750());
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
    {
      LOWORD(v14) = 0;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v8,
        OS_LOG_TYPE_ERROR,
        "No asset dictionary loaded yet!",
        (uint8_t *)&v14,
        2u);
    }
  }
LABEL_10:
  objc_release(v8);
  objc_release(v5);
  return 0;
}