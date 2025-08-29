-[DeviceFooterViewController setPreviousSecondaryButtonAction:]
void __cdecl -[DeviceFooterViewController setPreviousSecondaryButtonAction:](
        DeviceFooterViewController *self,
        SEL a2,
        SEL a3)
{
  const char *v3; // x17

  if ( a3 )
    v3 = a3;
  else
    v3 = 0LL;
  self->_previousSecondaryButtonAction = v3;
}