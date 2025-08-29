-[CoreMLModelSecurity extractTeamIdentifierWithReply:]
void __cdecl -[CoreMLModelSecurity extractTeamIdentifierWithReply:](CoreMLModelSecurity *self, SEL a2, id a3)
{
  void (__fastcall **v3)(id, id, _QWORD); // x19
  id v4; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (void (__fastcall **)(id, id, _QWORD))objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(
         +[CoreMLModelSecurity teamIdentifierFromXPCConnection](
           &OBJC_CLASS___CoreMLModelSecurity,
           "teamIdentifierFromXPCConnection"));
  v3[2](v3, v4, 0LL);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}