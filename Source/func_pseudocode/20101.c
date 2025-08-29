-[PKNANSubscriber .cxx_destruct]
void __cdecl -[PKNANSubscriber .cxx_destruct](PKNANSubscriber *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong(&self->_receiveHandler, 0LL);
  objc_storeStrong(&self->_endpointChangedHandler, 0LL);
  objc_storeStrong(&self->_endpointLostHandler, 0LL);
  objc_storeStrong(&self->_endpointFoundHandler, 0LL);
  objc_storeStrong((id *)&self->_serviceType, 0LL);
  objc_storeStrong((id *)&self->_label, 0LL);
  objc_storeStrong((id *)&self->_dispatchQueue, 0LL);
  objc_storeStrong((id *)&self->_endpoints, 0LL);
  objc_storeStrong(&self->_activateHandler, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_subscriber, 0LL);
}