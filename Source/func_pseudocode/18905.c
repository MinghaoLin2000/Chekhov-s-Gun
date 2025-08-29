-[SiriNCService endMyriadAdvertising]
void __cdecl -[SiriNCService endMyriadAdvertising](SiriNCService *self, SEL a2)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  __int64 (__fastcall *v5)(); // x16
  _QWORD v6[5]; // [xsp+0h] [xbp-60h] BYREF
  _QWORD v7[5]; // [xsp+28h] [xbp-38h] BYREF

  if ( (unsigned int)+[AFFeatureFlags isSCDAFrameworkEnabled](&OBJC_CLASS___AFFeatureFlags, "isSCDAFrameworkEnabled") )
  {
    v4 = v7;
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v5 = sub_10000AE20;
  }
  else
  {
    v4 = v6;
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 3254779904LL;
    v5 = sub_10000AEEC;
  }
  v4[2] = v5;
  v4[3] = &unk_100020670;
  v4[4] = self;
  SiriUIInvokeOnMainQueue(v4, v3);
}