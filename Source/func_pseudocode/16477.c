-[LegacyAudioController .cxx_destruct]
void __cdecl -[LegacyAudioController .cxx_destruct](LegacyAudioController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_matchingDASActivityList, 0LL);
  objc_storeStrong((id *)&self->_matchingBSDNotificationsList, 0LL);
  objc_storeStrong((id *)&self->_matchingAccessoriesList, 0LL);
  objc_storeStrong((id *)&self->_queue, 0LL);
  objc_storeStrong((id *)&self->_database, 0LL);
  objc_storeStrong((id *)&self->_internalAccessoriesSeen, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_internalActiveAccessories, 0LL);
}