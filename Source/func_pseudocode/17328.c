-[AMRemoteActionRunner runningActions]
NSArray *__cdecl -[AMRemoteActionRunner runningActions](AMRemoteActionRunner *self, SEL a2)
{
  AMAction *v3; // x20
  AMAction *v4; // x20
  NSArray *v5; // x19
  AMAction *v7; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( -[AMRemoteActionRunner isIdle](self, "isIdle")
    || (v3 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action")), objc_release(v3), !v3) )
  {
    v5 = (NSArray *)&__NSArray0__struct;
  }
  else
  {
    v4 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
    v7 = v4;
    v5 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v7, 1LL));
    objc_release(v4);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}