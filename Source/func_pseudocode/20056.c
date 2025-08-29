-[PKNANDataSession activateWithCompletion:]
void __cdecl -[PKNANDataSession activateWithCompletion:](PKNANDataSession *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x21
  NSUInteger v6; // x22
  id v7; // x24
  PKNANEndpoint *v8; // x21
  WiFiAwareDiscoveryResult *v9; // x22
  NSString *v10; // x23
  WiFiAwareDataSession *v11; // x0
  WiFiAwareDataSession *dataSession; // x8
  id v13; // x23
  WiFiAwareDataSession *v14; // x0
  id v15; // x0
  id activateHandler; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[PKNANDataSession passphrase](self, "passphrase"));
  v6 = -[NSString length](v5, "length");
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_alloc((Class)&OBJC_CLASS___WiFiAwareDataSession);
    v8 = objc_retainAutoreleasedReturnValue(-[PKNANDataSession peerEndpoint](self, "peerEndpoint"));
    v9 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](v8, "discoveryResult"));
    v10 = objc_retainAutoreleasedReturnValue(-[PKNANDataSession passphrase](self, "passphrase"));
    v11 = (WiFiAwareDataSession *)objc_msgSend(
                                    v7,
                                    "initWithDiscoveryResult:serviceType:serviceSpecificInfo:passphrase:",
                                    v9,
                                    0LL,
                                    0LL,
                                    v10);
    dataSession = self->_dataSession;
    self->_dataSession = v11;
    objc_release(dataSession);
  }
  else
  {
    v13 = objc_alloc((Class)&OBJC_CLASS___WiFiAwareDataSession);
    v8 = objc_retainAutoreleasedReturnValue(-[PKNANDataSession peerEndpoint](self, "peerEndpoint"));
    v9 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](v8, "discoveryResult"));
    v14 = (WiFiAwareDataSession *)objc_msgSend(
                                    v13,
                                    "initWithDiscoveryResult:serviceType:serviceSpecificInfo:",
                                    v9,
                                    0LL,
                                    0LL);
    v10 = (NSString *)self->_dataSession;
    self->_dataSession = v14;
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  -[WiFiAwareDataSession setDelegate:](self->_dataSession, "setDelegate:", self);
  v15 = objc_retainBlock(v4);
  activateHandler = self->_activateHandler;
  self->_activateHandler = v15;
  objc_release(activateHandler);
  -[WiFiAwareDataSession start](self->_dataSession, "start");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}