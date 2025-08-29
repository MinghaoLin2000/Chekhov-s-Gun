-[LSRConnection addProns:forWord:completion:]
void __cdecl -[LSRConnection addProns:forWord:completion:](LSRConnection *self, SEL a2, id a3, id a4, id a5)
{
  LSRLanguageModel *lsrLanguageModel; // x22
  id v9; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a5 )
  {
    lsrLanguageModel = self->_lsrLanguageModel;
    v9 = objc_retain(a5);
    (*((void (__fastcall **)(id, bool))a5 + 2))(
      v9,
      -[LSRLanguageModel addProns:forWord:](lsrLanguageModel, "addProns:forWord:", a3, a4));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v9);
  }
}