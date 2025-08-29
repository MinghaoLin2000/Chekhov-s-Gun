start
__int64 __fastcall start(__int64 a1, __int64 a2)
{
  void *v4; // x19
  NSXPCListener *v5; // x20
  __int64 v6; // x1
  void *v7; // x21
  void *v8; // x0
  void *v9; // x24
  __int64 v10; // x22

  v4 = objc_autoreleasePoolPush();
  v5 = objc_retainAutoreleasedReturnValue(+[NSXPCListener anonymousListener](&OBJC_CLASS___NSXPCListener, "anonymousListener"));
  if ( v5 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSXPCSharedListener sharedServiceListener](&OBJC_CLASS___NSXPCSharedListener, "sharedServiceListener"));
    if ( v7 )
    {
      v8 = (void *)objc_opt_new(&OBJC_CLASS___DeviceClientListenerDelegate, v6);
      v9 = v8;
      if ( v8 )
      {
        objc_msgSend(v8, "setListener:", v5);
        -[NSXPCListener setDelegate:](v5, "setDelegate:", v9);
        objc_msgSend(v7, "addListener:withName:", v5, CFSTR("DeviceClientListener"));
        v10 = NSViewServiceApplicationMain(a1, a2);
      }
      else
      {
        v10 = 0LL;
      }
      objc_release(v9);
    }
    else
    {
      NSLog(&CFSTR("Could not create shared listener service.").isa);
      v10 = 0LL;
    }
    objc_release(v7);
  }
  else
  {
    NSLog(&CFSTR("Could not create anonymous listener").isa);
    v10 = 0LL;
  }
  objc_release(v5);
  objc_autoreleasePoolPop(v4);
  return v10;
}