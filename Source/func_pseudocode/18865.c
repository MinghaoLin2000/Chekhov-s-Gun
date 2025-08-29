-[SiriNCService observeValueForKeyPath:ofObject:change:context:]
void __cdecl -[SiriNCService observeValueForKeyPath:ofObject:change:context:](
        SiriNCService *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        void *a6)
{
  id v10; // x19
  id v11; // x20
  NSDistributedNotificationCenter *v12; // x22
  unsigned int v13; // w21
  NSDistributedNotificationCenter *v14; // x21
  NSDistributedNotificationCenter *v15; // x0
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v12 = (NSDistributedNotificationCenter *)objc_retain(a3);
  if ( !(unsigned int)objc_msgSend(a6, "isEqualToString:", CFSTR("self")) )
  {
    v16.receiver = self;
    v16.super_class = (Class)&OBJC_CLASS___SiriNCService;
    -[SiriNCService observeValueForKeyPath:ofObject:change:context:](
      &v16,
      "observeValueForKeyPath:ofObject:change:context:",
      v12,
      v10,
      v11,
      a6);
    v15 = v12;
LABEL_7:
    objc_release(v15);
    goto LABEL_8;
  }
  v13 = (unsigned int)-[NSDistributedNotificationCenter isEqualToString:](v12, "isEqualToString:", CFSTR("suspended"));
  objc_release(v12);
  if ( v13 )
  {
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSDistributedNotificationCenter defaultCenter](
              &OBJC_CLASS___NSDistributedNotificationCenter,
              "defaultCenter"));
    if ( -[NSDistributedNotificationCenter suspended](v14, "suspended") )
      -[NSDistributedNotificationCenter setSuspended:](v14, "setSuspended:", 0LL);
    v15 = v14;
    goto LABEL_7;
  }
LABEL_8:
  objc_release(v11);
  objc_release(v10);
}