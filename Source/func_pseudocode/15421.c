-[DisplayMobileAssetUpdater syncDownloadAsset:]
bool __cdecl -[DisplayMobileAssetUpdater syncDownloadAsset:](DisplayMobileAssetUpdater *self, SEL a2, id a3)
{
  id v4; // x19
  dispatch_semaphore_s *v5; // x20
  bool v6; // w21
  _QWORD v8[4]; // [xsp+0h] [xbp-70h] BYREF
  id v9; // [xsp+20h] [xbp-50h]
  __int64 *v10; // [xsp+28h] [xbp-48h]
  __int64 v11; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v12; // [xsp+38h] [xbp-38h]
  __int64 v13; // [xsp+40h] [xbp-30h]
  char v14; // [xsp+48h] [xbp-28h]

  v4 = objc_retain(a3);
  v11 = 0LL;
  v12 = &v11;
  v13 = 0x2020000000LL;
  v14 = 0;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100012964;
  v8[3] = &unk_100020940;
  v10 = &v11;
  v5 = objc_retain(dispatch_semaphore_create(0LL));
  v9 = v5;
  if ( -[MobileAssetUpdater downloadAsset:completion:](self, "downloadAsset:completion:", v4, v8) )
  {
    dispatch_semaphore_wait(v5, 0xFFFFFFFFFFFFFFFFLL);
    v6 = *((_BYTE *)v12 + 24) != 0;
  }
  else
  {
    v6 = 0;
  }
  objc_release(v9);
  _Block_object_dispose(&v11, 8);
  objc_release(v5);
  objc_release(v4);
  return v6;
}