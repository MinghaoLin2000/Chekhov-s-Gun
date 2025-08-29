-[MobileAssetUpdater .cxx_destruct]
void __cdecl -[MobileAssetUpdater .cxx_destruct](MobileAssetUpdater *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_assetLocation, 0LL);
  objc_storeStrong((id *)&self->_lock, 0LL);
  objc_storeStrong((id *)&self->_log, 0LL);
  objc_storeStrong((id *)&self->_assetType, 0LL);
  objc_storeStrong((id *)&self->_query, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_asset, 0LL);
}