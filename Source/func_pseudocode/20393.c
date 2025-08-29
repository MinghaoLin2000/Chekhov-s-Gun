-[device_http_t storeCredentialBasedOnTransactionResult:]
void __cdecl -[device_http_t storeCredentialBasedOnTransactionResult:](device_http_t *self, SEL a2, id a3)
{
  id v4; // x19
  NSURLCredential *v5; // x20
  unsigned int v6; // w0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self->_credentialFromPrompt);
  if ( v5 )
  {
    v6 = (unsigned int)objc_msgSend(v4, "ippStatus");
    if ( v6 - 4096 < 2 )
    {
LABEL_5:
      objc_release(v5);
      v5 = 0LL;
      PKStoreAuthInfo(self->_printerURL, 0LL);
      goto LABEL_7;
    }
    if ( v6 )
    {
      if ( v6 != 1183 )
        goto LABEL_7;
      goto LABEL_5;
    }
    PKStoreAuthInfo(self->_printerURL, v5);
  }
LABEL_7:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}