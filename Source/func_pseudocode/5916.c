-[LoginUserService _authenticationAuthorityForUserWithUID:onNode:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[LoginUserService _authenticationAuthorityForUserWithUID:onNode:](
        LoginUserService *self,
        SEL a2,
        unsigned int a3,
        id a4)
{
  __int64 v4; // x20
  id v6; // x19
  id v7; // x20
  id v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(_QWORD *)&a3;
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[LoginUserService _userRecordForUserWithUID:onNode:](self, "_userRecordForUserWithUID:onNode:", v4, v6));
  if ( v7 )
    v8 = objc_retainAutoreleasedReturnValue(
           -[LoginUserService _authenticationAuthorityForUserRecord:](
             self,
             "_authenticationAuthorityForUserRecord:",
             v7));
  else
    v8 = 0LL;
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}