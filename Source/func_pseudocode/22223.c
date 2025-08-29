-[QLSatellite .cxx_destruct]
void __cdecl -[QLSatellite .cxx_destruct](QLSatellite *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_processSpecifier, 0LL);
  objc_storeStrong((id *)&self->_processIdentifier, 0LL);
  objc_storeStrong((id *)&self->_watchdogTimer, 0LL);
  objc_storeStrong((id *)&self->_requests, 0LL);
  objc_storeStrong((id *)&self->_queue, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_uuid, 0LL);
}