-[PKNANSubscriber activateWithCompletion:]
void __cdecl -[PKNANSubscriber activateWithCompletion:](PKNANSubscriber *self, SEL a2, id a3)
{
  id v4; // x0
  id activateHandler; // x8
  id v6; // x20
  NSString *v7; // x21
  void *v8; // x20
  WiFiAwareSubscriber *v9; // x0
  WiFiAwareSubscriber *subscriber; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainBlock(a3);
  activateHandler = self->_activateHandler;
  self->_activateHandler = v4;
  objc_release(activateHandler);
  v6 = objc_alloc((Class)&OBJC_CLASS___WiFiAwareSubscribeConfiguration);
  v7 = objc_retainAutoreleasedReturnValue(-[PKNANSubscriber serviceType](self, "serviceType"));
  v8 = objc_msgSend(v6, "initWithServiceName:", v7);
  objc_release(v7);
  if ( (-[PKNANSubscriber controlFlags](self, "controlFlags") & 1) != 0 )
    objc_msgSend(v8, "setAuthenticationType:", 0LL);
  v9 = (WiFiAwareSubscriber *)objc_msgSend(
                                objc_alloc((Class)&OBJC_CLASS___WiFiAwareSubscriber),
                                "initWithConfiguration:",
                                v8);
  subscriber = self->_subscriber;
  self->_subscriber = v9;
  objc_release(subscriber);
  -[WiFiAwareSubscriber setDelegate:](self->_subscriber, "setDelegate:", self);
  -[WiFiAwareSubscriber start](self->_subscriber, "start");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}