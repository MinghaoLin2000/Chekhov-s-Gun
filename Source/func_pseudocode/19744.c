-[platform_http_get .cxx_destruct]
void __cdecl -[platform_http_get .cxx_destruct](platform_http_get *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_data, 0LL);
  objc_storeStrong(&self->_cb, 0LL);
  objc_storeStrong((id *)&self->_url, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_session, 0LL);
}