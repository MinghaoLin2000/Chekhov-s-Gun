__ZNK17Printd_Parameters19_get_SidesSupportedEv
id __fastcall Printd_Parameters::_get_SidesSupported(Printd_Parameters *this)
{
  id v1; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v1 = objc_retainAutoreleasedReturnValue(getNamedAttr<NSArray<NSString *> * {__strong}>(*(_QWORD *)this, (int)CFSTR("sides-supported")));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v1);
}