-[SUContainedSoftwareUpdateController setXpcConnection:]
void __cdecl -[SUContainedSoftwareUpdateController setXpcConnection:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3)
{
  objc_storeWeak((id *)&self->_xpcConnection, a3);
}