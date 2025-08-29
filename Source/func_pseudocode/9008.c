-[_TtC34AppleMediaServicesUIDynamicService20XPCServiceConnection .cxx_destruct]
void __cdecl -[XPCServiceConnection .cxx_destruct](
        _TtC34AppleMediaServicesUIDynamicService20XPCServiceConnection *self,
        SEL a2)
{
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService20XPCServiceConnection_connectionListener));
}