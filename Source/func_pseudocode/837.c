-[DeviceSettingsViewController dispatchWithBlock:]
void __cdecl -[DeviceSettingsViewController dispatchWithBlock:](DeviceSettingsViewController *self, SEL a2, id a3)
{
  void (__fastcall **v4)(_QWORD); // x19
  OS_dispatch_queue *v5; // x20
  _QWORD block[4]; // [xsp+8h] [xbp-38h] BYREF
  id v7; // [xsp+28h] [xbp-18h]

  v4 = (void (__fastcall **)(_QWORD))objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController queue](self, "queue"));
  if ( v5 )
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_1000175A4;
    block[3] = &unk_1000B8FE0;
    v7 = objc_retain(v4);
    dispatch_sync((dispatch_queue_t)v5, block);
    objc_release(v7);
  }
  else
  {
    v4[2](v4);
  }
  objc_release(v5);
  objc_release(v4);
}