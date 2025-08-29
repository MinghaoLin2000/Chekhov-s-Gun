-[SiriNCService siriApplicationFocusChanged:]
void __cdecl -[SiriNCService siriApplicationFocusChanged:](SiriNCService *self, SEL a2, bool a3)
{
  _QWORD v3[5]; // [xsp+0h] [xbp-30h] BYREF
  bool v4; // [xsp+28h] [xbp-8h]

  v3[0] = _NSConcreteStackBlock;
  v3[1] = 3254779904LL;
  v3[2] = sub_100006BD8;
  v3[3] = &unk_1000207C0;
  v4 = a3;
  v3[4] = self;
  SiriUIInvokeOnMainQueue(v3, a2);
}