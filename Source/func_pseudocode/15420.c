-[DisplayMobileAssetUpdater syncFindAsset:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[DisplayMobileAssetUpdater syncFindAsset:](DisplayMobileAssetUpdater *self, SEL a2, bool a3)
{
  _BOOL8 v3; // x20
  NSString *v5; // x19
  dispatch_semaphore_s *v6; // x22
  id v7; // x20
  _QWORD v9[4]; // [xsp+0h] [xbp-80h] BYREF
  id v10; // [xsp+20h] [xbp-60h]
  __int64 *v11; // [xsp+28h] [xbp-58h]
  __int64 v12; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v13; // [xsp+38h] [xbp-48h]
  __int64 v14; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v15)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v16)(); // [xsp+50h] [xbp-30h]
  id v17; // [xsp+58h] [xbp-28h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v3 = a3;
  v5 = objc_retain(self->_osVersion);
  objc_sync_enter(v5);
  v12 = 0LL;
  v13 = &v12;
  v14 = 0x3032000000LL;
  v15 = sub_100012730;
  v16 = sub_100012740;
  v17 = 0LL;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_100012748;
  v9[3] = &unk_100020940;
  v11 = &v12;
  v6 = objc_retain(dispatch_semaphore_create(0LL));
  v10 = v6;
  if ( -[MobileAssetUpdater findAsset:completion:](self, "findAsset:completion:", v3, v9) )
  {
    dispatch_semaphore_wait(v6, 0xFFFFFFFFFFFFFFFFLL);
    v7 = objc_retain((id)v13[5]);
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v10);
  _Block_object_dispose(&v12, 8);
  objc_release(v17);
  objc_release(v6);
  objc_sync_exit(v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}