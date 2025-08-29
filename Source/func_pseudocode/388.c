-[DeviceUIServiceViewController exportedInterface]
id __cdecl -[DeviceUIServiceViewController exportedInterface](DeviceUIServiceViewController *self, SEL a2)
{
  return +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___AMPDeviceUIServiceProtocol);
}