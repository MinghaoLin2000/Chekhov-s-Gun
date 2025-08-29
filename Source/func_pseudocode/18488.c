_$s19ControlCenterHelper0abC8DelegateCACycfC
id ControlCenterHelperDelegate.__allocating_init()()
{
  objc_class *v0; // x20
  id v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v1 = objc_allocWithZone(v0);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_msgSend(v1, "init");
}