-[device_http_t .cxx_destruct]
void __cdecl -[device_http_t .cxx_destruct](device_http_t *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong(&self->_performAuthenticationForDeviceHTTP, 0LL);
  objc_storeStrong(&self->_serverCertificateCheckForDeviceHTTP, 0LL);
  objc_storeStrong((id *)&self->_contentEncoding, 0LL);
  objc_storeStrong((id *)&self->_printerDisplayName, 0LL);
  objc_storeStrong((id *)&self->_printerURL, 0LL);
  objc_storeStrong((id *)&self->_session, 0LL);
  objc_storeStrong((id *)&self->_streamedPrinterEndpoint, 0LL);
  objc_storeStrong((id *)&self->_defaultCredential, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_credentialFromPrompt, 0LL);
}