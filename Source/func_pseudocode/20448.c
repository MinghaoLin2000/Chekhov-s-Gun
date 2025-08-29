-[PrintdRPCService _realPathForTmpReply:]
void __cdecl -[PrintdRPCService _realPathForTmpReply:](PrintdRPCService *self, SEL a2, id a3)
{
  void (__fastcall **v3)(id, NSURL *); // x19
  NSString *v4; // x20
  NSURL *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (void (__fastcall **)(id, NSURL *))objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
  v5 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v4));
  v3[2](v3, v5);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}