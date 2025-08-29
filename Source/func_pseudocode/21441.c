-[LSRLanguageModel .cxx_destruct]
void __cdecl -[LSRLanguageModel .cxx_destruct](LSRLanguageModel *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_modelVersion, 0LL);
  objc_storeStrong((id *)&self->_localeCode, 0LL);
  objc_storeStrong((id *)&self->_recognizerConfigFilePath, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_appLmData, 0LL);
}