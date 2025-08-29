-[TSUWarning affectedObjects]
id __cdecl -[TSUWarning affectedObjects](TSUWarning *self, SEL a2)
{
  id v2; // x19
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(
         -[NSDictionary objectForKeyedSubscript:](
           self->_userInfo,
           "objectForKeyedSubscript:",
           CFSTR("TSUWarningUserInfoAffectedObjectsKey")));
  v3 = objc_msgSend(v2, "copy");
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}