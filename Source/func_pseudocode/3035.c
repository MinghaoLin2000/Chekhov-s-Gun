-[DeviceSetupViewController viewWillAppear]
void __cdecl -[DeviceSetupViewController viewWillAppear](DeviceSetupViewController *self, SEL a2)
{
  WKWebView *v3; // x20
  WKWebViewConfiguration *v4; // x21
  WKUserContentController *v5; // x22
  WKWebView *v6; // x20
  WKWebViewConfiguration *v7; // x21
  WKUserContentController *v8; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
  v4 = objc_retainAutoreleasedReturnValue(-[WKWebView configuration](v3, "configuration"));
  v5 = objc_retainAutoreleasedReturnValue(-[WKWebViewConfiguration userContentController](v4, "userContentController"));
  -[WKUserContentController removeScriptMessageHandlerForName:](
    v5,
    "removeScriptMessageHandlerForName:",
    CFSTR("iTunes_addProtocol"));
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
  v7 = objc_retainAutoreleasedReturnValue(-[WKWebView configuration](v6, "configuration"));
  v8 = objc_retainAutoreleasedReturnValue(-[WKWebViewConfiguration userContentController](v7, "userContentController"));
  -[WKUserContentController addScriptMessageHandler:name:](
    v8,
    "addScriptMessageHandler:name:",
    self,
    CFSTR("iTunes_addProtocol"));
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}