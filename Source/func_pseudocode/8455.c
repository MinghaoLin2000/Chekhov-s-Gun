-[SUContainedSoftwareUpdateController softwareUpdateWasCancelled:]
void __cdecl -[SUContainedSoftwareUpdateController softwareUpdateWasCancelled:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  NSError *v5; // x20
  id v6; // x22
  dispatch_time_t v7; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-48h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSError errorWithDomain:code:userInfo:](
           &OBJC_CLASS___NSError,
           "errorWithDomain:code:userInfo:",
           CFSTR("com.apple.softwareupdate"),
           3072LL,
           0LL));
  v6 = objc_retainAutoreleasedReturnValue(-[SUContainedSoftwareUpdateController _contextForCtrl:](self, "_contextForCtrl:", v4));
  -[SUContainedSoftwareUpdateController _notifyContextOfQueryCompletion:error:](
    self,
    "_notifyContextOfQueryCompletion:error:",
    v6,
    v5);
  objc_release(v6);
  -[SUContainedSoftwareUpdateController _setContext:forCTRL:](self, "_setContext:forCTRL:", 0LL, v4);
  objc_release(v4);
  v7 = dispatch_time(0LL, 3000000000LL);
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100004DC0;
  block[3] = &unk_1000082D0;
  block[4] = self;
  dispatch_after(v7, &_dispatch_main_q, block);
  objc_release(v5);
}