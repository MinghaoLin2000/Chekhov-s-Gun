-[DeviceSetupViewController clickCancelButton:]
// attributes: thunk
void __cdecl -[DeviceSetupViewController clickCancelButton:](DeviceSetupViewController *self, SEL a2, id a3)
{
  -[DeviceSetupViewController ejectDevice](self, "ejectDevice", a3);
}