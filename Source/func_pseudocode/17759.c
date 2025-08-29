-[MLCloudSession initWithTeamIdentifier:]
MLCloudSession *__cdecl -[MLCloudSession initWithTeamIdentifier:](MLCloudSession *self, SEL a2, id a3)
{
  id v4; // x19
  MLCloudSession *v5; // x20
  void *v6; // x21
  CKContainer *v7; // x0
  CKContainer *container; // x8
  NSString *serviceName; // x0
  NSString *v10; // x0
  NSString *teamIdentifier; // x8
  MLCloudSession *v12; // x0
  objc_super v14; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___MLCloudSession;
  v5 = -[MLCloudSession init](&v14, "init");
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(
           +[CKContainer containerIDForContainerIdentifier:environment:](
             &OBJC_CLASS___CKContainer,
             "containerIDForContainerIdentifier:environment:",
             CFSTR("com.apple.coreml.modelkeystore"),
             1LL));
    v7 = (CKContainer *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___CKContainer), "initWithContainerID:", v6);
    container = v5->_container;
    v5->_container = v7;
    objc_release(container);
    serviceName = v5->_serviceName;
    v5->_serviceName = (NSString *)CFSTR("mks-production");
    objc_release(serviceName);
    v10 = (NSString *)objc_msgSend(v4, "copy");
    teamIdentifier = v5->_teamIdentifier;
    v5->_teamIdentifier = v10;
    objc_release(teamIdentifier);
    v12 = objc_retain(v5);
    objc_release(v6);
  }
  objc_release(v4);
  objc_release(v5);
  return v5;
}