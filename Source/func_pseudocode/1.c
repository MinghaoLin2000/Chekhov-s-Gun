-[MacOSSharingExtensionContext resumeSessionTeardownByCallingContinuationBlock:]
void __cdecl -[MacOSSharingExtensionContext resumeSessionTeardownByCallingContinuationBlock:](
        MacOSSharingExtensionContext *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  OS_dispatch_group *v5; // x19
  id v6; // x20
  _QWORD block[4]; // [xsp+8h] [xbp-38h] BYREF
  id v8; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[MacOSSharingExtensionContext barrier](self, "barrier"));
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100004710;
  block[3] = &unk_1000C1750;
  v8 = v4;
  v6 = objc_retain(v4);
  dispatch_group_notify((dispatch_group_t)v5, &_dispatch_main_q, block);
  objc_release(v5);
  objc_release(v8);
  objc_release(v6);
}