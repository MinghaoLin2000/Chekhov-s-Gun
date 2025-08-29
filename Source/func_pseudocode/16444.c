-[UARPUpdaterServiceLegacyAudio dasActivityReceived:]
void __cdecl -[UARPUpdaterServiceLegacyAudio dasActivityReceived:](UARPUpdaterServiceLegacyAudio *self, SEL a2, id a3)
{
  -[LegacyAudioController dasActivityReceived:](self->_controller, "dasActivityReceived:", a3);
}