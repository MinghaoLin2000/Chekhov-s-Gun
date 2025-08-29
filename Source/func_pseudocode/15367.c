-[preflightInfo .cxx_destruct]
void __cdecl -[preflightInfo .cxx_destruct](preflightInfo *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->preflightedBundle, 0LL);
  objc_storeStrong((id *)&self->preflightDeviceMutex, 0LL);
  objc_storeStrong((id *)&self->preflightRegistryEntryID, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->preflightContainerID, 0LL);
}