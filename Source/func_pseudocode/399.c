-[DeviceUIServiceViewController showErrorReportWithParameters:withReply:]
void __cdecl -[DeviceUIServiceViewController showErrorReportWithParameters:withReply:](
        DeviceUIServiceViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  void (__fastcall **v6)(id, _QWORD); // x19
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  v7 = objc_autoreleasePoolPush();
  v6[2](v6, 0LL);
  objc_autoreleasePoolPop(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}