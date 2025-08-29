-[PKNANDataSession .cxx_destruct]
void __cdecl -[PKNANDataSession .cxx_destruct](PKNANDataSession *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_passphrase, 0LL);
  objc_storeStrong(&self->_terminationHandler, 0LL);
  objc_storeStrong((id *)&self->_peerEndpoint, 0LL);
  objc_storeStrong((id *)&self->_label, 0LL);
  objc_storeStrong((id *)&self->_dispatchQueue, 0LL);
  objc_storeStrong((id *)&self->_serviceSpecificInfo, 0LL);
  objc_storeStrong((id *)&self->_peerDataAddress, 0LL);
  objc_storeStrong(&self->_activateHandler, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_dataSession, 0LL);
}