-[LSRConnection metricsWithCompletion:]
void __cdecl -[LSRConnection metricsWithCompletion:](LSRConnection *self, SEL a2, id a3)
{
  LSRLanguageModel *lsrLanguageModel; // x20
  id v5; // x21
  id v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a3 )
  {
    lsrLanguageModel = self->_lsrLanguageModel;
    v5 = objc_retain(a3);
    v6 = objc_retainAutoreleasedReturnValue(-[LSRLanguageModel metrics](lsrLanguageModel, "metrics"));
    (*((void (__fastcall **)(id, id))a3 + 2))(v5, v6);
    objc_release(v5);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v6);
  }
}