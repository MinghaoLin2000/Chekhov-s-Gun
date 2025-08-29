-[device_http_t _rememberCredentialSent:]
void __cdecl -[device_http_t _rememberCredentialSent:](device_http_t *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_credentialFromPrompt, a3);
}