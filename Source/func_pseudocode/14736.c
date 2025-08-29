-[UINSSystemPreferencesSetting .cxx_destruct]
void __cdecl -[UINSSystemPreferencesSetting .cxx_destruct](UINSSystemPreferencesSetting *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_instructionsFormat, 0LL);
  objc_storeStrong((id *)&self->_alternateUsageKey, 0LL);
  objc_storeStrong((id *)&self->_usageKeys, 0LL);
  objc_storeStrong((id *)&self->_preferencePaneRevealKey, 0LL);
  objc_storeStrong((id *)&self->_preferencePaneIdentifier, 0LL);
  objc_storeStrong((id *)&self->_icon, 0LL);
  objc_storeStrong((id *)&self->_title, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_identifier, 0LL);
}