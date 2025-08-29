-[SiriNCService mouseDraggedInWindowedMode:]
void __cdecl -[SiriNCService mouseDraggedInWindowedMode:](SiriNCService *self, SEL a2, id a3)
{
  id v3; // x19
  __int64 v4; // x1
  _QWORD v5[5]; // [xsp+0h] [xbp-40h] BYREF
  id v6; // [xsp+28h] [xbp-18h]

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_1000097C8;
  v5[3] = &unk_1000209D0;
  v5[4] = self;
  v6 = objc_retain(a3);
  v3 = objc_retain(v6);
  SiriUIInvokeOnMainQueue(v5, v4);
  objc_release(v6);
  objc_release(v3);
}