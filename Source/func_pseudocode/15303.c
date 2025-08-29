-[MobileAssetUpdater downloadComplete:completion:]
void __cdecl -[MobileAssetUpdater downloadComplete:completion:](
        MobileAssetUpdater *self,
        SEL a2,
        signed __int64 a3,
        id a4)
{
  void (__fastcall **v6)(id, void *); // x19
  MAAsset *v7; // x0
  MAAsset *v8; // x21
  OS_os_log *log; // x21

  v6 = (void (__fastcall **)(id, void *))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater asset](self, "asset"));
  v8 = v7;
  if ( a3 )
  {
    objc_release(v7);
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100013AEC(a3, log);
    v8 = 0LL;
    if ( v6 )
      goto LABEL_3;
  }
  else if ( v6 )
  {
LABEL_3:
    v6[2](v6, v8);
  }
  objc_release(v8);
  objc_release(v6);
}