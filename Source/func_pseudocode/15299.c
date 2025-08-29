-[MobileAssetUpdater initWithAssetType:log:]
MobileAssetUpdater *__cdecl -[MobileAssetUpdater initWithAssetType:log:](
        MobileAssetUpdater *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  MobileAssetUpdater *v8; // x0
  MobileAssetUpdater *v9; // x21
  NSLock *v10; // x0
  NSLock *lock; // x8
  NSURL *assetLocation; // x0
  NSString *v13; // x23
  id v14; // x22
  NSURL *v15; // x0
  NSURL *v16; // x8
  OS_os_log *log; // x22
  __int64 v19; // x21
  objc_super v20; // [xsp+0h] [xbp-40h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  objc_storeStrong((id *)&self->_log, a4);
  if ( !v6 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_1000135F4(log);
    objc_release(self);
    goto LABEL_10;
  }
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___MobileAssetUpdater;
  v8 = -[MobileAssetUpdater init](&v20, "init");
  if ( !v8 )
  {
    v19 = MEMORY[0x20];
    if ( os_log_type_enabled(MEMORY[0x20], OS_LOG_TYPE_ERROR) )
      sub_10001366C(v19);
LABEL_10:
    v14 = 0LL;
    v9 = 0LL;
    goto LABEL_4;
  }
  v9 = v8;
  -[MobileAssetUpdater setAssetType:](v8, "setAssetType:", v6);
  v10 = (NSLock *)objc_alloc_init((Class)&OBJC_CLASS___NSLock);
  lock = v9->_lock;
  v9->_lock = v10;
  objc_release(lock);
  assetLocation = v9->_assetLocation;
  v9->_assetLocation = 0LL;
  objc_release(assetLocation);
  v13 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater assetType](v9, "assetType"));
  v14 = objc_retainAutoreleasedReturnValue((id)ASServerURLForAssetType());
  objc_release(v13);
  v15 = (NSURL *)objc_msgSend(v14, "copy");
  v16 = v9->_assetLocation;
  v9->_assetLocation = v15;
  objc_release(v16);
LABEL_4:
  objc_release(v14);
  objc_release(v7);
  objc_release(v6);
  return v9;
}