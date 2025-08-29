-[FPCKService initWithConnection:]
FPCKService *__cdecl -[FPCKService initWithConnection:](FPCKService *self, SEL a2, id a3)
{
  id v4; // x19
  FPCKService *v5; // x0
  FPCKService *v6; // x20
  dispatch_semaphore_t v7; // x0
  OS_dispatch_semaphore *semaphore; // x8
  NSString *domainID; // x0
  NSDictionary *domainUserInfo; // x0
  FPSandboxingURLWrapper *domainRootURL; // x0
  FPSandboxingURLWrapper *databaseBackupPath; // x0
  NSArray *urls; // x0
  dispatch_queue_attr_s *v14; // x21
  dispatch_queue_t v15; // x0
  OS_dispatch_queue *runQueue; // x8
  _QWORD v18[4]; // [xsp+0h] [xbp-60h] BYREF
  id v19; // [xsp+20h] [xbp-40h] BYREF
  id location; // [xsp+28h] [xbp-38h] BYREF
  objc_super v21; // [xsp+30h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v21.receiver = self;
  v21.super_class = (Class)&OBJC_CLASS___FPCKService;
  v5 = -[FPCKService init](&v21, "init");
  v6 = v5;
  if ( v5 )
  {
    v5->_hasBeenPrepared = 0;
    v7 = dispatch_semaphore_create(0LL);
    semaphore = v6->_semaphore;
    v6->_semaphore = (OS_dispatch_semaphore *)v7;
    objc_release(semaphore);
    v6->_invalidated = 0;
    domainID = v6->_domainID;
    v6->_domainID = (NSString *)&stru_100008448;
    objc_release(domainID);
    domainUserInfo = v6->_domainUserInfo;
    v6->_domainUserInfo = 0LL;
    objc_release(domainUserInfo);
    domainRootURL = v6->_domainRootURL;
    v6->_domainRootURL = 0LL;
    objc_release(domainRootURL);
    databaseBackupPath = v6->_databaseBackupPath;
    v6->_databaseBackupPath = 0LL;
    objc_release(databaseBackupPath);
    urls = v6->_urls;
    v6->_urls = 0LL;
    objc_release(urls);
    v6->_volumeRole = 0;
    *(_OWORD *)&v6->_options = xmmword_100006F40;
    *(_WORD *)&v6->_fpfs = 257;
    v14 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v15 = dispatch_queue_create("FPCKService run queue", v14);
    runQueue = v6->_runQueue;
    v6->_runQueue = (OS_dispatch_queue *)v15;
    objc_release(runQueue);
    objc_release(v14);
    location = 0LL;
    objc_initWeak(&location, v6);
    v18[0] = _NSConcreteStackBlock;
    v18[1] = 3254779904LL;
    v18[2] = sub_100005034;
    v18[3] = &unk_1000081D0;
    objc_copyWeak(&v19, &location);
    objc_msgSend(v4, "setInvalidationHandler:", v18);
    objc_destroyWeak(&v19);
    objc_destroyWeak(&location);
  }
  objc_release(v4);
  return v6;
}