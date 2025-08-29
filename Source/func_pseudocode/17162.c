-[AMLoaderServiceVariableController remoteActionVariablesUpdated:]
void __cdecl -[AMLoaderServiceVariableController remoteActionVariablesUpdated:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  _QWORD v4[5]; // [xsp+0h] [xbp-40h] BYREF
  id v5; // [xsp+28h] [xbp-18h]

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_100009574;
  v4[3] = &unk_10001C5C8;
  v4[4] = self;
  v5 = objc_retain(a3);
  v3 = objc_retain(v5);
  dispatch_async(&_dispatch_main_q, v4);
  objc_release(v5);
  objc_release(v3);
}