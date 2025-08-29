__ZN17Printd_Parameters23_del_RequestingUserNameEv
void __fastcall Printd_Parameters::_del_RequestingUserName(id *this)
{
  void *v2; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(objc_msgSend(*this, "_findAttribute0:valueTag:", CFSTR("requesting-user-name"), 66LL));
  if ( v2 )
    objc_msgSend(*this, "_deleteAttribute:", v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}