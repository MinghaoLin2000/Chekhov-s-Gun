-[LSRConnection deserializeNgramCountsData:completion:]
void __cdecl -[LSRConnection deserializeNgramCountsData:completion:](LSRConnection *self, SEL a2, id a3, id a4)
{
  LSRLanguageModel *lsrLanguageModel; // x21
  id v7; // x22
  id v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a4 )
  {
    lsrLanguageModel = self->_lsrLanguageModel;
    v7 = objc_retain(a4);
    v8 = objc_retainAutoreleasedReturnValue(-[LSRLanguageModel deserializeNgramCountsData:](lsrLanguageModel, "deserializeNgramCountsData:", a3));
    (*((void (__fastcall **)(id, id))a4 + 2))(v7, v8);
    objc_release(v7);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v8);
  }
}