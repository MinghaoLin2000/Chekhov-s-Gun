-[MDRemoteServiceSupport rebootDeviceForUUID:type:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport rebootDeviceForUUID:type:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        unsigned int a4)
{
  -[MDRemoteServiceSupport _sendRestoreServiceCommand:toRemoteDeviceWithUUID:type:](
    self,
    "_sendRestoreServiceCommand:toRemoteDeviceWithUUID:type:",
    "reboot",
    a3,
    *(_QWORD *)&a4);
}