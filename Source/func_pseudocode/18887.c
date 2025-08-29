-[SiriNCService dealloc]
void __cdecl -[SiriNCService dealloc](SiriNCService *self, SEL a2)
{
  NSDistributedNotificationCenter *v3; // x20
  NSDistributedNotificationCenter *v4; // x20
  objc_super v5; // [xsp+0h] [xbp-30h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter"));
  -[NSDistributedNotificationCenter removeObserver:](v3, "removeObserver:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter"));
  -[NSDistributedNotificationCenter removeObserver:forKeyPath:context:](
    v4,
    "removeObserver:forKeyPath:context:",
    self,
    CFSTR("suspended"),
    CFSTR("self"));
  -[SiriNCService _releaseEventTap](self, "_releaseEventTap");
  objc_release(v4);
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___SiriNCService;
  -[SiriNCService dealloc](&v5, "dealloc");
}