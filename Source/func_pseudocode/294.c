-[_NSAttributedStringAgentService init]
_NSAttributedStringAgentService *__cdecl -[_NSAttributedStringAgentService init](
        _NSAttributedStringAgentService *self,
        SEL a2)
{
  _NSAttributedStringAgentService *v2; // x19
  NSXPCListener *v3; // x0
  NSXPCListener *listener; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS____NSAttributedStringAgentService;
  v2 = -[_NSAttributedStringAgentService init](&v6, "init");
  v3 = (NSXPCListener *)objc_msgSend(
                          objc_alloc((Class)&OBJC_CLASS___NSXPCListener),
                          "initWithMachServiceName:",
                          CFSTR("com.apple.textkit.nsattributedstringagent"));
  listener = v2->_listener;
  v2->_listener = v3;
  objc_release(listener);
  -[NSXPCListener setDelegate:](v2->_listener, "setDelegate:", v2);
  return v2;
}