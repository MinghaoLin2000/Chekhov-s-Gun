_initHMHomeManager
id initHMHomeManager()
{
  void *v0; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  LoadHomeKit();
  classHMHomeManager = (__int64)objc_getClass("HMHomeManager");
  getHMHomeManagerClass = HMHomeManagerFunction;
  v0 = (void *)classHMHomeManager;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v0);
}