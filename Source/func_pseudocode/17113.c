-[AMActionLoaderServiceInstance transferAutomatorEnvironment:]
void __cdecl -[AMActionLoaderServiceInstance transferAutomatorEnvironment:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  _QWORD block[4]; // [xsp+8h] [xbp-38h] BYREF
  id v5; // [xsp+28h] [xbp-18h]

  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1000050F0;
  block[3] = &unk_10001C338;
  v5 = objc_retain(a3);
  v3 = objc_retain(v5);
  dispatch_async(&_dispatch_main_q, block);
  objc_release(v5);
  objc_release(v3);
}