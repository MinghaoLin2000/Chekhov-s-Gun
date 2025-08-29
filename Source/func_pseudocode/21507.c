-[LSRConnection lmeThresholdWithCompletion:]
void __cdecl -[LSRConnection lmeThresholdWithCompletion:](LSRConnection *self, SEL a2, id a3)
{
  LSRLanguageModel *lsrLanguageModel; // x20
  id v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a3 )
  {
    lsrLanguageModel = self->_lsrLanguageModel;
    v5 = objc_retain(a3);
    (*((void (__fastcall **)(id, signed __int64))a3 + 2))(
      v5,
      -[LSRLanguageModel lmeThreshold](lsrLanguageModel, "lmeThreshold"));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v5);
  }
}