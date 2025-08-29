-[PAUbiquityController presentedItemDidChange]
void __cdecl -[PAUbiquityController presentedItemDidChange](PAUbiquityController *self, SEL a2)
{
  id v3; // x20
  NSFileManager *v4; // x21
  void *v5; // x22
  unsigned int v6; // w23
  NSDistributedNotificationCenter *v7; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !self->_localURL )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[PAUbiquityController _ubiquitousCardsURL](&OBJC_CLASS___PAUbiquityController, "_ubiquitousCardsURL"));
    v4 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "path"));
    v6 = -[NSFileManager fileExistsAtPath:](v4, "fileExistsAtPath:", v5);
    objc_release(v5);
    objc_release(v4);
    if ( v6 )
    {
      v7 = objc_retainAutoreleasedReturnValue(
             +[NSDistributedNotificationCenter defaultCenter](
               &OBJC_CLASS___NSDistributedNotificationCenter,
               "defaultCenter"));
      -[NSDistributedNotificationCenter postNotificationName:object:userInfo:deliverImmediately:](
        v7,
        "postNotificationName:object:userInfo:deliverImmediately:",
        CFSTR("PassbookUbiquitousContainerExists"),
        0LL,
        0LL,
        1LL);
      objc_release(v7);
      +[NSFileCoordinator removeFilePresenter:](&OBJC_CLASS___NSFileCoordinator, "removeFilePresenter:", self);
    }
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v3);
  }
}