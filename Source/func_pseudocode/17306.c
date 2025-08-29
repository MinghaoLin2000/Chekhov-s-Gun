-[AMRemoteActionRunner invalidate]
void __cdecl -[AMRemoteActionRunner invalidate](AMRemoteActionRunner *self, SEL a2)
{
  AMAction *v3; // x20
  AMAction *v4; // x20
  AMAction *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
  -[AMAction setRunner:](v3, "setRunner:", 0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
  -[AMAction setRuntimeParameters:](v4, "setRuntimeParameters:", 0LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
  -[AMAction set_delegate:](v5, "set_delegate:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}